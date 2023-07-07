{"car"
	{on spawn
		{link_sound "flame" "fire/big"}

		{if not rain
			{add_view	"dustrun_small"			"on_grass"			"FXtraceR1"}
			{add_view	"dustrun_small"			"on_grass"			"FXtraceL1"}
			{add_view	"dustrun_sand_small"	"on_sand"			"FXtraceR1"}
			{add_view	"dustrun_sand_small"	"on_sand"			"FXtraceL1"}
			{add_view	"dustrun_snow_small"	"on_snow"			"FXtraceR1"}
			{add_view	"dustrun_snow_small"	"on_snow"			"FXtraceL1"}
			{add_view	"dustrun_small"			"on_country_road"	"FXtraceR1"}
			{add_view	"dustrun_small"			"on_country_road"	"FXtraceL1"}
			{add_view	"dustrun_small"			"on_ground"			"FXtraceR1"}
			{add_view	"dustrun_small"			"on_ground"			"FXtraceL1"}
		else
			{add_view	"engine_steam"			"engine_steam"		"FXfire1"}
		}
		{add_view	"drops_water"			"on_water"			"FXtraceR1"}
		{add_view	"drops_water"			"on_water"			"FXtraceL1"}
;		{add_view	"drops_water"			"on_mud"			"FXtraceR1"}
;		{add_view	"drops_water"			"on_mud"			"FXtraceL1"}
		{add_view	"drops_water_moto"		"on_puddle"			"FXtraceR1"}
		{add_view	"drops_water_moto"		"on_puddle"			"FXtraceL1"}

		{add_view	"smoke_black"			"smoke1"			"FXfire1"}
		{add_view	"smoke_black"			"smoke2"			"engine"}
		{add_view	"steam"					"steam"				"FXsteam"}
		{add_view	"exhaust_dark_small"	"exhaust"			"FXsmoke1"}
		{add_view	"exhaust_dark_small"	"exhaust"			"FXsmoke2"}
	}

	{on "add_movement_sound"
		{link_sound "move"			"vehicle/wheels/car"}
		{link_sound "move_end"		"vehicle/wheels/car_end"}
		{link_sound "engine"		"vehicle/engine/car"}
		{link_sound "engine_end"	"vehicle/engine/car_end"}
		{link_sound "exhaust"		"vehicle/engine/car_up"}
	}
	{on pierce
		{if volume "engine"
			{if rand 0.3
				{components "engine" break}
				{call "_burn"}
			else stuff "zenite"
				{components "engine" break}
				{if rand 0.4
					{call "_burn"}
				}
			else stuff "shell"
				{components "engine" break}
				{if rand 0.6
					{call "_burn"}
				}
			}
		}
		{if stuff "zenite"
			{if rand 0.5
				{components "body" break}
			}
		else stuff "shell"
			{components "body" break}
		}
	}
	
	{on break_armor
		{if name "pierce"
			{if volume "fuel"
				{call "pierce_fuel"}
			}
		else name "blast"                   
			{if volume "body"
				{if min_energy 3
					{call "blast_body"}
				}
			else volume "inventory"
				{if min_energy 3
					{call "blast_body"}
				}
			else volume "engine"
				{if min_energy 3
					{call "blast_body"} 
				else min_energy 2
					{if rand 0.5 
						{call "blast_body"}
					}
				}
			else volume "cabin"
				{if min_energy 3
					{call "blast_body"}
				}
			else volume "bodyback"
				{if min_energy 3
					{call "blast_body"}
				}
			}
		}
	}
	{on blast_hit
		{if min_energy 2
			{call "blast_body"}
		else min_energy 0.5
			{components "body" break}
		}
	}
	{on break_armor_again
		{if name "blast"
			{if volume "body"
				{if min_energy 2
					{call "blast_body"}
				}
			else volume "inventory"
				{if min_energy 2
					{call "blast_body"}
				}
			else volume "engine"
				{if min_energy 2
					{call "blast_body"}
				}
			else volume "cabin"
				{if min_energy 2
					{call "blast_body"}
				}
			else volume "bodyback"
				{if min_energy 2
					{call "blast_body"}
				}
			}
		}
	}
	{on "burst_mode"
		{if tagged "full_auto_mode"
			{tags remove "full_auto_mode"}
			{tags add "coax_burst_mode"}
			{damage_report "mgun" "Unit changed to burst mode"}
		else
			{tags add "full_auto_mode"}
			{tags remove "coax_burst_mode"}
			{damage_report "mgun" "Unit changed to full auto mode"}
		}
	}
	{on bullet_hit
		{if stuff "rocketlauncher"
			{if volume "cabin"
				{if rand 0.2	 	
					{call "blast_body"}
				else			
					{components "body" break}
				}
			 else volume "body"	
			 	{if rand 0.2	 	
					{call "blast_body"}
				else			
					{components "body" break}
				}
			 else volume "engine"
			 	{if rand 0.5
					{call "burn"}
				else rand 0.2
					{call "blast_body"}
				}
			}
		}
		{if volume "glass"
		 	{call "break_glass"}
		 else volume "cabin"
		 	{call "break_glass"}
		}
	}
	{on "blast_body"
		{if min_energy 40
			{impulse up 1.5 0.5 dir 1.5 0.5}
		 else min_energy 25
			{impulse up 0.8 0.3 dir 0.8 0.3}
		}
		{call "explosion"}
	}
	{on "pierce_fuel"
		{if rand 0.5
			{volumes "fuel" disable bullet contact blast}
			{spawn "tank_die_particle"}
			{call "burn"}
		}
	}
	{on "break_glass"
		{volumes "glass" disable bullet contact}
	 	{spawn "glass_hit2" "glass" x}
	 	{delay 0.1
;	 		{con "cut glass"}
		 	{bone cut "glass"}
	 	}
	}
	{on contact
		{if not impregnable
			{if effector_velocity 5
				{if effector "tank"
					{call "crush"}
				else effector "railway"
					{call "crush"}
				}
			else effector_velocity 3
				{if effector "big part"
					{component break}
				}
			}
		}
	}
	{on break
		{if component "cabin"
			{spawn "car_die_particle"}
			{volumes "cabin" disable bullet}
			{volumes "glass" disable bullet contact}
			{crew_enable group "crew" 0}
			{view start "smoke3"}
    			{delay 10 {view stop "smoke3"}}
    		else component "body"
			{spawn "car_die_particle"}
			{reset_manual_control}
			{able select 0}
			{call "notify_break"}
			{delay 2 1
				{crew_emit}
				{delay 2{crew_emit}}
				{delay 4{crew_emit}}
				{delay 6{crew_emit}}
			}
		else component "engine"
                        {spawn "car_die_particle"}
			{view start "smoke2"}
			{delay 40 {view stop "smoke2"}}
			{view start "steam"}
			{delay 2  {view stop "steam"}}
		}
	}
	{on repair
		{if component "cabin"
			{crew_enable group "crew" 1}
			{view stop "smoke2"}
		else component "body"
			{able select 1}
		}
	}

	{on "burn"
		{if not burned
			{call "_burn"}
		}
	}
	{on "_burn"
		{able select 0}
		{able repaired 0}
	}
	{on "check_burn_emit"
		{call "burn_emit"}
	}
	{on "_explosion"
		{add_view "smoke_dead_norm" "deathfx" "fxfire1"}
		{if not "crush"
			{spawn "tank_die" "Basis"}
			{spawn "tank_die_particle"}
			{impulse up 2.5 1.5 dir 2 1}
		}
	}
	{on "spawn_shellhole"
;		{spawn "crater_big" "Basis" no_normal terrain_texmod}
		{spawn "shellhole_dead_car2" "Basis"}
	}
	{on "tear"
		{spawn	"spheredust_small"}
		{component destroy}
		{if volume "bodyback"
			{volume disable visible bullet contact}
		}
		{tear "piece_medium_steel" bone from_volume
			{impulse up 2 1 dir 2 1}
;			{burn first_volume fx "smoke_black" time 10 5}
			{add_view "smoke_black" "smoke" "basis"}
			{view start "smoke"}
			{delay_effect 10 5 "pause"}
		}
	}
	{on "slice_load"
		{if name "car_part"
			{with_effector
				{add_view "smoke_black" "smoke" "basis"}
			}
		}
	}
	{on "cut_parts"
		{if not tagged "energy_overload"
			{add_view "smoke_dead_norm" "deathfx" "fxfire1"}
			{view start "deathfx"}
		}
		(define "cut_part"
			{tear "piece_medium_steel" bone %0
				{impulse up 4 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 6 no_position}
;				{burn first_volume fx "smoke_dead_wheel" time 20 5}
;				{add_view "smoke_dead_wheel" "smoke" "basis"}
;				{view start "smoke"}
				{delay_effect 20 5 "stop"}
			}
		)
		("cut_part" args "part1")
		("cut_part" args "part2")
		("cut_part" args "part3")
		("cut_part" args "part4")
		("cut_part" args "part5")
		("cut_part" args "part6")
		;cut teared bones after SetSkeleton
		{if "cabine_teared"
			{bone cut "cabin"}
		}
		{if "engine_teared"
			{bone cut "engine"}
		}
		{delay 14 5 {view stop "deathfx"}}
	}
	{on "crush"
    	{component destroy}
    	{if volume "body"
    		{set "crush" 1}
    		{call "explosion"}
    	}
	}
}

