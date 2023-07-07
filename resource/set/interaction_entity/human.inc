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
    		(include "human_texmods.inc")

	}
	{on contact	
		{if not impregnable
			{kill_flags reset}
			{volumes disable contact}
			{delay 2
				{volumes enable contact}
			}
			{if effector "killzone_medium"
				{if not linked "vehicle"
					{spawn "blood_hit_explosion"}
					{call "explosion_fg"}
				}
			}
			{if effector "killzone_big"
				{if not linked "vehicle"
					{spawn "blood_hit_explosion"}
					{call "explosion_fg"}
				}
			}
			{if effector "killzone_maximum"
				{if not linked "vehicle"
					{spawn "blood_hit_explosion"}
					{call "explosion_fg"}
				}
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
			(define "health_damage_rand"
				{health_damage_count (* %c %offset)
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
							("health_damage" c(%d))
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
			else effector "wp_piece"
				{health_damage_count 15
					{effects "" "hit" "hit" "die" "die"}
				}
				{call "_burn"}
			else effector "canister"
				{health_damage_count 500
					{effects "" "hit" "hit" "die" "die"}
				}
			else effector "volume_sphere"
				{health_damage_count 500
					{effects "" "hit" "hit" "die" "die"}
				}
			else effector "volume_sphere2"
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
	(define "rand_damage"
		{if rand 0.2 {health_damage_count %0 {effects "" "hit" "damage" "die" "die"}}
		else rand 0.2 {health_damage_count %1 {effects "" "hit" "damage" "die" "die"}}
		else rand 0.2 {health_damage_count %2 {effects "" "hit" "damage" "die" "die"}}
		else rand 0.2 {health_damage_count %3 {effects "" "hit" "damage" "die" "die"}}
		else {health_damage_count %4 {effects "" "hit" "damage" "die" "die"}}
		}
	)
	(define "rand_damage2"
		{if rand 0.1 ("health_damage_rand" c(%dmg) offset(0.75) )
		else rand 0.1 ("health_damage_rand" c(%dmg) offset(0.80) )
		else rand 0.1 ("health_damage_rand" c(%dmg) offset(0.85) )
		else rand 0.1 ("health_damage_rand" c(%dmg) offset(0.90) )
		else rand 0.1 ("health_damage_rand" c(%dmg) offset(0.95) )
		else rand 0.1 ("health_damage_rand" c(%dmg) offset(1.00) )
		else rand 0.1 ("health_damage_rand" c(%dmg) offset(1.05) )
		else rand 0.1 ("health_damage_rand" c(%dmg) offset(1.10) )
		else rand 0.1 ("health_damage_rand" c(%dmg) offset(1.20) )
		else ("health_damage_rand" c(%dmg) offset(1.25) )
		}
	)
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
		{if	stuff "assault_rifle"	{kill_flags rifle}}
		{if	stuff "stg"	{kill_flags rifle}}
		{if	stuff "carbine"	{kill_flags rifle}}
		{if	stuff "mgun"	{kill_flags mgun}}
		{if	stuff "smg"	{kill_flags smg}}
		{if	stuff "pistol"	{kill_flags pistol}}
			{if not stuff "hmgun"
				{if not stuff "zenite"
					{if not stuff "size_minimum"
						{if stuff "shell pierce" {call "explosion"}}
					else
						{call "die"}
					}
				;else
				;	{call "die"}
				}
			}
		{health_damage_pierce
			{effects	"hit-scream"
						"hit-light" "hit-heavy"
						"die" "hit-explosion"
						"throw-off" "throw-off-and-die"
			}
			{explosive_treshold 70}
			{table {180 1} {200 2.5} {500 3} {5000 5}}
		}
		{if volume "head"
			{if not dead
				{if volume_armored
					{play_sound "hit/small/helmet"}
					{spawn "metal_hit_bul"}
					{if stuff "pistol" {if rand 0.7 ("health_damage" c(400))}
					else stuff "smg" {if rand 0.7 ("health_damage" c(400))}
					else stuff "rifle" {if rand 0.95 ("health_damage" c(500))}
					else stuff "mgun" {if rand 0.95 ("health_damage" c(500))}
					else stuff "7-62_pistol" {if rand 0.8 ("health_damage" c(400))}
					else stuff "8_pistol" {if rand 0.7 ("health_damage" c(400))}
					else stuff "9_pistol" {if rand 0.7 ("health_damage" c(400))}
					else stuff "45_pistol" {if rand 0.7 ("health_damage" c(400))}
					else stuff "30_carbine" {if rand 0.8 ("health_damage" c(400))}
					else stuff "7-92_kurz" {if rand 0.85 ("health_damage" c(500))}
					else stuff "6-5_rifle" {if rand 0.85 ("health_damage" c(500))}
					else stuff "7-62_rifle" {if rand 0.95 ("health_damage" c(500))}
					else stuff "7-7_rifle" {if rand 0.95 ("health_damage" c(500))}
					else stuff "7-92_rifle" {if rand 0.95 ("health_damage" c(500))}
					else ("health_damage" c(500))
					}
				else
					("health_damage" c(500))
				}
			}
			{spawn "bloodspark_small03"}
			{spawn "blood_hit"}
			{if rand 0.2
				{call "head_splat"}
			}
			{if rand 0.15
				{set "take_off_head" 1}
				{take_off "head"
					{impulse up 5 2 dir 7 3}
				}
			}
		}
		{if volume "body"
			{if stuff "pistol" {if rand 0.05 {call "body_bleed"}}}
			{if stuff "smg" {if rand 0.05 {call "body_bleed"}}}
			{if stuff "stg" {if rand 0.1 {call "body_bleed"}}}
			{if stuff "carbine" {if rand 0.05 {call "body_bleed"}}}
			{if stuff "6_5rifle" {if rand 0.1 {call "body_bleed"}}}
			{if stuff "sniper" {if rand 0.15 {call "body_bleed"}}}
			{if stuff "6_5mgun" {if rand 0.1 {call "body_bleed"}}}
			{if stuff "rifle" {if rand 0.15 {call "body_bleed"}}}
			{if stuff "mgun" {if rand 0.15 {call "body_bleed"}}}
			{if stuff "hmgun" {if rand 0.2 {call "body_bleed"}}}
			{if stuff "bullet15" {if rand 0.4 {call "body_bleed"}}}

			{if stuff "7-62_pistol" {if rand 0.06 {call "body_bleed"}}}
			{if stuff "8_pistol" {if rand 0.05 {call "body_bleed"}}}
			{if stuff "9_pistol" {if rand 0.06 {call "body_bleed"}}}
			{if stuff "45_pistol" {if rand 0.08 {call "body_bleed"}}}
			{if stuff "30_carbine" {if rand 0.05 {call "body_bleed"}}}
			{if stuff "7-92_kurz" {if rand 0.12 {call "body_bleed"}}}
			{if stuff "6-5_rifle" {if rand 0.1 {call "body_bleed"}}}
			{if stuff "7-62_rifle" {if rand 0.15 {call "body_bleed"}}}
			{if stuff "7-7_rifle" {if rand 0.15 {call "body_bleed"}}}
			{if stuff "7-92_rifle" {if rand 0.15 {call "body_bleed"}}}
			{if dead
				{if stuff "stg" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "carbine" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "6_5rifle" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "sniper" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "6_5mgun" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "rifle" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "mgun" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "hmgun" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "bullet15" {spawn "bloodspark_small03"}{spawn "blood_hit"}}

				{if stuff "45_pistol" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "30_carbine" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "7-92_kurz" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "6-5_rifle" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "7-62_rifle" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "7-7_rifle" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
				{if stuff "7-92_rifle" {spawn "bloodspark_small03"}{spawn "blood_hit"}}
			}
			{if not dead
				{if stuff "pistol"
					{if rand 0.3
						("rand_damage" args 50 60 70 75 90)
					else
						("rand_damage" args 15 20 25 30 35)
					}
					{if rand 0.05 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "smg"
					{if rand 0.3
						("rand_damage" args 50 60 70 75 90)
					else
						("rand_damage" args 15 20 25 30 35)
					}
					{if rand 0.05 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "7-62_pistol"
					{if rand 0.3
						("rand_damage" args 50 60 70 75 90)
					else
						("rand_damage" args 15 20 25 30 35)
					}
					{if rand 0.04 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "8_pistol"
					{if rand 0.3
						("rand_damage" args 45 55 65 70 85)
					else
						("rand_damage" args 15 20 25 30 35)
					}
					{if rand 0.04 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "9_pistol"
					{if rand 0.3
						("rand_damage" args 50 60 70 75 90)
					else
						("rand_damage" args 15 20 25 30 35)
					}
					{if rand 0.05 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "45_pistol"
					{if rand 0.35
						("rand_damage" args 50 60 70 80 90)
					else
						("rand_damage" args 20 25 30 35 40)
					}
					{if rand 0.07 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "30_carbine"
					{spawn "blood_hit"}
					{if rand 0.3 
						("rand_damage" args 50 60 70 80 90)
					else
						("rand_damage" args 15 20 25 30 35)
					}
					{if rand 0.07 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "7-92_kurz"
					{spawn "blood_hit"}
					{if rand 0.5
						("rand_damage" args 60 70 80 90 100)
					else
						("rand_damage" args 20 30 40 50 60)
					}
					{if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "stg"
					{spawn "blood_hit"}
					{if rand 0.5
						("rand_damage" args 60 70 80 90 100)
					else
						("rand_damage" args 20 30 40 50 60)
					}
					{if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "carbine"
					{spawn "blood_hit"}
					{if rand 0.3 
						("rand_damage" args 50 60 70 80 90)
					else
						("rand_damage" args 20 25 30 35 40)
					}
					{if rand 0.07 {tags add "human_bleeding"}{call "bleeding"}}
				else stuff "6_5rifle"
					{spawn "blood_hit"}
					{if rand 0.4
						("rand_damage" args 60 70 80 90 100)
					else
						("rand_damage" args 20 30 40 50 60)
					}
					{if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}
				else stuff "rifle"
					{spawn "blood_hit"}  
					{if rand 0.7 
						("rand_damage" args 70 80 90 100 110)
					else
						("rand_damage" args 30 40 50 60 65)
					}
					{if rand 0.15 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "6-5_rifle"
					{spawn "blood_hit"}
					{if rand 0.4
						("rand_damage" args 60 70 80 90 100)
					else
						("rand_damage" args 20 30 40 50 60)
					}
					{if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "7-62_rifle"
					{spawn "blood_hit"}  
					{if rand 0.65 
						("rand_damage" args 65 75 85 95 105)
					else
						("rand_damage" args 30 40 50 60 65)
					}
					{if rand 0.15 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "7-7_rifle"
					{spawn "blood_hit"}  
					{if rand 0.675 
						("rand_damage" args 67 77 87 97 107)
					else
						("rand_damage" args 30 40 50 60 65)
					}
					{if rand 0.15 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "7-92_rifle"
					{spawn "blood_hit"}  
					{if rand 0.7
						("rand_damage" args 70 80 90 100 110)
					else
						("rand_damage" args 30 40 50 60 65)
					}
					{if rand 0.15 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "rifle_fg"
					{spawn "blood_hit"}
					{if rand 0.9
						("rand_damage" args 130 140 150 160 170)
					else
						("rand_damage" args 70 80 90 100 110)
					}
					{if rand 0.4 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "sniper"
					{spawn "blood_hit"}
					{if rand 0.7 
						("rand_damage" args 70 80 90 100 110)
					else
						("rand_damage" args 30 40 50 60 65)
					}
					{if rand 0.15 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "6_5mgun"
					{spawn "blood_hit"}
					{if rand 0.4 
						("rand_damage" args 60 70 80 90 100)
					else
						("rand_damage" args 20 30 40 50 60)
					}
					{if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}
				else stuff "mgun"
					{spawn "blood_hit"}
					{if rand 0.7 
						("rand_damage" args 70 80 90 100 110)
					else
						("rand_damage" args 30 40 50 60 65)
					}
					{if rand 0.15 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "hmgun"
					{spawn "blood_hit"}
					{if rand 0.9
						("rand_damage" args 110 125 150 175 200)
					else
						("rand_damage" args 75 90 100 110 125)
					}
					{if rand 0.3 {tags add "human_bleeding"}{call "bleeding"}}
				}
				{if stuff "bullet15"
					{spawn "blood_hit"}
					("health_damage" c(250))
				}
			}
		}
		{if volume "foot1l"
			{if not dead
				{if stuff "pistol" 		{if rand 0.3 ("rand_damage2" dmg(25))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "stg"    		{if rand 0.5 ("rand_damage2" dmg(35))} {if rand 0.07 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "6_5mm"    	{if rand 0.5 ("rand_damage2" dmg(35))} {if rand 0.07 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "smg"    		{if rand 0.3 ("rand_damage2" dmg(25))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "7-62_pistol" {if rand 0.3 ("rand_damage2" dmg(25))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "8_pistol"    {if rand 0.3 ("rand_damage2" dmg(25))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "9_pistol"    {if rand 0.3 ("rand_damage2" dmg(25))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "45_pistol"   {if rand 0.4 ("rand_damage2" dmg(35))} {if rand 0.04 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "carbine"  	{if rand 0.4 ("rand_damage2" dmg(35))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "30_carbine"  {if rand 0.4 ("rand_damage2" dmg(35))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "7-92_kurz"  	{if rand 0.4 ("rand_damage2" dmg(45))} {if rand 0.07 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "rifle"  		{if rand 0.5 ("rand_damage2" dmg(50))} {if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "6-5_rifle"  	{if rand 0.5 ("rand_damage2" dmg(35))} {if rand 0.07 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "7-62_rifle"  {if rand 0.5 ("rand_damage2" dmg(50))} {if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "7-7_rifle"  	{if rand 0.5 ("rand_damage2" dmg(50))} {if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "7-92_rifle"  {if rand 0.5 ("rand_damage2" dmg(50))} {if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "sniper" 		{if rand 0.5 ("rand_damage2" dmg(50))} {if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "mgun"   		{if rand 0.5 ("rand_damage2" dmg(50))} {if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "hmgun"  		{if rand 0.7 ("rand_damage2" dmg(125))} {if rand 0.15 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "bullet15"  	{if rand 0.9 ("rand_damage2" dmg(200))} {if rand 0.20 {tags add "human_bleeding"}{call "bleeding"}}}
			}
		}
		{if volume "foot1r"
			{if not dead
				{if stuff "pistol" 		{if rand 0.3 ("rand_damage2" dmg(25))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "stg"    		{if rand 0.5 ("rand_damage2" dmg(35))} {if rand 0.07 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "6_5mm"    	{if rand 0.5 ("rand_damage2" dmg(35))} {if rand 0.07 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "smg"    		{if rand 0.3 ("rand_damage2" dmg(25))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "7-62_pistol" {if rand 0.3 ("rand_damage2" dmg(25))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "8_pistol"    {if rand 0.3 ("rand_damage2" dmg(25))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "9_pistol"    {if rand 0.3 ("rand_damage2" dmg(25))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "45_pistol"   {if rand 0.4 ("rand_damage2" dmg(35))} {if rand 0.04 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "carbine"  	{if rand 0.4 ("rand_damage2" dmg(35))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "30_carbine"  {if rand 0.4 ("rand_damage2" dmg(35))} {if rand 0.03 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "7-92_kurz"  	{if rand 0.4 ("rand_damage2" dmg(45))} {if rand 0.07 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "rifle"  		{if rand 0.5 ("rand_damage2" dmg(50))} {if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "6-5_rifle"  	{if rand 0.5 ("rand_damage2" dmg(35))} {if rand 0.07 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "7-62_rifle"  {if rand 0.5 ("rand_damage2" dmg(50))} {if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "7-7_rifle"  	{if rand 0.5 ("rand_damage2" dmg(50))} {if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "7-92_rifle"  {if rand 0.5 ("rand_damage2" dmg(50))} {if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "sniper" 		{if rand 0.5 ("rand_damage2" dmg(50))} {if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "mgun"   		{if rand 0.5 ("rand_damage2" dmg(50))} {if rand 0.1 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "hmgun"  		{if rand 0.7 ("rand_damage2" dmg(125))} {if rand 0.15 {tags add "human_bleeding"}{call "bleeding"}}}
				{if stuff "bullet15"  	{if rand 0.9 ("rand_damage2" dmg(200))} {if rand 0.20 {tags add "human_bleeding"}{call "bleeding"}}}
			}
		}
	}
	{on "head_splat"
		{delay 0.1
		{if dead
		{if not "bled_out"
			{if "take_off_head"
				{burn fx "bloodspark_bleeding_short"}
				{delay 3 {spawn "bloodspark_bleeding" "head"}}
			}
			{set "bled_out" 1}
			 ;{burn fx "bloodspark_bleeding"}
			{spawn "bloodspark_splat"}
			{delay 3
				{spawn "ground_blood_spreading" "head"}
				{delay 30 {spawn "ground_blood_spreaded" "head"}}
			}
		}}}
	}	
	{on "body_bleed"
		{delay 0.1
			{if dead
				{if not "bled_out"
					{set "bled_out" 1}
					;{burn fx "bloodspark_bleeding"}
					{spawn "bloodspark_splat"}
					{delay 3
						{spawn "ground_blood_spreading"}
						{delay 30 
							{spawn "ground_blood_spreaded"}
						}
					}
				}
			}
		}
	}
	{on "bleeding"
		{if user_control
			{if not linked "vehicle"
				{delay 5
					{if not dead
						{if tagged "human_bleeding"
							("health_damage" c(10))
							{damage_report "body" "<c(dd0000)>bleeding"}
							{talk "injuring"}
							{call "bleeding"}
						}
					}
				}
			else
				{tags remove "human_bleeding"}
			}
		else
			{tags remove "human_bleeding"}
		}
	}
	{on blast_hit overload
		{if rand 0.1
			{tags add "human_bleeding"}
			{call "bleeding"}
		}
		{if min_energy 0.99
			("health_damage" c(300))
		else min_energy 0.79
			("health_damage" c(250))
		else min_energy 0.59
			("health_damage" c(200))
		}
		{if stuff "kamikaze"
			{take_off "body"
				{impulse up 1 1 dir 1 1}
			}
			{blastwave c4 2 r0 3 r1 4 offset 0 0 0}
			{call "die"}
			("health_damage" c(250))
			{con "kamikaze"}
		}
		{if min_energy 3.5
			{call "explosion_fg"}
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
			{table {0.5 0.5} {2 1} {10 3} {24 6}}
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
			{if not dead{if rand 0.03 {knockdown 2 1}}}
			{if rand 0.65 {spawn "bloodspark_small01"}}
                        {if rand 0.55 {spawn "bloodspark_small02"}}
                        {if rand 0.4 {spawn "bloodsparks01"}}
                        {if rand 0.2 {spawn "bloodsparks02"}}
                        {if rand 0.1 {spawn "ground_blood_big"}}
                        {if rand 0.1 {spawn "ground_blood01"}}
                        {if rand 0.1 {spawn "ground_blood02"}}
                        {if rand 0.2 {spawn "ground_blood03"}}
                        {if rand 0.1 {spawn "mainspark_small03"}}
	}
	
	{on "hit-heavy"
		{if not dead
			;{if stuff "shell apcr" {if rand 0.35 {call "explosion"}}
			;else
			;{if stuff "shell ap" {if rand 0.2 {call "explosion"}}
			;else
			;{if stuff "fg_medium" {if rand 0.35 {call "explosion"}}
			;else
			;{if stuff "fg_heavy" {if rand 0.5 {call "explosion"}}
			;else
			;{if stuff "dynamite" {if rand 0.65 {call "explosion"}}
			;else
			;{if stuff "shell fg" {if rand 0.25 {call "explosion"}}
			;else
			;{if stuff "apcr" {if rand 0.4 {call "explosion"}}
			;else
            ;{if stuff "ap" {if rand 0.25 {call "explosion"}}
			;else
			;{if stuff "fg" {if rand 0.2 {call "explosion"}}
			;else
			;	{if rand 0.05 {knockdown 2 1}}
            ;            }}}
            ;            }}}
            ;            }}}
		}
		{if rand 0.7 {spawn "bloodspark_small01"}}
                {if rand 0.65 {spawn "bloodspark_small02"}}
                {if rand 0.55 {spawn "bloodsparks01"}}
                {if rand 0.5 {spawn "bloodsparks02"}}
                {if rand 0.1 {spawn "ground_blood_big"}}
                {if rand 0.2 {spawn "ground_blood01"}}
                {if rand 0.3 {spawn "ground_blood02"}}
                {if rand 0.2 {spawn "ground_blood03"}}
                {if rand 0.2 {spawn "mainspark_small03"}}
	}
	{on "hit-explosion"
		{if tagged "no_explosion"
			{call "die"}
		else
			{call "die_scream"}
			;{call "explosion"}
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
				;{call "explosion"}
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
	(define "gore_piece_low"
		{spawn %0 {impulse up 1 0.5 dir 1 0.1 cx 4 1 cy 4 1 rnd_dir 2 0.1}} ;8 4
	)
	(define "gore_piece_high"
		{spawn %0 {impulse up 8 1 dir 8 1 cx 6 2 cy 6 2 rnd_dir 8 1 }} ;8 4
	)
		;{impulse up 4 1 dir 3 1.5 cx 5 2 cy 5 2 rnd_dir 10 0.5 no_position}
		;{impulse up 5 2.3 dir 3 1.5 cx 5 2 cy 5 2 rnd_dir 10 0.5 no_position}
		;{impulse up 4 2 dir 6 2}

	(define "gore_piece_rand_low"
		{if rand 0.5 {spawn %0 {impulse up 1 0.5 dir 1 0.1 cx 4 1 cy 4 1 rnd_dir 2 0.1}} ;{impulse up 1 0.5 dir 8 4}
		else {spawn %1 {impulse up 1 0.5 dir 1 0.1 cx 4 1 cy 4 1 rnd_dir 2 0.1}}
		}
	)
	(define "gore_piece_rand_high"
		{if rand 0.5 {spawn %0 {impulse up 8 0.5 dir 8 1 cx 6 2 cy 6 2 rnd_dir 8 1 }}
		else {spawn %1 {impulse up 8 0.5 dir 8 1 cx 6 2 cy 6 2 rnd_dir 8 1 }}
		}
	)
	(define "spawn_pieces_leg_script"
		{if rand 0.6
			{if rand 0.33 ("gore_piece%0" args "_foot01")
			else rand 0.33 ("gore_piece%0" args "_foot02")
			else ("gore_piece%0" args "_foot03")
			}
			{if rand 0.5 ("gore_piece_rand%0" args "_halflimb01" "_halflimb02")
			else ("gore_piece_rand%0" args "_halflimb01" "_halflimb02")("gore_piece_rand%0" args "_halflimb01" "_halflimb02")
			}
		else
			{if rand 0.25 ("gore_piece%0" args "_leg01")
			else rand 0.25 ("gore_piece%0" args "_leg02")
			else rand 0.25 ("gore_piece%0" args "_leg03")
			else ("gore_piece%0" args "_leg04")
			}
		}
	)
	(define "spawn_pieces_leg" ("spawn_pieces_leg_script" args _low))
	(define "spawn_pieces_leg_high" ("spawn_pieces_leg_script" args _high))
	
	(define "spawn_pieces_hand_script"
		{if rand 0.2 ("gore_piece%0" args "_hand01")
		else rand 0.2 ("gore_piece%0" args "_hand02")
		else rand 0.2 ("gore_piece%0" args "_hand03")
		else rand 0.2 ("gore_piece%0" args "_hand04")
		else ("gore_piece%0" args "_hand05")
		}
		{if rand 0.3 ("gore_piece_rand%0" args "_halflimb01" "_halflimb02")
		else rand 0.5 ("gore_piece_rand%0" args "_halflimb01" "_halflimb02")("gore_piece_rand%0" args "_halflimb01" "_halflimb02")
		}
	)
	(define "spawn_pieces_hand" ("spawn_pieces_hand_script" args _low))
	(define "spawn_pieces_hand_high" ("spawn_pieces_hand_script" args _high))
	
	(define "spawn_pieces_head_script"
		{if rand 0.2 ("gore_piece%0" args "_head01")
		else rand 0.2 ("gore_piece%0" args "_head02")
		else rand 0.2 ("gore_piece%0" args "_head03")
		else rand 0.2 ("gore_piece%0" args "_head04")
		else ("gore_piece%0" args "_head05")
		}
	)
	(define "spawn_pieces_head" ("spawn_pieces_head_script" args _low))
	(define "spawn_pieces_head_high" ("spawn_pieces_head_script" args _high))
	
	(define "spawn_pieces_gore_script"
		{if rand 0.6
			{if rand 0.11 ("gore_piece%0" args "_guts01")
			else rand 0.11 ("gore_piece%0" args "_guts01a")
			else rand 0.11 ("gore_piece%0" args "_guts01b")
			else rand 0.11 ("gore_piece%0" args "_guts02")
			else rand 0.11 ("gore_piece%0" args "_guts02a")
			else rand 0.11 ("gore_piece%0" args "_guts02b")
			else rand 0.11 ("gore_piece%0" args "_guts03")
			else rand 0.11 ("gore_piece%0" args "_guts03a")
			else ("gore_piece%0" args "_guts03b")
			}
		else
			{if rand 0.33 ("gore_piece%0" args "_sguts01")
			else rand 0.33 ("gore_piece%0" args "_sguts02")
			else ("gore_piece%0" args "_sguts03")
			}
		}
	)
	(define "spawn_pieces_gore" ("spawn_pieces_gore_script" args _low))
	(define "spawn_pieces_gore_high" ("spawn_pieces_gore_script" args _high))
	
	{on "explosion"
		{if personage
			{call "die"}
		else
			{spawn "bloodsparks_big"}
			{call "delete"}

			;{if rand 0.15 ;full, no head
			;	{if rand 0.33 ("gore_piece" args "_full01")
			;	else rand 0.33 ("gore_piece" args "_full02")
			;	else ("gore_piece" args "_full03")
			;	}
			;	("spawn_pieces_head")
			;else rand 0.35 ;full, no legs
			;	{if rand 0.16 ("gore_piece" args "_corp01")
			;	else rand 0.16 ("gore_piece" args "_corp02")
			;	else rand 0.16 ("gore_piece" args "_corp03")
			;	else rand 0.16 ("gore_piece" args "_xlcorp01")
			;	else rand 0.16 ("gore_piece" args "_xlcorp02")
			;	else ("gore_piece" args "_xlcorp03")
			;	}
			;	("spawn_pieces_leg")("spawn_pieces_leg")
			;else ;torso, no limbs
			
			{if not "exploded"
				{set "exploded" 1}
				{if rand 0.33 ("gore_piece_low" args "_torse01")
				else rand 0.33 ("gore_piece_low" args "_torse02")
				else ("gore_piece_low" args "_torse03")
				}
				{if rand 0.4
					{if rand 0.33 ("gore_piece_low" args "_lowtor01")
					else rand 0.33 ("gore_piece_low" args "_lowtor02")
					else ("gore_piece_low" args "_lowtor03")
					}
					{if rand 0.2 ("spawn_pieces_gore")}
					{if rand 0.2 ("spawn_pieces_gore")}
				else
					{if rand 0.3("spawn_pieces_leg")}
					{if rand 0.3("spawn_pieces_leg")}
					{if rand 0.2 ("spawn_pieces_gore")}
					{if rand 0.2 ("spawn_pieces_gore")}
				}
				{if rand 0.3("spawn_pieces_hand")}
				{if rand 0.3("spawn_pieces_hand")}
				{if rand 0.3("spawn_pieces_head")}
				{if rand 0.2 ("spawn_pieces_gore")}
				{if rand 0.2 ("spawn_pieces_gore")}
				{if rand 0.2 ("spawn_pieces_gore")}
			}
			;}
		}
	}
	{on "explosion_fg"
		{if personage
			{call "die"}
		else
			{spawn "blood_hit"}
			{call "delete"}
			{if not "exploded"
				{set "exploded" 1}
				{if rand 0.33 ("gore_piece_high" args "_torse01")
				else rand 0.33 ("gore_piece_high" args "_torse02")
				else ("gore_piece_high" args "_torse03")
				}
				{if rand 0.4
					{if rand 0.33 ("gore_piece_high" args "_lowtor01")
					else rand 0.33 ("gore_piece_high" args "_lowtor02")
					else ("gore_piece_high" args "_lowtor03")
					}
					{if rand 0.2 ("spawn_pieces_gore_high")}
					{if rand 0.2 ("spawn_pieces_gore_high")}
				else
					{if rand 0.3("spawn_pieces_leg_high")}
					{if rand 0.3("spawn_pieces_leg_high")}
					{if rand 0.2 ("spawn_pieces_gore_high")}
					{if rand 0.2 ("spawn_pieces_gore_high")}
				}
				{if rand 0.3("spawn_pieces_hand_high")}
				{if rand 0.3("spawn_pieces_hand_high")}
				{if rand 0.3("spawn_pieces_head_high")}
				{if rand 0.2 ("spawn_pieces_gore_high")}
				{if rand 0.2 ("spawn_pieces_gore_high")}
				{if rand 0.2 ("spawn_pieces_gore_high")}
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
	
;SONNE2 JAM BEGIN;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;; 
;MAIN_MENU BEGIN ;to change jam ratio for different weapon types such as smg mgun search set_weapontype
{on "jam_enable"
{set "gun_jamming_enabled" 1} ;Disable/Enable Gun Jamming.
}
{on "gun_jam_mod_menu"
{set "ingame_jam_modifiers" 1} ;randomly gives decreased or increased proabability of jamming after it is fixed.
;Winter Season Modifiers, prevented both from being enabled so you don't get rekt.
{set "winter_season" 0} ;makes all guns jam +.0065% more. ;\ 
{if not "winter_season" ;siberia_winter_season can be enabled if winter_season is disabled ; \
{set "siberia_winter_season" 0}} ;makes all guns jam +.0155% more. must have Winter_Season disabled for it to work. ; \ ;wait ;Did you see that? ;look closer ^ ; ITS THE ILLUMINATII OH MY F"KING GOD NOO! ;-SONNE2 1994-2015 REKT.
{set "winter_sound" 1} ;winter sound misc. if winter_season's is enabled ;

;Terrain Influence
{set "terrain_influence" 1} ;when soldiers are LYING DOWN >:D, on snow or swamps,sand,mud, and shallow water they will be more at risk of jamming until they squat or stand up. TAKE THAT LYING UNITS!!! lol sorry I just couldn't help myself, this thingamajig had to be done, I hate it when the units just lie their and do nothing camp, shoot and kill my soldiers, this is a nice present to those bastards! SAY HAELLO TO MY LITTLE SCRIPT! |'_'|

{set "random_fix_timer" 1} ;Random jam fix timers disable to set to manual timer search for set_manualtimer

;HangFire
{set "hangfire" 1} ;randomly forces a delay to gunfire, could be potentially dangerous, as the surplus ammo could damage the barrel doing damage to the soldier's hands.
{set "cant_move" 1} ;stops the unit from moving to prevent the animation from conflicting with the movement. I MUST FIX THIS X_x.
{set "jam_fix_animations" 1} ;units get a reloading animation when trying to fix the weapon jam.
{if "winter_season" {if rand 0.0065 {tags add "js"}{tags add "winterjam"} }}
{if "siberia_winter_season" {if rand 0.0155 {tags add "js"}{tags add "winterjam"} }}
} 
{on "jam_modifiers_menu" 
{if "ingame_jam_modifiers" {if tagged "jamca" {if tagged "js" {if rand 0.7 {tags remove "js"}{tags remove "winterjam"}{delay 0.2{damage_report "body" "<c(00ff18)>."}}}}}} ;decrease jam
{if "ingame_jam_modifiers" {if tagged "jamre" {if tagged "js" {if rand 0.0055 {tags add "js"}{delay 0.2{damage_report "body" "<c(ff0000)>."}}}}}} ;increase jam
}
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;MAIN MENU END

;TERRAIN JAM INFLUENCE WHILE LYING;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;

{on "terrain_influence_1"
{if "terrain_influence"
{if lying ;don't lie down on these terrain types or else you run the risk of jamming your gun!!! @@ you can turn it off in the menu, but I'd leave it on as it will balance the game, lying units will no longer be invincible camping schallywags.
{if terrain_fx "snow" {if rand 0.0055 {tags add "js"}{start_sound "human/move/snow"} {damage_report "body" "<c(9e8af6)>snow jammed the gun"}}}
{if terrain_fx "sand" {if rand 0.0045 {tags add "js"} {start_sound "human/move/sand"}{damage_report "body" "<c(e5c200)>sand fell into the ejection port"}}}
{if terrain_fx "shallow_water" {if rand 0.0025 {tags add "js"} {start_sound "human/move/swim"}{damage_report "body" "<c(bdbdbd)>water fell into the ejection port"}}}
{if terrain_fx "swamp" {if rand 0.0045 {tags add "js"}{start_sound "human/move/swim"} {damage_report "body" "<c(5d4e00)>water and dirt fell into the ejection port"}}}
{if terrain_fx "mud" {if rand 0.0045 {tags add "js"}{start_sound "human/move/snow"} {damage_report "body" "<c(ff892a)>mud fell into the ejection port"}}}
}}}

;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;


(define "tags_remove" ; so weapons switch their jamming data on weapon switch.
{if tagged %iftag
{tags remove %tagrem
}})


{on "link_weapon"

{if stuff "pistol" ;pistol
{tags add "pistolw"} ;;;;;;;;;;;JAMMABLE;;;;;;;;;;;
{tags add "jammable"};;;;;;;;;;;JAMMABLE;;;;;;;;;;; 
("tags_remove" iftag("pistolw") tagrem("smgw riflew sniperw shotgunw mgunw")) 
{add_view "shell_smg" "shell" "fxshell"}
{add_view "flash_gun_small" "flashbarrel" "foresight3"}

else stuff "smg" ;smg
{tags add "smgw"} ;;;;;;;;;;;JAMMABLE;;;;;;;;;;;
{tags add "jammable"};;;;;;;;;;;JAMMABLE;;;;;;;;;;;
("tags_remove" iftag("smgw") tagrem("pistolw mgunw riflew shotgunw sniperw")) 
{add_view "flash_gun_small" "flashbarrel" "foresight3"}
{add_view "shell_smg" "shell" "fxshell"}

else stuff "rifle" ;rifle
{tags add "riflew"} ;;;;;;;;;;;JAMMABLE;;;;;;;;;;;
{tags add "jammable"} ;;;;;;;;;;;JAMMABLE;;;;;;;;;;; 
{add_view "flash_gun_big" "flashbarrel" "foresight3"}
{add_view "shell_mgun" "shell" "fxshell"}
("tags_remove" iftag("riflew") tagrem("pistolw mgunw smgw shotgunw sniperw")) 
else stuff "ptr" ;rifle
{tags add "ptrw"} ;;;;;;;;;;;JAMMABLE;;;;;;;;;;;
("tags_remove" iftag("ptrw") tagrem("pistolw riflew jammable mgunw smgw shotgunw sniperw")) 

else stuff "sniper" ;sniper
{tags add "riflew"} ;;;;;;;;;;;JAMMABLE;;;;;;;;;;;
{tags add "jammable"} ;;;;;;;;;;;JAMMABLE;;;;;;;;;;; 
{add_view "flash_gun_big" "flashbarrel" "foresight3"}
{add_view "shell_mgun" "shell" "fxshell"}
("tags_remove" iftag("riflew") tagrem("pistolw mgunw smgw shotgunw sniperw")) 
else stuff "shotgun" ;shotgun
{tags add "shotgunw"} ;;;;;;;;;;;JAMMABLE;;;;;;;;;;;
{tags add "jammable"} ;;;;;;;;;;;JAMMABLE;;;;;;;;;;;
("tags_remove" iftag("shotgunw") tagrem("pistolw mgunw smgw riflew sniperw")) 
{add_view "flash_shotgun" "flashbarrel" "foresight3"}
{add_view "shell_shotgun" "shell" "foresight3"}

else stuff "m12_shotgun" ;shotgun
{tags add "shotgunw"} ;;;;;;;;;;;JAMMABLE;;;;;;;;;;;
{tags add "jammable"} ;;;;;;;;;;;JAMMABLE;;;;;;;;;;;
("tags_remove" iftag("shotgunw") tagrem("pistolw mgunw smgw riflew sniperw")) 
{add_view "flash_shotgun" "flashbarrel" "foresight3"}

else stuff "mgun" ;mgun
{tags add "mgunw"} ;;;;;;;;;;;JAMMABLE;;;;;;;;;;;
{tags add "jammable"} ;;;;;;;;;;;JAMMABLE;;;;;;;;;;;
("tags_remove" iftag("mgunw") tagrem("pistolw smgw riflew sniperw shotgunw")) 
{add_view "flash_gun_big" "flashbarrel" "foresight3"}
{add_view "shell_mgun" "shell" "fxshell"}

else stuff "flame_thrower"
{tags add "mgunw"} ("tags_remove" iftag("flamew") tagrem("mgunw pistolw smgw riflew sniperw shotgunw")) ;;;;;;;;;;;NOTJAMMABLE;;;;;;;;;;;
{add_view "flamer_fire" "flame" "foresight3"}
{add_view "flamer_fire_barrel" "fire" "foresight3"}
{view show "fire"}
{view start "fire"}
else
{view hide "flashbarrel"}
{view pause "flashbarrel"}
{view pause "flame"}

} }






;WEAPON TYPE JAM WHICH WEAPON TYPE WILL JAM MORE OFTEN?;;;;;;;;;;;;;;;;;;;;;;;
;weapon_type;;;;;;;jam_type;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;
;set how often certain types of weapons will jam set_weapontype (0.0001)) ;.001% chance (0.0005)) ;.005% chance
{on "pistoljam"{if "gun_jamming_enabled" {if bone "foresight3" {if rand 0.0007 {tags add "js"} }}}} ; the tag js pulls the weapon into the jamming proccess. EG. Narrator:FINISH HIM! Weapon:X_x-*pierce*-------
{on "smgjam" {if "gun_jamming_enabled" {if bone "foresight3" {if rand 0.0007 {tags add "js"} }}}}
{on "riflejam" {if "gun_jamming_enabled" {if bone "foresight3" {if rand 0.0009 {tags add "js"} }}}}
{on "sniperjam" {if "gun_jamming_enabled" {if bone "foresight3" {if rand 0.0009 {tags add "js"} }}}}
{on "shotgunjam"{if "gun_jamming_enabled" {if bone "foresight3" {if rand 0.001 {tags add "js"} }}}}
{on "mgunjam"{if "gun_jamming_enabled" {if bone "foresight3" {if rand 0.001 {tags add "js"} }}}}
;;;;;;;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;;;;;;
{on "manual_fix_timer" ;minimum 3.7 max:mugen(infinity) set_manualtimer ;MANUAL TIMER
{if not "random_fix_timer" {delay 15 {tags add "fixed"}{call "jam_fix"}}}}

{on "jam_fix" ;FIXING THE JAM
{if tagged "fixed"
{if tagged "jam"
{tags remove "jam"}
{tags remove "fixed"}
{call "spawn_shell"}{start_sound "weapon/reload"} ;the evil shell has been removed.
{weapon_work "hand_right" 1}{if "cant_move"{chassis_work 1}} ;reenables the weapon
{if not dead {if able "select" {if not senseless ;so the knocked out and dead wont be able to fix it they will restart
{damage_report "body" "<c(00ff00)>jam fixed"}}}} ;just think about it, it doesn't make sense lol.
{talk "jubilation"} ;soldier "get ready for medals!"
{ani_stop "squat_reload_piat"}{ani_stop "lie_reload_piat"} 
{if "cant_move"{chassis_work 1}}
{if not dead {if able "select" {if not senseless 
{if "ingame_jam_modifiers"
{if rand 0.1 
{attack_save}{damage_report "body" "<c(00ff00)>gun fixed: less jam"}{tags add "jamca"} ;jamca as in cautious
else rand 0.1 
{attack_load}{damage_report "body" "<c(dd0000)>gun damaged: increased jam"}{tags add "jamre"} ;jamre as in reckless, 
else rand 0.05
{attack_save}{damage_report "body" "<c(00ff00)>gun repaired: no more jamming at all"}{tags add "jamfi"} ;yay no more jamming!
}}}}} }}} 
{on "hangfire" ;zik
{tags add "hangfire"}
{if rand 0.5 {weapon_work "hand_right" 0}} ;due to surplus ammo the gun will click but have a delay before firing, this could be potentially dangerous
{if not tagged "jamre"{damage_report "body" "<c(dd0000)>hangfire"}}
{if tagged "jamre"{damage_report "body" "<c(dd0000)>hangfire caused by damaged gun"}}
{start_sound "gui/misc_gui_select"}
{call "hangfire_chance"}
}
{on "hangfire_pt2"
{if rand 0.2 ("health_damage" c(50)) } ;hangfire damage to hands
{delay 0.3 {talk "injuring"}}
{if tagged "hfixed"
{tags remove "hangfire"}
{tags remove "hfixed"}
{weapon_work "hand_right" 1}
{call "hand_right"} }
}
{on "hangfire_chance"
{if rand 0.1 
{delay 0.2 {tags add "hfixed"}{call "hangfire_pt2"}}
else rand 0.1
{delay 0.3 {tags add "hfixed"}{call "hangfire_pt2"}}
else rand 0.1
{delay 0.4 {tags add "hfixed"}{call "hangfire_pt2"}}
else rand 0.1
{delay 0.1 {tags add "hfixed"}{call "hangfire_pt2"}}
else rand 0.1
{delay 0.2 {tags add "hfixed"}{call "hangfire_pt2"}}
else rand 0.1
{delay 0.3 {tags add "hfixed"}{call "hangfire_pt2"}}
else rand 0.1
{delay 0.5 {tags add "hfixed"}{call "hangfire_pt2"}}
else rand 0.1
{delay 0.3 {tags add "hfixed"}{call "hangfire_pt2"}}
else 
{delay 0.4 {tags add "hfixed"}{call "hangfire_pt2"}}
}}

{on fire "hand_right"

{if tagged "jam" {start_sound "gui/misc_gui_select"}} 
{if tagged "jammable" ;only jammable weapons are to be jammed.


{call "jam_enable"} ;checks whether gun jamming is enabled or not.



{if "gun_jamming_enabled" 

{call "gun_jam_mod_menu"} ;to configure jamming options
{if tagged "smgw" {call "smgjam"}}
{if tagged "riflew" {call "riflejam"}}
{if tagged "pistolw" {call "pistoljam"}} 
{if tagged "mgunw" {call "mgunjam"}} 
{if tagged "shotgunw" {call "shotgunjam"}}
{call "terrain_influence_1"} ;to check the other jam values
{call "jam_modifiers_menu"} ;to check the other jam values

{if "hangfire"
{if not tagged "jamre"{if rand 0.0002 {call"hangfire"}}} ;HANGFIRE 0.0002 chance
{if tagged "jamre"{if rand 0.0021 {call"hangfire"}}} ;damaged gun
}}
;LET THE RUSTLING BEGIN JAMMING BEGINS HERE
;{delay 0.0001
{if not tagged "hangfire"
{if not tagged "jamfi" {if not tagged "fixed" {if tagged "js" 
{tags remove "js"} ;so the weapon can be jammed again some time later if not tagged jamfi
{weapon_work "hand_right" 0} ;stops the weapon from firing
{if "cant_move"{chassis_work 0}} ;stops the soldier from moving while fixing the jam
{tags add "jam"} 
{delay 0.3 {if able "select" {if rand 0.5 {start_sound "gui/misc_gui_select"}}}} ;Put able select so the dead won't try to fix their pb and jam in the morning, ahem I meant weapon jam.
{delay 0.6 {if able "select" {if rand 0.5 {start_sound "gui/misc_gui_select"}}}} ;also the sound is the soldier trying to pull the trigger and failing to shoot. For AS1 and 2, for mow you'll have to make your own trigger sound.
{delay 0.8 {if able "select" {if rand 0.5 {start_sound "gui/misc_gui_select"}}}} ;the soldier repeats pulling the trigger, thinking he/she may have a fatigued finger, giving as much force the next time.
{delay 1.4 {if able "select" {if rand 0.5 {start_sound "gui/misc_gui_select"}}}}
{delay 1.6 {damage_report "body" "<c(9e8af6)>jammed"}{delay 5 1 {if tagged "jamca" {if rand 0.1 {damage_report "body" "<c(9e8af6)>it still jammed!?"}} {tags remove "jamca"}}{if tagged "jamre" {if rand 0.1 {damage_report "body" "<c(9e8af6)>jammed again huh"}} {tags remove "jamre"}}}}
{delay 2.0 {talk "injuring"}} ;Jimmies have been rustled.
{delay 2.1 {if able "select" {if rand 0.8 {start_sound "gui/misc_gui_select"}}}}
{delay 2.2 {if able "select" {if rand 0.7 {start_sound "gui/misc_gui_select"}}}}
{delay 2.3 {if able "select" {if rand 0.6 {start_sound "gui/misc_gui_select"}}}}
{delay 2.4 {if able "select" {if rand 1.0 {if tagged "winterjam" {damage_report "body" "<c(9eccff)>by the winter"}{talk "injuring"}{if "winter_sound" {start_sound "world/winter/04"}{tags remove "winterjam"}}}}}}
{delay 3.4 {if able "select" {if rand 0.5 {start_sound "gui/misc_gui_select"}{delay 3.5 {talk "things_look_blue"}}}}} ;RUSTLED JIMMIES CONFIRMED
{delay 3.5 {if "jam_fix_animations"{if able "select" {tags add "jam"} {if rand 0.7 {ani_play "squat_reload_piat" 1.0 loop} else {ani_play "lie_reload_piat" 1.0 loop}}}}} ;animations of fixing the weapon}
;Fixing the Jam ;get rid of the shell that jammed your weapon, the immersion is real.
{delay 3.6 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 3.51 {if tagged "jam"{if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} }{delay 3.61 {if tagged "jam"{if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 3.7 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 3.71{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 3.8 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 3.81{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 4.4 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 4.41{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 5.3 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 5.31{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 6.6 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 6.61{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 7.8 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 7.81{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 8.4 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 8.41{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 9.3 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 9.31{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 10.6 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 10.61{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 11.8 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 11.81{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 12.4 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 12.41{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 13.4 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 13.41{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 14.4 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 14.41{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 
{delay 15.4 {if able "select" {if rand 0.3 {if tagged "jam" {start_sound "weapon/reload"}}}}}{delay 15.41{if tagged "jam" {if not able "select" {tags remove "jam"}{throw_on_ground}{delay 0.01 {ani_stop "squat_reload_piat"}{delay 0.012{ani_stop "lie_reload_piat"}}} }} } 


{if "random_fix_timer" ;Random Jam fix timers
{if rand 0.1 
{delay 15 {tags add "fixed"}{call "jam_fix"}}
else rand 0.2
{delay 6 {tags add "fixed"}{call "jam_fix"}}
else rand 0.3
{delay 7 {tags add "fixed"}{call "jam_fix"}}
else rand 0.4
{delay 8 {tags add "fixed"}{call "jam_fix"}}
else rand 0.5
{delay 9 {tags add "fixed"}{call "jam_fix"}}
else rand 0.6
{delay 10 {tags add "fixed"}{call "jam_fix"}}
else rand 0.3
{delay 3.7 {tags add "fixed"}{call "jam_fix"}}
else rand 0.2
{delay 4 {tags add "fixed"}{call "jam_fix"}}
else 
{delay 15 {tags add "fixed"}{call "jam_fix"} }}
else
{call "manual_fix_timer"} ;Manually set timer (go to menu to change)
}


}} } }};} 

{view show "flashbarrel"}
{view start "flashbarrel"}
{view start "shell"} 
{view start "flame"}
{kill_delay "fire"}
{delay 0.1 "shell" 
	{view pause "shell"}
} 
{delay 0.1 "fire"
	{view hide "flashbarrel"}
	{view pause "flashbarrel"}
}
{delay 0.5 "fire"
	{view pause "flame"}
}
{spawn "bazooka_shot" "fxshot" x}
	{if not tagged "ptrw" {if bone "foresight3" {if not tagged "jam"{if tagged "smgw"{call "spawn_shell"}} {if tagged "mgunw"{call "spawn_shell"}} {if tagged "riflew"{call "spawn_shell"}} {if tagged "pistolw"{call "spawn_shell"}} {if tagged "sniperw"{call "spawn_shell"}} {if tagged "shotgunw"{call "spawn_shell"}}}}} 
}



;;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;
;;;comment on moddb page if you encounter bugs;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;
;SONNE2 SPACE JAM END ;;;;;;;;;;;;;;;;;;;; ;;;;;;;;;;;;;;;;;;;;; ;;;;;;;X_x;;;;;;;;;;;;;; ;;;;;;;SHENMUE 3 FOR THE WIN!!!!!

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
		{if tagged "human_bleeding"
			{delay 5
				{tags remove "human_bleeding"}
			}
		}
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