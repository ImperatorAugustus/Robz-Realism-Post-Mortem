{"human"
	{inflammation_time 0.25}
	{on spawn
		{add_view	"cigarettesmoke"		"smoke"		"head"}
		{add_view	"drops_water_small2"	"on_water"	"foot3r"}
		{add_view	"drops_water_small2"	"on_water"	"foot3l"}
		{add_view	"drops_water_small3"	"swim"		"foot3r"}
		{add_view	"drops_water_small3"	"swim"		"foot3l"}
		{add_view	"drops_water_small3"	"swim"		"hand2r"}
		{add_view	"drops_water_small3"	"swim"		"hand2l"}
		{add_view	"wash_human_small"		"swim_move"	"head"}
		{add_view	"drops_puddle_small"	"on_puddle"	"foot3r"}
		{add_view	"drops_puddle_small"	"on_puddle"	"foot3l"}
		{add_view	"drops_puddle_small"	"die_in_swamp"	"foot3r"}
		{add_view	"drops_puddle_small"	"die_in_swamp"	"foot3l"}
		
		{add_view	"marker_healing" 		"marker_healing" "head"}
		{add_view	"marker_repair" 		"marker_repair" "head"}
		{add_view	"marker_ammo_out" 		"marker_ammo_out" "head"}
		{add_view	"marker_ammo_refill" 	"marker_ammo_refill" "head"}
		{add_view	"marker_personage" 		"marker_personage" "head"}
		
		{link_sound "move_ground" "human/move/ground"}
		{link_sound "move_road"   "human/move/road"}
		{link_sound "move_sand"   "human/move/sand"}
		{link_sound "move_snow"   "human/move/snow"}
		{link_sound "move_grass"  "human/move/grass"}

		{link_sound "swim" "human/move/swim"}

		{if able "burning"
			{call "add_burn_fx"}
			{view start "burn_fire"}
		}
	}
	{on contact	
		{if not impregnable
			{kill_flags reset}
			{volumes disable contact}
			{delay 2
				{volumes enable contact}
			}
			{if effector "tank"
				{if not user_control
					{health_damage_crush "die" "crush"}
				 else
					{health_damage_crush "die" "crush"}
				}
			else effector "vehicle"
				{if not dead
					{if not user_control
						{call "die"}
					 else
						{call "die"}
					}
				else
					{spawn "bloodsparks_small"}
				}
			else effector "knife"
				{if contact_velocity 5
					{health_damage_count 500
						{effects "" "hit" "damage" "die_from_knife" "die_from_knife"}
					}
				}
			(define "health_damage"
				{health_damage_count %c
					{effects "" "hit" "damage" "die" "die"}
				}
  	        )
			else effector "axe"
				{if contact_velocity 5
  		        	("health_damage" c(500))
  		        }
			(define "contact_part"
			else effector %e
				{if contact_velocity %v
					{if difficulty "easy"
						{if user_control
							("health_damage" c(%ud))
						else
							("health_damage" c(%d))
						}
					else
						("health_damage" c(%d))
					}

					("health_damage" c(%d))
				}

  	        )
			("contact_part" e("building_part")	v(3)	ud(20)	d(120))
			("contact_part" e("big part")		v(3)	ud(20)	d(120))
			("contact_part" e("medium part")	v(6)	ud(10)	d(80))
			("contact_part" e("small part")		v(10)	ud(3)	d(40))
			else effector "chicken"
				{health_damage_count 0
					{effects "" "hit" "hit" "hit" "hit"}
				}
			else effector "wire"
				{health_damage_count 20
					{effects "" "hit" "damage" "die" "die"}
				}
			else effector "flame_piece"
				{health_damage_count 15
					{effects "" "hit" "hit" "die" "die"}
				}
			else effector "canister"
				{health_damage_count 500
					{effects "" "hit" "hit" "die" "die"}
				}
			}
		}
	}
	{on bullet_hit
		{kill_flags reset}
		;{spawn "ex_bul_sm"}		; to generate hit signal
		{if stuff "shell fg"
			{bullet_detonate}
		else stuff "bazooka"
			{bullet_detonate}
			{call "process_bullet_hit"}
		else stuff "bullet"
			{if volume_armored
				{bullet_detonate}
			}
			{call "process_bullet_hit"}
		else
			{call "process_bullet_hit"}
		}
	}
	{on blow
		{if not name "knife"
			{start_sound "human/blow"}
		}
	}
	{on blow opponent
		{if name "knife"
			{health_damage_blow
				{effects "" "hit" "hit" "die_from_knife" "die_from_knife"}
			}
		else
			{if name "head"
				{spawn "bloodsparks_small02" "head"}
			}
			{health_damage_blow
				{effects "" "hit" "hit" "die" "die"}
			}
		}
	}
	{on "process_bullet_hit"
		{if hit_side front	{kill_flags front}
		else hit_side back	{kill_flags back}
		else				{kill_flags front back}
		}
		{if velocity 7		{kill_flags run}
		else velocity 0.1	{kill_flags go}
		}
		{kill_flags piercing}
		{if	stuff "rifle"	{kill_flags rifle}}
		{if	stuff "mgun"	{kill_flags mgun}}
		{if	stuff "smg"	{kill_flags smg}}
		{if	stuff "pistol"	{kill_flags pistol}}

		{health_damage_pierce
			{effects	"hit-scream"
						"hit-light" "hit-heavy"
						"die" "hit-explosion"
						"throw-off" "throw-off-and-die"
			}
			{explosive_treshold 70}
			{table {30 1} {200 2.5} {500 3} {5000 5}}
		}
		{if volume "head"
;			{if not volume_armored
;				{if	stuff "sniper" {die}}
;			}
			{if not dead
				{if volume_armored
					{if stuff "pistol" {if rand 0.7 ("health_damage" c(250))}}
					{if stuff "smg" {if rand 0.7 ("health_damage" c(250))}}
					{if stuff "assault_rifle" ("health_damage" c(250))}
					{if not stuff "pistol"
						{if not stuff "smg"
							("health_damage" c(250))
						}
					}
				else
					("health_damage" c(250))
				}
			}
			{spawn "blood_hit"}
			{if rand 0.5
				{take_off "head"
					{impulse up 5 2 dir 7 3}
				}
			}
		}
		{if volume "body"
			{if not dead
				{if stuff "pistol"
					{if rand 0.4
						("health_damage" c(75))
					else
						("health_damage" c(25))
					}
				}
				{if stuff "smg"
					{if rand 0.4
						("health_damage" c(75))
					else
						("health_damage" c(25))
					}
				}
				{if stuff "stg"
					{spawn "blood_hit"}
					{if rand 0.5
						("health_damage" c(80))
					else
						("health_damage" c(40))
					}
				}
				{if stuff "carbine"
					{spawn "blood_hit"}
					{if rand 0.4 
						("health_damage" c(80))
					else
						("health_damage" c(35))
					}
				else stuff "rifle"
					{spawn "blood_hit"}  
					{if rand 0.7 
						("health_damage" c(100))
					else
						("health_damage" c(50))
					}
				}
				{if stuff "sniper"
					{spawn "blood_hit"}
					{if rand 0.7 
						("health_damage" c(100))
					else
						("health_damage" c(50))
					}
				}
				{if stuff "mgun"
					{spawn "blood_hit"}
					{if rand 0.7 
						("health_damage" c(100))
					else
						("health_damage" c(50))
					}
				}
				{if stuff "hmgun"
					{spawn "blood_hit"}
					{if rand 0.9 
						("health_damage" c(100))
					else
						("health_damage" c(65))
					}
				}
			}
		}
		{if volume "foot1l"
			{if not dead
				{if stuff "pistol" {if rand 0.3 ("health_damage" c(25))}}
				{if stuff "stg"    {if rand 0.5 ("health_damage" c(35))}}
				{if stuff "smg"    {if rand 0.3 ("health_damage" c(25))}}
				{if stuff "carbine"  {if rand 0.4 ("health_damage" c(35))}}
				{if stuff "rifle"  {if rand 0.5 ("health_damage" c(50))}}
				{if stuff "sniper" {if rand 0.5 ("health_damage" c(50))}}
				{if stuff "mgun"   {if rand 0.5 ("health_damage" c(50))}}
				{if stuff "hmgun"  {if rand 0.7 ("health_damage" c(100))}}
			}
		}
		{if volume "foot1r"
			{if not dead
				{if stuff "pistol" {if rand 0.3 ("health_damage" c(25))}}
				{if stuff "stg"    {if rand 0.5 ("health_damage" c(35))}}
				{if stuff "smg"    {if rand 0.3 ("health_damage" c(25))}}
				{if stuff "carbine"  {if rand 0.4 ("health_damage" c(35))}}
				{if stuff "rifle"  {if rand 0.5 ("health_damage" c(50))}}
				{if stuff "sniper" {if rand 0.5 ("health_damage" c(50))}}
				{if stuff "mgun"   {if rand 0.5 ("health_damage" c(50))}}
				{if stuff "hmgun"  {if rand 0.7 ("health_damage" c(100))}}
			}
		}
	}

	{on blast_hit overload
		{if min_energy 0.8
			("health_damage" c(100))
		}
		{if stuff "kamikaze"
			{call "die"}
			("health_damage" c(250))
			{con "kamikaze"}
		}
		
		{kill_flags reset}
		{if hit_side front	{kill_flags front}
		else hit_side back	{kill_flags back}
	    else				{kill_flags front back}
	    }
		{kill_flags blast}

		{health_damage_blast
			{effects	"hit-scream"
						"hit-light" "hit-heavy"
						"die" "hit-explosion"
						"throw-off" "throw-off-and-die"
			}
			{table {0.5 0.5} {2 1} {10 3} {50 6}}
		}
	}
	{on "die_throw_high"
		{set "die_after_throw" 1}
		{spawn "ground_blood_big"}
		{if rand 0.15 {spawn "ground_blood01"}}
	        {if rand 0.1 {spawn "ground_blood02"}}
	        {if rand 0.2 {spawn "ground_blood03"}}
		{call "die_scream"}
		{call "throw_high"}
	}
	
	{on "hit-scream"
		{if not "talk"
			{set "talk" 1}
			{talk "injuring"}
			{delay 10 2
				{set "talk" 0}
			}
		}
	}

	{on "hit-light"
		{if not dead
			{if rand 0.03 {knockdown 2 1}}
			{if rand 0.65 {spawn "bloodspark_small01"}}
                        {if rand 0.55 {spawn "bloodspark_small02"}}
                        {if rand 0.4 {spawn "bloodsparks01"}}
                        {if rand 0.2 {spawn "bloodsparks02"}}
                        {if rand 0.1 {spawn "ground_blood_big"}}
                        {if rand 0.1 {spawn "ground_blood01"}}
                        {if rand 0.1 {spawn "ground_blood02"}}
                        {if rand 0.2 {spawn "ground_blood03"}}
                        {if rand 0.1 {spawn "mainspark_small03"}}
			else
				{if rand 0.1 {call "explosion"}}
		}
	}
	
	{on "hit-heavy"
		{if not dead
		        {if stuff "shell apcr" {if rand 0.35 {call "explosion"}}
                        else
			{if stuff "shell ap" {if rand 0.2 {call "explosion"}}
			else
			{if stuff "fg_medium" {if rand 0.35 {call "explosion"}}
			else
			{if stuff "fg_heavy" {if rand 0.5 {call "explosion"}}
			else
			{if stuff "dynamite" {if rand 0.65 {call "explosion"}}
			else
			{if stuff "shell fg" {if rand 0.25 {call "explosion"}}
			else
			{if stuff "apcr" {if rand 0.4 {call "explosion"}}
			else
                        {if stuff "ap" {if rand 0.25 {call "explosion"}}
			else
			{if stuff "fg" {if rand 0.2 {call "explosion"}}
			else
				{if rand 0.05 {knockdown 2 1}}
			        {if rand 0.7 {spawn "bloodspark_small01"}}
                                {if rand 0.65 {spawn "bloodspark_small02"}}
                                {if rand 0.55 {spawn "bloodsparks01"}}
                                {if rand 0.5 {spawn "bloodsparks02"}}
                                {if rand 0.1 {spawn "ground_blood_big"}}
                                {if rand 0.2 {spawn "ground_blood01"}}
                                {if rand 0.3 {spawn "ground_blood02"}}
                                {if rand 0.2 {spawn "ground_blood03"}}
                                {if rand 0.2 {spawn "mainspark_small03"}}
                        }}}
                        }}}
                        }}}
                else
                {if rand 0.2 {call "explosion"}}
		}
	}
	{on "hit-explosion"
		{if tagged "no_explosion"
			{call "die"}
		else
			{call "die_scream"}
			{call "explosion"}
		}
	}
	{on "throw-off"
		{set "die_after_throw" 0}
		{call "throw_high"}
	}
	{on "throw-off-and-die"
		{set "die_after_throw" 1}
		{call "die_scream"}
		{call "throw_high"}
	}
	
	{on "hit"
		{call "hit-scream"}
	}
	{on "damage"
		{if rand 0.1 {spawn "ground_blood01"}}
	        {if rand 0.1 {spawn "ground_blood02"}}
	        {if rand 0.1 {spawn "ground_blood03"}}
		{call "hit"}
	}

	{on "throw_high"
		{if senseless
			{if not dead
				{if not user_control
					{call "die"}
				}
			}
		else
			{if not dead
				{if linked "vehicle"
					{if "die_after_throw"
						{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360 die force}
					else
						{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360 force}
					}
				else
					{if "die_after_throw"
						{throw_off up 4 0.8 dir 3.5 0.5 forward 0 0 die}
					else
						{throw_off up 4 0.8 dir 3.5 0.5 forward 0 0}
					}
				}
			else
				{call "explosion"}
			}
		}
	}
	{on "throw_off_end"
		{if not user_control
			{health_damage_count 50 
				{effects "" "hit" "damage" "die" "die"}
			}
		}
		{call "knock_down"}
	}
	{on "throw_off_end_die"
		{call "die"}
	}
	{on "throw_off_from_tower"
		{throw_off up 1 forward 2 die force}
	}
	{on "throw_off_from_ladder"
		{throw_off up 1 forward -2 die force}
	}
	{on "throw_off_from_ship"
		{throw_off up 4 dir 3 1 die force}
	}
	{on "throw_off_from_vehicle"
		{if difficulty "multiplayer"
			{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360 force die}
		else
			{if user_control
				{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360 force}
			else
				{throw_off up 1.3 0.5 dir 5 1 forward 4 turn 0 360 rnd_die 0.7 force}
			}
		}
	}
	{on "linker_simulation"
		{if effector "airborne"
		 else effector "cannon"
;			{throw_off up 2.25 0.75 forward 2.25 0.75 turn 0 360 force}
		 else altitude 3
			{throw_off up 1 forward 2 die force}
		}
	}

	{on "knock_down"
		{if not water_level -0.1
			{knockdown 12 3}
		}
	}

	{on "die"
		{if not dead
			{spawn "bloodsparks_small"}
			{if linked
				{if linked "shipflak"
					{call "throw_off_from_ship"}
				else linked "doublecolt"
					{call "throw_off_from_ship"}
				else linked "car"
					{if place "driver"
						{throw_off up 1.6 forward 2 turn -90 die force rotate_to_dir}
					else place "commander"
						{throw_off up 1.6 forward 2 turn +90 die force rotate_to_dir}
					else
						{call "die_with_blood"}
					}
				else altitude 2
					{if boarding
						{call "throw_off_from_ladder"}
					else
						{call "throw_off_from_tower"}
					}
				else linked "cannon"
					{call "die_with_blood"}
				else
					{call "throw_off_from_vehicle"}
				}
			else
				{call "die_with_blood"}
			}
		}
	}
	{on "die_with_blood"
		{if not senseless
			{if rand 0.5 {spawn "ground_blood01"}}
	                {if rand 0.3 {spawn "ground_blood02"}}
	                {if rand 0.2 {spawn "ground_blood03"}}
	                {if rand 0.1 {spawn "ground_blood01"}}
	                {if rand 0.1 {spawn "ground_blood02"}}
		}
		{call "die_without_blood"}
	}
	{on "die_without_blood"
;		{con "die"}
		{view pause "swim"}
		{call "die_scream"}
		{if not kill_flags blast
			{kill_flags piercing}
		}
		{die}
;		{able collect 1}
		{delay 3
			{volumes enable contact}
		}
;		{delay 30 {delete}}
	}
	{on "die_scream"
		{if not "die_sound"
			{set "die_sound" 1}
			{talk "death_cry"}
			{signal mandie 5}
		}
	}
	{on "die_from_knife"
		{set "die_from_knife" 1}
		{call "die"}
	}

	{on ground_hit
		{if rand 0.8 {spawn "ground_blood01"}}
	        {if rand 0.7 {spawn "ground_blood02"}}
	        {if rand 0.6 {spawn "ground_blood03"}}
	}

	(define "piece_explosion"
		{spawn %0 %1
			{impulse	up 1 0.5 dir 8 4
						cx 0 12 cy 0 12
						fx 0 60 fy 0 60 fz 80 40
			}
		}
	)
	(define "piece_crush"
		{spawn %0 %1
			{impulse	up 0.1 0.1
						fx 0 7 fy 0 7 fz 0 7
			}
		}
	)
	(define "spawn_pieces"
		;left hand
		{if rand 0.2
			(%0 args "#hand00" "hand1l")
		else rand 0.2
			(%0 args "#hand01" "hand1l")
		else rand 0.2
			(%0 args "#hand02" "hand1l")
		}
		;right hand
		{if rand 0.2
			(%0 args "#hand00" "hand1r")
		else rand 0.2
			(%0 args "#hand01" "hand1r")
		else rand 0.2
			(%0 args "#hand02" "hand1r")
		}

		;left foot
		{if rand 0.3
			(%0 args "#leg00" "foot1l")
		}
		;right foot
		{if rand 0.3
			(%0 args "#leg00" "foot1r")
		}

		;head
		{if rand 0.3
			(%0 args "#head00" "head")
		else rand 0.3
			(%0 args "#head01" "head")
		}
	)

	{on "explosion"
		{if personage
			{call "die"}
		else
		        {if stuff "zenite"
			        {if rand 0.7 {spawn "bloodspark_small01"}}
                                {if rand 0.6 {spawn "bloodspark_small02"}}
                                {if rand 0.5 {spawn "bloodsparks01"}}
                                {if rand 0.3 {spawn "bloodsparks02"}}
                                {if rand 0.3 {spawn "ground_blood_big"}}
                                {if rand 0.1 {spawn "ground_blood_small"}}
                                {if rand 0.25 {spawn "ground_blood01"}}
                                {if rand 0.1 {spawn "ground_blood02"}}
                                {if rand 0.5 {spawn "ground_blood03"}}
                                {if rand 0.1 {spawn "mainspark_small03"}}
		else
			{if stuff "rifle"
			    {if rand 0.5 {spawn "bloodspark_small01"}}
                            {if rand 0.5 {spawn "bloodspark_small02"}}
                            {if rand 0.3 {spawn "bloodsparks01"}}
                            {if rand 0.15 {spawn "bloodsparks02"}}
                            {if rand 0.2 {spawn "ground_blood_big"}}
                            {if rand 0.2 {spawn "ground_blood_small"}}
                            {if rand 0.1 {spawn "ground_blood01"}}
                            {if rand 0.2 {spawn "ground_blood02"}}
                            {if rand 0.1 {spawn "ground_blood03"}}
                            {if rand 0.2 {spawn "mainspark_small03"}}
        	else
                        {if stuff "mgun"
			        {if rand 0.4 {spawn "bloodspark_small01"}}
                                {if rand 0.3 {spawn "bloodspark_small02"}}
                                {if rand 0.5 {spawn "bloodsparks01"}}
                                {if rand 0.2 {spawn "bloodsparks02"}}
                                {if rand 0.1 {spawn "ground_blood_big"}}
                                {if rand 0.2 {spawn "ground_blood_small"}}
                                {if rand 0.1 {spawn "ground_blood01"}}
                                {if rand 0.2 {spawn "ground_blood02"}}
                                {if rand 0.2 {spawn "ground_blood03"}}
                                {if rand 0.3 {spawn "mainspark_small03"}}
                else
                        {if stuff "hmgun"
			    {if rand 0.5 {spawn "bloodspark_small01"}}
                            {if rand 0.5 {spawn "bloodspark_small02"}}
                            {if rand 0.3 {spawn "bloodsparks01"}}
                            {if rand 0.5 {spawn "bloodsparks02"}}
                            {if rand 0.2 {spawn "ground_blood_big"}}
                            {if rand 0.5 {spawn "ground_blood_small"}}
                            {if rand 0.3 {spawn "ground_blood01"}}
                            {if rand 0.3 {spawn "ground_blood02"}}
                            {if rand 0.3 {spawn "ground_blood03"}}
                            {if rand 0.1 {spawn "mainspark_small03"}}
                  else
                        {if stuff "shotgun"
			    {if rand 0.75 {spawn "bloodspark_small01"}}
                            {if rand 0.5 {spawn "bloodspark_small02"}}
                            {if rand 0.3 {spawn "bloodsparks01"}}
                            {if rand 0.15 {spawn "bloodsparks02"}}
                            {if rand 0.1 {spawn "ground_blood_big"}}
                            {if rand 0.2 {spawn "ground_blood_small"}}
                            {if rand 0.3 {spawn "ground_blood01"}}
                            {if rand 0.2 {spawn "ground_blood02"}}
                            {if rand 0.3 {spawn "ground_blood03"}}
                            {if rand 0.1 {spawn "mainspark_small03"}}
                    else
                        {if stuff "smg"
			    {if rand 0.55 {spawn "bloodspark_small01"}}
                            {if rand 0.5 {spawn "bloodspark_small02"}}
                            {if rand 0.3 {spawn "bloodsparks01"}}
                            {if rand 0.05 {spawn "bloodsparks02"}}
                            {if rand 0.1 {spawn "ground_blood_big"}}
                            {if rand 0.2 {spawn "ground_blood_small"}}
                            {if rand 0.1 {spawn "ground_blood01"}}
                            {if rand 0.2 {spawn "ground_blood02"}}
                            {if rand 0.1 {spawn "ground_blood03"}}
                            {if rand 0.1 {spawn "mainspark_small03"}}
                    else
                    	{if stuff "pistol"
			        {if rand 0.45 {spawn "bloodspark_small01"}}
                                {if rand 0.3 {spawn "bloodspark_small02"}}
                                {if rand 0.2 {spawn "bloodsparks01"}}
                                {if rand 0.01 {spawn "bloodsparks02"}}
                                {if rand 0.1 {spawn "ground_blood_big"}}
                                {if rand 0.1 {spawn "ground_blood_small"}}
                                {if rand 0.1 {spawn "ground_blood01"}}
                                {if rand 0.1 {spawn "ground_blood02"}}
                                {if rand 0.1 {spawn "ground_blood03"}}
                                {if rand 0.1 {spawn "mainspark_small03"}}
                     	else
                                {if rand 0.7 {spawn "excloud02"}}
                                {if rand 0.85 {spawn "excloud"}}
                                {if rand 0.5 {spawn "bloodsparks01"}}
                                {if rand 0.5 {spawn "bloodsparks02"}}
                                {if rand 0.5 {spawn "ground_blood_big"}}
                                {if rand 0.15 {spawn "exflame"}}
                                {if rand 0.7 {spawn "ground_blood01"}}
                                {if rand 0.6 {spawn "ground_blood02"}}
                                {if rand 0.5 {spawn "ground_blood03"}}
                                {if rand 0.3 {spawn "ground_blood_big"}}
                                {if rand 0.2 {spawn "ground_blood01"}}
                                {if rand 0.3 {spawn "ground_blood02"}}
                                {if rand 0.2 {spawn "ground_blood03"}}
                                {if rand 0.1 {spawn "ground_blood_big"}}
	{if rand 0.2
	         {if rand 0.25
                    {spawn "#_hand01" {impulse up 2 4 dir 2 5}}
                    else
                        {if rand 0.35
                            {spawn "#_hand02" {impulse up 2 4 dir 2 8}}
                            else
                                {if rand 0.45
                                    {spawn "#_hand03" {impulse up 2 4 dir 2 5}}
                                    else
                                        {if rand 0.55
                                            {spawn "#_hand04" {impulse up 2 4 dir 6 8}}
                                            else
                                                {spawn "#_hand05" {impulse up 2 4 dir 2 5}}
                                        }
                                }
                        }
                }
                {if rand 0.25
                    {spawn "#_hand01" {impulse up 3 5 dir 1 4}}
                    else
                        {if rand 0.35
                            {spawn "#_hand02" {impulse up 3 5 dir 1 8}}
                            else
                                {if rand 0.45
                                    {spawn "#_hand03" {impulse up 3 5 dir 1 6}}
                                    else
                                        {if rand 0.55
                                            {spawn "#_hand04" {impulse up 3 5 dir 1 4}}
                                            else
                                                {spawn "#_hand05" {impulse up 3 5 dir 1 4}}
                                        }
                                }
                        }
                }
                {if rand 0.3
                    {spawn "#_leg01" {impulse up 2 3 dir 1 2}}
                    else
                        {if rand 0.5
                            {spawn "#_leg02" {impulse up 2 3 dir 1 8}}
                            else
                                {if rand 0.65
                                    {spawn "#_leg03" {impulse up 2 3 dir 1 2}}
                                    else
                                        {spawn "#_leg04" {impulse up 2 3 dir 1 6}}
                                }
                        }
                }
                {if rand 0.3
                    {spawn "#_leg01" {impulse up 1 4 dir 1 3}}
                    else
                        {if rand 0.5
                            {spawn "#_leg02" {impulse up 3 4 dir 1 3}}
                            else
                                {if rand 0.65
                                    {spawn "#_leg03" {impulse up 1 4 dir 1 8}}
                                    else
                                        {spawn "#_leg04" {impulse up 1 4 dir 1 3}}
                                }
                        }
                }
                {if rand 0.25
                    {spawn "#_head01" {impulse up 3 5 dir 1 2}}
                    else
                        {if rand 0.3
                            {spawn "#_head02" {impulse up 3 5 dir 1 2}}
                            else
                                {if rand 0.5
                                    {spawn "#_head03" {impulse up 4 5 dir 6 8}}
                                    else
                                        {if rand 0.65
                                            {spawn "#_head04" {impulse up 3 5 dir 1 2}}
                                            else
                                                {spawn "#_head05" {impulse up 3 5 dir 1 2}}
                                        }
                                }
                        }
                }
                {if rand 0.33
                    {spawn "#_torse01" {impulse up 0 1 dir 0 1}}
                    else
                        {if rand 0.5
                            {spawn "#_torse02" {impulse up 0 1 dir 0 1}}
                            else
                                {spawn "#_torse03" {impulse up 0 1 dir 0 1}}
                        }
                }
                {if rand 0.33
                    {spawn "#_guts01" {impulse up 1 2 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_guts01a" {impulse up 1 4 dir 1 8}}
                            else
                                {spawn "#_guts01b" {impulse up 1 3 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "#_guts02" {impulse up 1 2 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_guts02a" {impulse up 1 2 dir 1 2}}
                            else
                                {spawn "#_guts02b" {impulse up 1 3 dir 3 6}}
                        }
                }
                {if rand 0.33
                    {spawn "#_guts03" {impulse up 1 2 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_guts03a" {impulse up 1 3 dir 1 8}}
                            else
                                {spawn "#_guts03b" {impulse up 1 3 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "#_sguts01" {impulse up 1 2 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_sguts02" {impulse up 1 2 dir 1 2}}
                            else
                                {spawn "#_sguts03" {impulse up 1 3 dir 3 6}}
                        }
                }
                {if rand 0.33
                    {spawn "#_sguts03" {impulse up 3 4 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_sguts02" {impulse up 3 4 dir 1 8}}
                            else
                                {spawn "#_sguts01" {impulse up 1 5 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "#_sguts03" {impulse up 2 6 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_sguts01" {impulse up 2 7 dir 1 6}}
                            else
                                {spawn "#_sguts02" {impulse up 1 5 dir 3 5}}
                        }
                }
		{if rand 0.1 {spawn "#_guts01" {impulse up 1 2 dir 2 3}}}
                {if rand 0.15 {spawn "#_guts01a" {impulse up 1 2 dir 1 2}}}
                {if rand 0.2 {spawn "#_guts01b" {impulse up 1 2 dir 1 5}}}
                {if rand 0.1 {spawn "#_guts01" {impulse up 1 4 dir 1 8}}}
                {if rand 0.15 {spawn "#_guts02a" {impulse up 1 2 dir 2 3}}}
                {if rand 0.2 {spawn "#_guts02b" {impulse up 3 3 dir 2 4}}}
                {if rand 0.1 {spawn "#_guts01" {impulse up 1 4 dir 1 8}}}
                {if rand 0.15 {spawn "#_guts03a" {impulse up 1 3 dir 3 5}}}
                {if rand 0.2 {spawn "#_guts03b" {impulse up 1 2 dir 1 2}}}
		{delay 0.075 {call "delete"}}
		       	else
	{if rand 0.3
		       	        {if rand 0.33
                    {spawn "#_xlcorp01" {impulse up 0 1 dir 0 1}}
                    else
                        {if rand 0.5
                            {spawn "#_xlcorp02" {impulse up 0 1 dir 0 1}}
                            else
                                {spawn "#_xlcorp03" {impulse up 0 1 dir 0 1}}
                        }
                }
                 {if rand 0.33
                    {spawn "#_foot01" {impulse up 3 4 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_foot02" {impulse up 3 4 dir 7 8}}
                            else
                                {spawn "#_foot03" {impulse up 3 5 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "#_foot01" {impulse up 2 6 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_foot02" {impulse up 2 7 dir 1 2}}
                            else
                                {spawn "#_foot03" {impulse up 1 5 dir 3 5}}
                        }
                }
				{if rand 0.33
                    {spawn "#_sguts03" {impulse up 4 6 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_sguts01" {impulse up 2 7 dir 1 8}}
                            else
                                {spawn "#_sguts02" {impulse up 1 5 dir 3 7}}
                        }
                }
		{if rand 0.1 {spawn "#_guts01" {impulse up 1 2 dir 2 3}}}
                {if rand 0.15 {spawn "#_guts01a" {impulse up 2 4 dir 3 4}}}
                {if rand 0.2 {spawn "#_guts01b" {impulse up 1 2 dir 1 2}}}
                {if rand 0.1 {spawn "#_guts01" {impulse up 3 4 dir 1 8}}}
                {if rand 0.15 {spawn "#_guts02a" {impulse up 1 2 dir 2 3}}}
                {if rand 0.2 {spawn "#_guts02b" {impulse up 2 3 dir 2 7}}}
                {if rand 0.1 {spawn "#_guts01" {impulse up 1 4 dir 1 8}}}
                {if rand 0.15 {spawn "#_guts03a" {impulse up 3 4 dir 3 5}}}
                {if rand 0.2 {spawn "#_guts03b" {impulse up 1 2 dir 1 2}}}
		{delay 0.075 {call "delete"}}
						else
	{if rand 0.4
                {if rand 0.25
                    {spawn "#_hand01" {impulse up 2 4 dir 2 5}}
                    else
                        {if rand 0.35
                            {spawn "#_hand02" {impulse up 2 4 dir 2 5}}
                            else
                                {if rand 0.45
                                    {spawn "#_hand03" {impulse up 2 4 dir 2 8}}
                                    else
                                        {if rand 0.55
                                            {spawn "#_hand04" {impulse up 2 4 dir 2 5}}
                                            else
                                                {spawn "#_hand05" {impulse up 2 4 dir 2 5}}
                                        }
                                }
                        }
                }
                {if rand 0.25
                    {spawn "#_hand01" {impulse up 3 5 dir 1 4}}
                    else
                        {if rand 0.35
                            {spawn "#_hand02" {impulse up 3 5 dir 1 4}}
                            else
                                {if rand 0.45
                                    {spawn "#_hand03" {impulse up 3 5 dir 1 8}}
                                    else
                                        {if rand 0.55
                                            {spawn "#_hand04" {impulse up 3 5 dir 1 7}}
                                            else
                                                {spawn "#_hand05" {impulse up 3 5 dir 1 4}}
                                        }
                                }
                        }
                }
                {if rand 0.25
                    {spawn "#_head01" {impulse up 3 5 dir 1 8}}
                    else
                        {if rand 0.3
                            {spawn "#_head02" {impulse up 3 5 dir 1 2}}
                            else
                                {if rand 0.5
                                    {spawn "#_head03" {impulse up 4 5 dir 1 2}}
                                    else
                                        {if rand 0.65
                                            {spawn "#_head04" {impulse up 3 5 dir 1 5}}
                                            else
                                                {spawn "#_head05" {impulse up 3 5 dir 1 2}}
                                        }
                                }
                        }
                }
                {if rand 0.4
                    {spawn "#_lowtor01" {impulse up 0 1 dir 0 1}}
                    else
                        {if rand 0.5
                            {spawn "#_lowtor02" {impulse up 0 1 dir 0 1}}
                            else
                                {spawn "#_lowtor03" {impulse up 0 1 dir 0 1}}
                        }
                }
                {if rand 0.33
                    {spawn "#_sguts01" {impulse up 1 2 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_sguts02" {impulse up 2 3 dir 1 8}}
                            else
                                {spawn "#_sguts03" {impulse up 1 3 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "#_sguts03" {impulse up 3 4 dir 2 8}}
                    else
                        {if rand 0.5
                            {spawn "#_sguts02" {impulse up 1 3 dir 1 2}}
                            else
                                {spawn "#_sguts01" {impulse up 1 5 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "#_sguts03" {impulse up 2 6 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_sguts01" {impulse up 2 7 dir 1 2}}
                            else
                                {spawn "#_sguts02" {impulse up 1 5 dir 3 5}}
                        }
                }
		{if rand 0.1 {spawn "#_guts01" {impulse up 1 2 dir 2 3}}}
                {if rand 0.15 {spawn "#_guts01a" {impulse up 1 2 dir 1 2}}}
                {if rand 0.2 {spawn "#_guts01b" {impulse up 1 2 dir 1 2}}}
                {if rand 0.1 {spawn "#_guts01" {impulse up 1 3 dir 2 3}}}
                {if rand 0.15 {spawn "#_guts01a" {impulse up 1 2 dir 1 2}}}
                {if rand 0.2 {spawn "#_guts01b" {impulse up 2 4 dir 1 8}}}
                {if rand 0.1 {spawn "#_guts01" {impulse up 1 2 dir 1 7}}}
                {if rand 0.15 {spawn "#_guts02a" {impulse up 1 1 dir 2 3}}}
                {if rand 0.2 {spawn "#_guts02b" {impulse up 4 5 dir 2 4}}}
                {if rand 0.1 {spawn "#_guts01" {impulse up 1 2 dir 1 8}}}
                {if rand 0.15 {spawn "#_guts03a" {impulse up 1 3 dir 3 5}}}
                {if rand 0.2 {spawn "#_guts03b" {impulse up 1 2 dir 1 2}}}
		{delay 0.075 {call "delete"}}							else
       {if rand 0.5
                  {if rand 0.15
                    {spawn "#_corp01" {impulse up 0 1 dir 0 1}}
                    else
                        {if rand 0.25
                            {spawn "#_corp02" {impulse up 0 1 dir 0 1}}
                            else
                                {if rand 0.35
                                    {spawn "#_corp03" {impulse up 0 1 dir 0 1}}
                                    else
                                        {if rand 0.5
                                            {spawn "#_xlcorp01" {impulse up 0 1 dir 0 1}}
                                            else
                                              {if rand 0.75
                                                {spawn "#_xlcorp02" {impulse up 0 1 dir 0 1}}
                                                else
                                                    {spawn "#_xlcorp03" {impulse up 0 1 dir 0 1}}
                                        }
                                }}
                        }
                }
                {if rand 0.33
                    {spawn "#_foot01" {impulse up 3 4 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_foot02" {impulse up 3 4 dir 1 2}}
                            else
                                {spawn "#_foot03" {impulse up 1 5 dir 5 8}}
                        }
                }
                {if rand 0.33
                    {spawn "#_foot01" {impulse up 2 6 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_foot02" {impulse up 2 7 dir 1 2}}
                            else
                                {spawn "#_foot03" {impulse up 1 5 dir 3 5}}
                        }
                }
                                {if rand 0.1 {spawn "#_guts01" {impulse up 1 2 dir 2 3}}}
                                {if rand 0.15 {spawn "#_guts01a" {impulse up 1 2 dir 1 2}}}
                                {if rand 0.2 {spawn "#_guts01b" {impulse up 1 2 dir 1 2}}}
                                {if rand 0.1 {spawn "#_guts01" {impulse up 1 3 dir 2 3}}}
                                {if rand 0.15 {spawn "#_guts01a" {impulse up 1 2 dir 1 2}}}
                                {if rand 0.2 {spawn "#_guts01b" {impulse up 2 4 dir 1 8}}}
                                {if rand 0.1 {spawn "#_guts01" {impulse up 1 2 dir 1 7}}}
                                {if rand 0.15 {spawn "#_guts02a" {impulse up 1 1 dir 2 3}}}
                                {if rand 0.2 {spawn "#_guts02b" {impulse up 4 5 dir 2 4}}}
                                {if rand 0.1 {spawn "#_guts01" {impulse up 1 2 dir 1 8}}}
                                {if rand 0.15 {spawn "#_guts03a" {impulse up 1 3 dir 3 5}}}
                                {if rand 0.2 {spawn "#_guts03b" {impulse up 1 2 dir 1 2}}}
		                {delay 0.075 {call "delete"}}
	        else
		  {if rand 0.33
                    {spawn "#_full01"}
                    else
                        {if rand 0.5
                            {spawn "#_full02"}
                            else
                                {spawn "#_full03"}
                        }
                }
                 {if rand 0.33
                    {spawn "#_sguts01" {impulse up 1 2 dir 2 8}}
                    else
                        {if rand 0.5
                            {spawn "#_sguts02" {impulse up 1 2 dir 1 2}}
                            else
                                {spawn "#_sguts03" {impulse up 1 3 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "#_sguts03" {impulse up 3 4 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_sguts02" {impulse up 3 4 dir 1 5}}
                            else
                                {spawn "#_sguts01" {impulse up 1 5 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "#_sguts03" {impulse up 2 6 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "#_sguts01" {impulse up 2 7 dir 1 8}}
                            else
                                {spawn "#_sguts02" {impulse up 1 5 dir 3 5}}
                        }
                }
		{if rand 0.1 {spawn "#_guts01" {impulse up 1 2 dir 2 3}}}
                {if rand 0.15 {spawn "#_guts01a" {impulse up 1 2 dir 1 2}}}
                {if rand 0.2 {spawn "#_guts01b" {impulse up 2 4 dir 1 8}}}
                {if rand 0.1 {spawn "#_guts01" {impulse up 1 2 dir 2 3}}}
                {if rand 0.15 {spawn "#_guts01a" {impulse up 3 4 dir 1 2}}}
                {if rand 0.2 {spawn "#_guts01b" {impulse up 1 3 dir 1 5}}}
                {if rand 0.1 {spawn "#_guts01" {impulse up 1 2 dir 1 8}}}
                {if rand 0.15 {spawn "#_guts02a" {impulse up 1 2 dir 2 3}}}
                {if rand 0.2 {spawn "#_guts02b" {impulse up 1 3 dir 2 8}}}
                {if rand 0.1 {spawn "#_guts01" {impulse up 2 3 dir 1 2}}}
                {if rand 0.15 {spawn "#_guts03a" {impulse up 1 3 dir 3 5}}}
                {if rand 0.2 {spawn "#_guts03b" {impulse up 1 2 dir 1 2}}}
                {delay 0.075 {call "delete"}}
							}}}
						}
					}
				}			
			}
			}
            }
            }
            }		
		}	
	}

	{on "crush"
		{if personage
			{call "die"}
		else
                        ;("spawn_pieces" args "piece_crush")
			{call "explosion"}
		}
	}
	{on "delete"
		{if not dead
			{stat_notify die}
		}
		{delete}
	}
	{on "burn_volume"
		{if volume "body"
			{call "_burn"}
		}
	}
	{on "_burn"
		{if not burned
			{able "burning" 1}
			{able select 0}
			(define "try_get_off"
				{delay %0 0.5
					{get_off}
				}
			)
			("try_get_off" args 1.0)
			("try_get_off" args 2.0)
			("try_get_off" args 3.0)
			("try_get_off" args 4.0)
			("try_get_off" args 5.0)
			{tex_morph "burned" 10}
			{call "add_burn_fx"}
			{view start "burn_fire"}
			{delay_effect 0.5 0.2 "burn_scream"}
			{delay 6 2 "burn_die"
				{able "burning" 0}
				{kill_flags reset}
				{kill_flags piercing}
				{if not dead
					{able personage 0}
					{call "die"}
				}
				{view stop "burn_fire"}
				{if terrain_fx "puddle"
					{call "stop_burn"}
				else
					{add_view "smoke_dead_small1" "burn_fire_b" 	"body"}
					{add_view "smoke_dead_small1" "burn_fire_hl"	"hand1l"}
					{add_view "smoke_dead_small1" "burn_fire_hr"	"hand1r"}
					{add_view "smoke_dead_small1" "burn_fire_fl"	"foot2l"}
					{add_view "smoke_dead_small1" "burn_fire_fr"	"foot2r"}
					{view start "burn_fire_b"}
					{view start "burn_fire_hl"}
					{view start "burn_fire_hr"}
					{view start "burn_fire_fl"}
					{view start "burn_fire_fr"}
					{delay 7.5 1.5	{view stop "burn_fire_b"}}
					{delay 3.5 2.0	{view stop "burn_fire_hl"}}
					{delay 3.8 1.5	{view stop "burn_fire_hr"}}
					{delay 4.3 1.5	{view stop "burn_fire_fl"}}
					{delay 4.5 1.5	{view stop "burn_fire_fr"}}
				}
			}
			{burn time 17} ; total burn time
		}
	}
	{on "add_burn_fx"
		{add_view "smoke_dead_small" "burn_fire"	"body"}
		{add_view "smoke_dead_small" "burn_fire"	"hand1l"}
		{add_view "smoke_dead_small" "burn_fire"	"hand1r"}
		{add_view "smoke_dead_small" "burn_fire"	"foot2l"}
		{add_view "smoke_dead_small" "burn_fire"	"foot2r"}
	}
	{on "burn_scream"
		{if not dead
			{if not senseless
				{if not "quench"
					{talk "death_cry"}
;					{start_sound "human/die"}
					{delay_effect 1.2 0.5 "burn_scream"}
				else
					{kill_delay "burn_die"}
					{view stop "burn_fire"}
					{set "quench" 0}
					{able "burning" 0}
				}
			}
		}
	}
	{on "smoke"
		{smoke}
	}
	{on "smoking"
;		{con "smoke start"}
		{view start "smoke"}
		{delay 0.3 0.1
			{view pause "smoke"}
;			{con "smoke end"}
		}
	}
	
	{on "link_weapon"
		{if stuff "pistol"
			{add_view "flash_gun_small" "flashbarrel" "foresight3"}
			{add_view "shell_smg"			"shell"			"FXshell"}
		else stuff "shotgun"
			{add_view "flash_gun_big" "flashbarrel" "foresight3"}
			{add_view "shell_shotgun"			"shell"			"FXshell"}
		else stuff "rifle"
			{add_view "flash_gun_medium" "flashbarrel" "foresight3"}
			{add_view "shell_mgun"			"shell"			"FXshell"}
		else stuff "smg"
			{add_view "flash_gun_small" "flashbarrel" "foresight3"}
			{add_view "shell_smg"			"shell"			"FXshell"}
		else stuff "mgun"
			{add_view "flash_gun_big" "flashbarrel" "foresight3"}
			{add_view "shell_mgun"			"shell"			"FXshell"}
		else stuff "flame_thrower"
			{add_view "flamer_fire" "flame" "foresight3"}
			{add_view "flamer_fire_barrel" "fire" "foresight3"}
			{view show	"fire"}
			{view start	"fire"}
		else
			{view hide	"flashbarrel"}
			{view pause	"flashbarrel"}
			{view pause	"flame"}
		}
	}
	{on fire "hand_right"
		{view show	"flashbarrel"}
		{view start	"flashbarrel"}
		{view start "shell"}
		{view start	"flame"}
		{kill_delay "fire"}
		{delay 0.1 "shell"
			{view pause "shell"}
		}
		{delay 0.4 "fire"
			{view hide	"flashbarrel"}
			{view pause	"flashbarrel"}
			{view pause	"flame"}
		}
		{spawn "bazooka_shot" "fxshot" x}
	}

	(define "terrain_fx_human"
		{on terrain_fx %0 enter
			{if not swimming
				{view start "on_%1"}
				{view start "on_%1_time_short"}
				{delay 0.1
					{view pause "on_%1_time_short"}
				}
			}
		}
		{on terrain_fx %0 leave
			{view pause "on_%1"}
		}
	)
	("terrain_fx_human" args "water" 			water)
	("terrain_fx_human" args "puddle"			puddle)
	("terrain_fx_human" args "shallow_water"	puddle)
	("terrain_fx_human" args "mud" 				mud)

	{on terrain_pp "swamp" enter
		{delay 0							; without delay will crash in Die()
			{call "die_without_blood"}
			{view start "die_in_swamp"}
			{delay 10
				{view stop "die_in_swamp"}
				{delete}
			}
		}
	}

	{on "diving"
		{delay 0.3
			{spawn "spherewater_big"}
		}
	}
	{on swim on
		{view pause "on_water"}
		{view start "swim"}
		{call "stop_burn"}
		{kill_delay "after_swim"}
	}
	{on swim off
		{delay 1.5 "after_swim"
			{view pause "swim"}
		}
	}
	{on move on
		{if swimming
			{view start "swim_move"}
		}
	}
	{on "stop_move_sounds"
		{stop_sound "move_road"}
		{stop_sound "move_ground"}
		{stop_sound "move_snow"}
		{stop_sound "move_sand"}
		{stop_sound "move_grass"}
		{stop_sound "swim"}
	}
	{on movement_mode_changed
		{call "stop_move_sounds"}
		{if name "fast"
			{if swimming
				{play_sound "swim" 1}
			else not lying
				{if terrain_fx "road"
					{play_sound "move_road" 1}
				else terrain_fx "country_road"
					{play_sound "move_road" 1}
				else terrain_fx "ice"
					{play_sound "move_snow" 1}
				else terrain_fx "snow"
					{play_sound "move_snow" 1}
				else terrain_fx "sand"
					{play_sound "move_sand" 1}
				else terrain_fx "grass"
					{play_sound "move_grass" 1}
				else
					{play_sound "move_ground" 1}
				}
			}
		}
	}
	{on move off
		{view pause "swim_move"}
		{call "stop_move_sounds"}
	}
	{on "stop_burn"
		{if burned
			{burn stop_retry}
			{set "quench" 1}
		}
	}
	{on "falldown"
		{if altitude 3
			{throw_off up 1 forward 0.01 die force}
		else altitude 1
			{throw_off up 1 forward 0.01 force}
		else       
			{throw_on_ground}
		}
	}
	{on board in
		{view pause "swim"}
	}
	{on board out
		{if effector "mtb_d3"
			{if name "emit1" "emit2" "emit3" "emit4"
				{delay 0.7
					{spawn "spherewater_big"}
				}
			}
		}
	}
	{on "start_healing"
		{view start "marker_healing"}
	}
	{on "stop_healing"
		{view pause "marker_healing"}
	}
	{on "start_repair"
		{view start "marker_repair"}
	}
	{on "stop_repair"
		{view pause "marker_repair"}
	}
	{on "start_ammo_out"
		{view start "marker_ammo_out"}
	}
	{on "stop_ammo_out"
		{view pause "marker_ammo_out"}
	}
	{on "start_ammo_refill"
		{view start "marker_ammo_refill"}
		{delay 2.5
			{view pause "marker_ammo_refill"}
		}
	}
	{on "start_personage"
		{view start "marker_personage"}
	}
	{on "stop_personage"
		{view pause "marker_personage"}
	}
	{on "capture"
		{tags add "capturer"}
	}
}