{"wheeled vehicle"
	{on move on
		{if destroyed "wheel" 1
			{impulse up 0.1}
			{set "wheel_teared" 1}
			{call "check_work_mover"}
		}
	}
	{on blast
		{if volume "wheel"
			{if stuff "mine"
				{if min_energy 2.5
					{call "tear_wheel"}
				}
			else min_energy 3
				{call "tear_wheel"}
			else min_energy 1.5
				{component break}
			}
		}
	}
	{on pierce
		{if volume "wheel"
			{if stuff "shell"
				{if not stuff "zenite"
					{call "tear_wheel"}
				}
			}
		}
	}
	{on break_armor
;		{con "break_armor"}
		{if component "wheel"
			{if name "pierce"
				{component break}
			}
		}
	}
	{on "dont_move"
		{set "wheel_teared" 1}
		{call "check_work_mover"}
		{crew_enable place "driver" 0}
	}
	{on "tear_wheel"
		{set "wheel_teared" 1}
		{spawn	"spheredust_small"}
		{component destroy}
;		{con "effect tear wheel"}
		{tear "piece_medium_steel" bone from_volume id "wheel"
			{volumes disable bullet contact blast}	;prevent destroing at spawn moment
			{impulse up 6 4 dir 7 3}
			;{burn first_volume fx "smoke_dead_wheel" time 10 5}
			;{add_view "smoke_dead_wheel" "smoke" "basis"}
			;{fire radius 0.5 time 12 follow}
			;{view start "smoke"}
			;{delay_effect 10 5 "pause"}
		}
		{impulse up 0.3}
	}
	{on break
		{if component "wheel"
			{if not linked
		 		{if not velocity 0.5
		 			{impulse up 0.05}
		 		}
			}
		}
	}
	{on "check_work_mover" overload
		{if "wheel_teared"
			{chassis_work 0}
		else
			{if not work "mover"
				{chassis_work 0}
			else not work "track"
				{chassis_work 0}
			else work "wheel" 1
				{chassis_work 1}
				{if broken "wheel" 2
					{movement_limit slow}
				else broken "wheel" 1
					{movement_limit normal}
				else
					{movement_limit fast}
				}
			else
				;{chassis_work 0}
				{movement_limit slow}
			}
		}
	}
	{on "_explosion"
		(define "rand_tear_wheel"
			{if rand 0.5
;				{con "rnd tear wheel"}
				{components %0 destroy}
				{tear "piece_medium_steel" bone %0 id "wheel"
					{volumes disable bullet contact blast}	;prevent destroing at spawn moment
					{impulse up 7 4 dir 7 4}
;					{burn first_volume fx "smoke_dead_wheel" time 10 5}
					{add_view "smoke_dead_wheel" "smoke" "basis"}
					{view start "smoke"}
					{delay_effect 10 5 "pause"}
				}
			}
		)
;		("rand_tear_wheel" args "wheelleft1")
;		("rand_tear_wheel" args "wheelleft2")
;		("rand_tear_wheel" args "wheelright1")
;		("rand_tear_wheel" args "wheelright2")
	}
}
{"wheeled_6 vehicle"
	{on move on
		{if destroyed "wheel" 2
			{impulse up 0.1}
			{set "wheel_teared" 1}
			{call "check_work_mover"}
		}
	}
	{on "stop_on"
		{if destroyed "wheel" 1
			{impulse up 0.1}
		}
	}
	;{on destroy
	;	{if component "wheel"
	;		{call "tear_wheel"}
	;	}
	;}
	{on blast
		{if volume "wheel"
			{if stuff "mine"
				{if min_energy 2.5
					{call "tear_wheel"}
				}
			else min_energy 3
				{call "tear_wheel"}
			else min_energy 1.5
				{component break}
			}
		}
	}
	{on pierce
		{if volume "wheel"
			{if stuff "shell"
				{if not stuff "zenite"
					{call "tear_wheel"}
				}
			}
		}
	}
	{on break_armor
;		{con "break_armor"}
		{if component "wheel"
			{if name "pierce"
				{component break}
			}
		}
	}
	{on "dont_move"
		{set "wheel_teared" 1}
		{call "check_work_mover"}
		{crew_enable place "driver" 0}
	}
	{on "tear_wheel"
		{if destroyed "wheel" 1
			{set "wheel_teared" 1}
			{spawn	"spheredust_small"}
			{component destroy}
			{tear "piece_medium_steel" bone from_volume id "wheel"
				{volumes disable bullet contact blast}	;prevent destroing at spawn moment
				{impulse up 6 4 dir 7 3}
			}
			{impulse up 0.3}
			{delay 1 {impulse up 0.1}}
		else
			{spawn	"spheredust_small"}
			{component destroy}
			{tear "piece_medium_steel" bone from_volume id "wheel"
				{volumes disable bullet contact blast}	;prevent destroing at spawn moment
				{impulse up 6 4 dir 7 3}
			}
			{impulse up 0.3}
		}
	}
	{on break
		{if component "wheel"
			{if not linked
		 		{if not velocity 0.5
		 			{impulse up 0.05}
		 		}
			}
		}
	}
	{on "check_work_mover" overload
		{if "wheel_teared"
			{chassis_work 0}
		else
			{if not work "mover"
				{chassis_work 0}
			else not work "track"
				{chassis_work 0}
			else work "wheel" 1
				{chassis_work 1}
				{if broken "wheel" 2
					{movement_limit slow}
				else broken "wheel" 1
					{movement_limit normal}
				else
					{movement_limit fast}
				}
			else
				;{chassis_work 0}
				{movement_limit slow}
			}
		}
	}
}
{"wheeled_8 vehicle"
	{on move on
		{if destroyed "wheel" 3
			{impulse up 0.1}
			{set "wheel_teared" 1}
			{call "check_work_mover"}
		}
	}
	{on "stop_on"
		{if destroyed "wheel" 1
			{impulse up 0.1}
		}
	}
	;{on destroy
	;	{if component "wheel"
	;		{call "tear_wheel"}
	;	}
	;}
	{on blast
		{if volume "wheel"
			{if stuff "mine"
				{if min_energy 2.5
					{call "tear_wheel"}
				}
			else min_energy 3
				{call "tear_wheel"}
			else min_energy 1.5
				{component break}
			}
		}
	}
	{on pierce
		{if volume "wheel"
			{if stuff "shell"
				{if not stuff "zenite"
					{call "tear_wheel"}
				}
			}
		}
	}
	{on break_armor
;		{con "break_armor"}
		{if component "wheel"
			{if name "pierce"
				{component break}
			}
		}
	}
	{on "dont_move"
		{set "wheel_teared" 1}
		{call "check_work_mover"}
		{crew_enable place "driver" 0}
	}
	{on "tear_wheel"
		{if destroyed "wheel" 2
			{set "wheel_teared" 1}
			{spawn	"spheredust_small"}
			{component destroy}
			{tear "piece_medium_steel" bone from_volume id "wheel"
				{volumes disable bullet contact blast}	;prevent destroing at spawn moment
				{impulse up 6 4 dir 7 3}
			}
			{impulse up 0.3}
			{delay 1 {impulse up 0.1}}
		else
			{spawn	"spheredust_small"}
			{component destroy}
			{tear "piece_medium_steel" bone from_volume id "wheel"
				{volumes disable bullet contact blast}	;prevent destroing at spawn moment
				{impulse up 6 4 dir 7 3}
			}
			{impulse up 0.3}
		}
	}
	{on break
		{if component "wheel"
			{if not linked
		 		{if not velocity 0.5
		 			{impulse up 0.05}
		 		}
			}
		}
	}
	{on "check_work_mover" overload
		{if "wheel_teared"
			{chassis_work 0}
		else
			{if not work "mover"
				{chassis_work 0}
			else not work "track"
				{chassis_work 0}
			else work "wheel" 1
				{chassis_work 1}
				{if broken "wheel" 2
					{movement_limit slow}
				else broken "wheel" 1
					{movement_limit normal}
				else
					{movement_limit fast}
				}
			else
				;{chassis_work 0}
				{movement_limit slow}
			}
		}
	}
}
{"truck"
;	{on blast overload	
;		{if volume "body"
;			{if min_energy 4
;				{call "blast_body"}
;				{con "truck 3"}
;			else min_energy 1.1
;				{if rand 0.25
;					{call "blast_body"}
;				{con "truck 1.1"}
;				}
;			else stuff "grenade"
;				{if rand 0.25
;					{call "blast_body"}
;					{con "truck 0.5"}
;				}
;			}
;		}
;	}
}

{"katusha car"
	{on fire "gun"
		{spawn "startsmoke_big"}
		{spawn "startdust_big" "FXdust"}
	}
	{on "__explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 20 r0 10 r1 25}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
	{on "spawn_shellhole"
		{if "big_explosion"                                        
			{spawn "crater_extra_big" "basis" terrain_texmod}
                        {spawn "shellhole_big_dead" "basis"}
		}
	}
	{on blast
		{if volume "body"
			{if min_energy 3
				{call "blast_body"}
			;else min_energy 1
			;	{if rand 0.6
			;		{call "blast_body"}
			;	}			
			;else stuff "grenade"
			;	{if rand 0.4
			;		{call "blast_body"}
			;	}
			}	
		}
	}
}

{"fuel_tank"
	{on blast_hit
		{if min_energy 2
			{call "explosion"}
		else min_energy 0.5
			{if rand 0.5
				{call "explosion"}
			}
		}
	}
	{on break_armor
		{call "pierce_bodyback"}
	}
	{on break_armor_again
		{call "pierce_bodyback"}
	}
	{on "pierce_bodyback"
		{if name "pierce"
			{if not able "exploded"
				{if volume "bodyback"
					{if stuff "bullet"
						{burn fx "drops_water_small_short" fake}
					}
				}
			}
		}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 8 time 15 heating 10}
	}
}

{"dead_vehicle"
	{on blast
		{if volume "body"
			{if min_energy 2.5
				{call "explosion"}
			}
		}
	}
	{on "explosion"
		{if not "exploded"
			{set "exploded" 1}
			{call "_explosion"}
		}
	}
	{on "_explosion"
		{start_sound "crush/big/vehicle"}
		{delay_ex 0
			{set_skeleton "_x" sync}
			{ani_play "death"}
			{call "cut_parts"}
		}
	}
	{on "cut_parts"
		{add_view "smoke_dead_wheel" "smoke" "basis"}
		{view start "smoke"}
		{delay 20 10
			{view stop "smoke"}
		}
		(define "cut_part"
			{tear "piece_medium_steel" bone %0
				{impulse up 4 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 6 no_position}
;				{add_view "smoke_dead_wheel" "smoke" "basis"}
;				{view start "smoke"}
				{delay_effect 20 5 "stop"}
			}
		)
		("cut_part" args "part1")
		("cut_part" args "part2")
		("cut_part" args "part3")
		("cut_part" args "part4")
		("cut_part" args "part5")
		("cut_part" args "part6")
	}
}

{"buldozer"
	{on move on
		{ani_play "liftup" +1}
	}
	{on move off
		{ani_play "liftup" -1 resume}
	}
}
(define "break_glass2"
 	{volumes "glass%1" disable bullet contact blast}
 	{spawn "glass_hit2" "glass%1" x}
 	{delay 0.1
 	{bone cut "glass%1"}
	}
)

{"mittlever car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz250"	}
		{link_sound "engine"			"vehicle/engine/sdkfz250"		}
		{link_sound "engine_end"		"vehicle/engine/sdkfz250_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/sdkfz250_up"	}
		{link_sound "idle"			"vehicle/engine/sdkfz_idle"}
	}
}
(define "sdkfz250_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz250"	}
		{link_sound "engine"			"vehicle/engine/sdkfz250"		}
		{link_sound "engine_end"		"vehicle/engine/sdkfz250_end"	}
		{link_sound "exhaust"			"vehicle/engine/sdkfz250_up"	}
		{link_sound "idle"			"vehicle/engine/sdkfz_idle"	}
	}
)
{"sdkfz251"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz250"	}
		{link_sound "engine"			"vehicle/engine/sdkfz250"		}
		{link_sound "engine_end"		"vehicle/engine/sdkfz250_end"	}
		{link_sound "exhaust"			"vehicle/engine/sdkfz250_up"	}
		{link_sound "idle"			"vehicle/engine/sdkfz_idle"	}
	}
}
{"np_sdkfz250_1"
	("sdkfz250_sound")
}
{"np_sdkfz250_7"
	{on spawn
		{link_sound "rotate_turret" "vehicle/turret/mortar"}
		{link_sound "rotate_gun" "vehicle/turret/medium"}
		{add_view	"flash_cannon_small"		"flashbarrel1"	"Foresight1"}
		{add_view	"powdersmoke_big"		"flashbarrel1s"		"Foresight1"}
		{add_view	"smoke_zenite"		    "smkafire"		"Foresight1"}
	}
	("sdkfz250_sound")
	{on fire "gun"
        		{view start "flashbarrel1"}
		{view start "flashbarrel1s"}
        		{view start "smkafire"}
		{delay 0.8
			{view pause "flashbarrel1"}
		}
		{delay 0.2
			{view pause "flashbarrel1s"}
		}
        		{delay 2.5
            			{view stop "smkafire"}
        		}
	}
}
{"np_sdkfz250_9"
	("sdkfz250_sound")
}
{"np_sdkfz250_10"
	("sdkfz250_sound")

}
{"np_sdkfz250_11"
	("sdkfz250_sound")
}
{"np_sdkfz251_1"
	("sdkfz250_sound")
}
{"np_sdkfz251_4"
	("sdkfz250_sound")
}
{"np_sdkfz251_9"
	("sdkfz250_sound")
}
{"np_sdkfz251_10"
	("sdkfz250_sound")
	{on fire "gun2"
		{ani_play "fire2"}
	}
}
{"np_sdkfz251_17"
	("sdkfz250_sound")
}
{"np_sdkfz251_1w"
	("sdkfz250_sound")
	{on fire "gun"
		{spawn "startsmoke_big"}
		{spawn "startdust_big" "FXdust"}
	}
	{on fire "gun2"
		{ani_play "fire"}
		{spawn "startsmoke_big"}
		{spawn "startdust_big" "FXdust"}
	}
	{on fire "gun3"
		{ani_play "fire"}
		{spawn "startsmoke_big"}
		{spawn "startdust_big" "FXdust"}
	}
	{on "__explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 20 r0 10 r1 25}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
	{on "spawn_shellhole"
		{if "big_explosion"                                        
			{spawn "crater_extra_big" "basis" terrain_texmod}
                        {spawn "shellhole_big_dead" "basis"}
		}
	}
	{on blast
		{if volume "body"
			{if min_energy 3
				{call "blast_body"}
			else min_energy 1
				{if rand 0.6
					{call "blast_body"}
				}			
			else stuff "grenade"
				{if rand 0.4
					{call "blast_body"}
				}
			}	
		}
	}
}
{"np_sdkfz8"
	("sdkfz250_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"zis5 car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/blitz"	}
		{link_sound "engine"			"vehicle/engine/zis"   	}
		{link_sound "engine_end"		"vehicle/engine/zis_end"	}
		{link_sound "exhaust"			"vehicle/engine/zis_up"	}
		{link_sound "idle"			"vehicle/engine/zis"	}
	}
}
{"np_bm31 car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/blitz"	}
		{link_sound "engine"			"vehicle/engine/zis"   	}
		{link_sound "engine_end"		"vehicle/engine/zis_end"	}
		{link_sound "exhaust"			"vehicle/engine/zis_up"	}
		{link_sound "idle"			"vehicle/engine/zis"	}
	}
}
{"bm8-48 car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/blitz"	}
		{link_sound "engine"			"vehicle/engine/zis"   	}
		{link_sound "engine_end"		"vehicle/engine/zis_end"	}
		{link_sound "exhaust"			"vehicle/engine/zis_up"	}
		{link_sound "idle"			"vehicle/engine/zis"	}
	}
}
{"bm13 car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/blitz"	}
		{link_sound "engine"			"vehicle/engine/zis"   	}
		{link_sound "engine_end"		"vehicle/engine/zis_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "exhaust"			"vehicle/engine/zis_up"	}
		{link_sound "idle"			"vehicle/engine/zis"	}
	}
}
{"zis5eng car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/blitz"	}
		{link_sound "engine"			"vehicle/engine/zis"   	}
		{link_sound "engine_end"		"vehicle/engine/zis_end"	}
		{link_sound "exhaust"			"vehicle/engine/zis_up"	}
		{link_sound "idle"			"vehicle/engine/zis"   	}
	}
}
{"zis42 car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/t34"	}
		{link_sound "engine"			"vehicle/engine/zis"   	}
		{link_sound "engine_end"		"vehicle/engine/zis_end"	}
		{link_sound "exhaust"			"vehicle/engine/zis_up"	}
		{link_sound "idle"			"vehicle/engine/zis"   	}
	}
}
{"dodgewc56 car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/dodge"		}
		{link_sound "engine"			"vehicle/engine/dodge" 		}
		{link_sound "engine_end"		"vehicle/engine/dodge_end" 	}
		{link_sound "exhaust"			"vehicle/engine/dodge_up"	}
	}
}
(define "kubel_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/kubel"	}
		{link_sound "engine"			"vehicle/engine/kubel"   	}
		{link_sound "engine_end"		"vehicle/engine/kubel_end"	}
		{link_sound "exhaust"			"vehicle/engine/kubel_up"	}
		{link_sound "idle"			"vehicle/engine/kubel_idle"	}
	}
)
{"kubel car"
	("kubel_sound")
}
{"kubel_mgun car"
	("kubel_sound")
}
{"kubel_mgun_34 car"
	("kubel_sound")
}
{"willysmb car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/MB"	}
		{link_sound "engine"			"vehicle/engine/MB" 		}
		{link_sound "engine_end"		"vehicle/engine/MB_end" 	}
		{link_sound "exhaust"			"vehicle/engine/MB_up"		}
		{link_sound "idle"			"vehicle/engine/kubel_idle"   	}
	}
}
{"np_willysmb car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/MB"	}
		{link_sound "engine"			"vehicle/engine/MB" 		}
		{link_sound "engine_end"		"vehicle/engine/MB_end" 	}
		{link_sound "exhaust"			"vehicle/engine/MB_up"		}
		{link_sound "idle"			"vehicle/engine/kubel_idle"   	}
	}
	{on bullet_hit
 		{if volume "glass_front1"
 			("break_glass2" args 1 _front1)
 		else volume "glass_front2"
 			("break_glass2" args 1 _front2)
 		}
 	}
}
{"np_willysmb_50 car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/MB"	}
		{link_sound "engine"			"vehicle/engine/MB" 		}
		{link_sound "engine_end"		"vehicle/engine/MB_end" 	}
		{link_sound "exhaust"			"vehicle/engine/MB_up"		}
		{link_sound "idle"			"vehicle/engine/kubel_idle"   	}
	}
	{on bullet_hit
 		{if volume "glass_front1"
 			("break_glass2" args 1 _front1)
 		else volume "glass_front2"
 			("break_glass2" args 1 _front2)
 		}
 	}
}
{"np_willys50 car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/MB"	}
		{link_sound "engine"			"vehicle/engine/MB" 		}
		{link_sound "engine_end"		"vehicle/engine/MB_end" 	}
		{link_sound "exhaust"			"vehicle/engine/MB_up"		}
		{link_sound "idle"			"vehicle/engine/kubel_idle"   	}
	}
}
{"np_willysat car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/MB"	}
		{link_sound "engine"			"vehicle/engine/MB" 		}
		{link_sound "engine_end"		"vehicle/engine/MB_end" 	}
		{link_sound "exhaust"			"vehicle/engine/MB_up"		}
		{link_sound "idle"			"vehicle/engine/kubel_idle"   	}
	}
}
{"np_willysmb_en car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/MB"	}
		{link_sound "engine"			"vehicle/engine/MB" 		}
		{link_sound "engine_end"		"vehicle/engine/MB_end" 	}
		{link_sound "exhaust"			"vehicle/engine/MB_up"		}
		{link_sound "idle"			"vehicle/engine/kubel_idle"   	}
	}
	{on bullet_hit
 		{if volume "glass_front1"
 			("break_glass2" args 1 _front1)
 		else volume "glass_front2"
 			("break_glass2" args 1 _front2)
 		}
 	}
}
(define "horch_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/horch"	}
		{link_sound "engine"			"vehicle/engine/horch" 		}
		{link_sound "engine_end"		"vehicle/engine/horch_end" 	}
		{link_sound "exhaust"			"vehicle/engine/horch_up"	}
		{link_sound "idle"				"vehicle/engine/kubel_idle"   	}
	}
)
{"horch car"
	("horch_sound")
}
{"kfz15 car"
	("horch_sound")
}
{"kfz15_gun car"
	("horch_sound")
}
(define "gmc_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/gmc"		}
		{link_sound "move_end"			"vehicle/wheels/gmc_end"	}
		{link_sound "engine"			"vehicle/engine/m3a1" 		}
		{link_sound "engine_end"		"vehicle/engine/m3a1_end" 	}
		{link_sound "exhaust"			"vehicle/engine/m3a1_up"	}
		{link_sound "idle"			"vehicle/engine/m3a1"   	}
	}
)
{"gmc_cckw car"
	("gmc_sound")
}
{"gmc_inf car"
	("gmc_sound")
}
{"gmc_art car"
	("gmc_sound")
}
{"gmc car"
	("gmc_sound")
}
{"gmc_eng car"
	("gmc_sound")
}
(define "opel_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/blitz"	}
		{link_sound "engine"			"vehicle/engine/Blitz"   	}
		{link_sound "engine_end"		"vehicle/engine/Blitz_end"	}
		{link_sound "exhaust"			"vehicle/engine/Blitz_up"	}
		{link_sound "idle"			"vehicle/engine/truck_idle"   	}
	}
)
{"blitz3_6"
	("opel_sound")
}
{"blitz3_6inf"
	("opel_sound")
}
{"blitz3_6art"
	("opel_sound")
}
{"blitz3_6eng"
	("opel_sound")
}
{"blitz3_6f"
	("opel_sound")
}
{"blitz3_6m"
	("opel_sound")
}
{"isuzutx40"
	("opel_sound")
}
{"sdkfz10_5 car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz10"	 }
		{link_sound "engine"			"vehicle/engine/sdkfz10"	 }
		{link_sound "engine_end"		"vehicle/engine/sdkfz234_end" }
		{link_sound "rotate_turret" 	"vehicle/turret/light1"		 }
		{link_sound "exhaust"			"vehicle/engine/sdkfz234_up" }
	}
}

{"car_with_dust"
	{on spawn
		{add_view	"dustrun_small"			"on_ground"			"FXtraceR1"}
		{add_view	"dustrun_small"			"on_ground"			"FXtraceL1"}
	}
	{on "start_fx_ground"
		{view start "on_ground"}
	}
	{on "stop_fx_ground"
		{view pause "on_ground"}
	}
}

{"soldier_us_afr_palmer_dodge"
	{on "lights_on"
		{add_view 	"headlight"		"light"		"headlightL"}
		{add_view 	"headlight"		"light"		"headlightR"}
		{add_view 	"light_vehicle"	"light"		"fxlight"}
		{view start "light"}
		{view show "light"}
	}
}
{"truck_mortar"
	{on fire "gun"
		{spawn "startsmoke" inv_normal}
	}
}
(define "break_glass2"
 	{volumes "glass%1" disable bullet contact blast}
 	{spawn "glass_hit2" "glass%1" x}
 	{delay 0.1
 	{bone cut "glass%1"}
	}
)
{"schwimmwagen car"
	("kubel_sound")
	{on bullet_hit
 		{if volume "glass_front1"
 			("break_glass2" args 1 _front)
 		}
 	}
	{on "update_bulbs"
		{if "in_water"
			{if not "eng_water" 
				{set "eng_water" 1}
				{ani_play "engine"}	
			}
			{if not velocity 0.001
				{view start "on_stead"}
				{view pause "on_move"}
				{ani_stop "swim"}
				{ani_stop "propeller"}
				{ani_play "drift" loop}
					
			else
				{view start "on_move"}
				{view pause "on_stead"}
				{ani_stop "drift"}
				{ani_play "swim" loop}
				{ani_play "propeller" loop}
			}
		else
			{if "eng_water" 
				{set "eng_water" 0}
				{ani_play "engine_stop"}
			}
			{ani_stop "swim"}
			{ani_stop "drift"}
			{ani_stop "propeller"}
			{view pause "on_stead"}
			{view pause "on_move"}
		}
	}
}