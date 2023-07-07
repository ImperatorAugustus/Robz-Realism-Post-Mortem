(define "handle_ik"
	{on ik begin "basis"
		{if "wheel_teared"
			{impulse up 0.3}
		}
		{if tagged "standl_tear"
			{impulse up 0.3}
		}
		{if tagged "standr_tear"
			{impulse up 0.3}
		}
	}
	{on ik begin "wheel"}
	{on ik end "basis"
		{if "wheel_teared"
			{impulse up 0.3}
		}
		{if tagged "standl_tear"
			{impulse up 0.3}
		}
		{if tagged "standr_tear"
			{impulse up 0.3}
		}
	}
	{on ik begin "turret"
		{play_sound "rotate_turret" 1}
	}
	{on ik end "turret"
		{stop_sound "rotate_turret"}
	}
	{on ik begin "gun_rot"}
	{on ik end "gun_rot"}
	{on ik begin "turret_rotator"}
	{on ik end "turret_rotator"}
)

(define "damage_cannon_process_pierce" ;by Svoyak
{if stuff "%staff"
    {if volume "standl"
        ;do nothing
    else volume "standr"
        ;do nothing
    else volume "wheell"
        ;do nothing
    else volume "wheelr"
        ;do nothing
    else volume "gun"
		{if rand (* %pierce_turret__gun_brake 0.5)
			{components "gun" destroy}
		else
			{components "gun" break}
		}
    else
        {burn fx "smoke_dead_tank3" fake}
        {if rand %pierce_turret__crew_die
            {kill_crew "commander"}
            {kill_crew "driver1"}
        else rand %pierce_turret__crew_die
            {kill_crew "driver2"}
            {kill_crew "gunner"}
        else rand %pierce_turret__crew_die
            {kill_crew "commander1"}
        ;{damage_report "body" "component/crew_down"}
        }

        {if rand %pierce_turret__crew_contusion
            {crew_throw_off up 2 1 dir 2 1 turn 0 180 forward 2 force}

            {if operatable
                {weapon_work "gun" 0}
                {weapon_work "gun1_2" 0}
                {tags add "contused"}
                {delay 2
                    {if not tagged "gun_brake"
			{if "gun_mode"
                        	{weapon_work "gun1_2" 1}
			else
                        	{weapon_work "gun" 1}
			}
                    }
                    {tags remove "contused"}
                }
            }
        }
        {if rand %pierce_turret__gun_brake
            {components "gun" break}
        }
    }
}
)

{"cannon"

	(define "tear_bone"
		{spawn	"spheredust_small"}
		{component destroy}
		{tear "piece_large_steel" bone "%bone"
			{volumes disable bullet contact blast}	;prevent destroing at spawn moment
			{impulse up 6 4 dir 7 3}
		}
		{impulse up 0.3}
	)
	
        {on pierce
            ("damage_cannon_process_pierce"
                staff(ptr)
                pierce_turret__crew_die(0)
                pierce_turret__gun_brake(0)
                pierce_turret__crew_contusion(0)
            )
            ("damage_cannon_process_pierce"
                staff(shell ap)
                pierce_turret__crew_die(0.5)
                pierce_turret__gun_brake(0.3)
                pierce_turret__crew_contusion(1)
            )
			;{if volume "wheel"
			;	{if stuff "shell"
			;		{if not stuff "zenite"
			;			{call "tear_wheel"}
			;		}
			;	}
			;}
			{if volume "turret"
				{if stuff "shell_big" {if rand 0.3 ("tear_bone" bone(turret))}
				else stuff "shell_verybig" {if rand 0.5 ("tear_bone" bone(turret))}
				else stuff "shell_maximum" {if rand 0.8 ("tear_bone" bone(turret))}}
			}
			{if volume "turret1"
				{if stuff "shell_big" {if rand 0.3 ("tear_bone" bone(turret1))}
				else stuff "shell_verybig" {if rand 0.5 ("tear_bone" bone(turret1))}
				else stuff "shell_maximum" {if rand 0.8 ("tear_bone" bone(turret1))}}
			}
			{if volume "turret2"
				{if stuff "shell_big" {if rand 0.3 ("tear_bone" bone(turret2))}
				else stuff "shell_verybig" {if rand 0.5 ("tear_bone" bone(turret2))}
				else stuff "shell_maximum" {if rand 0.8 ("tear_bone" bone(turret2))}}
			}
			{if volume "turret3"
				{if stuff "shell_big" {if rand 0.3 ("tear_bone" bone(turret3))}
				else stuff "shell_verybig" {if rand 0.5 ("tear_bone" bone(turret3))}
				else stuff "shell_maximum" {if rand 0.8 ("tear_bone" bone(turret3))}}
			}
			{if volume "turret4"
				{if stuff "shell_big" {if rand 0.3 ("tear_bone" bone(turret4))}
				else stuff "shell_verybig" {if rand 0.5 ("tear_bone" bone(turret4))}
				else stuff "shell_maximum" {if rand 0.8 ("tear_bone" bone(turret4))}}
			}
		}
		{on bullet_hit
			{if volume "standl"
				{if stuff "shell"
					{if not stuff "zenite"
						("tear_bone" bone(standl))
						{tags add "standl_tear"}
						{if tagged "standr_tear"
							{tear "piece_medium_steel" bone "link1"
								{impulse up 0 1}
								{delete}
							}
						}
					}
				}
			}
			{if volume "standr"
				{if stuff "shell"
					{if not stuff "zenite"
						("tear_bone" bone(standr))
						{tags add "standr_tear"}
						{if tagged "standl_tear"
							{tear "piece_medium_steel" bone "link1"
								{impulse up 0 1}
								{delete}
							}
						}
					}
				}
			}
		}
	{on break_armor
		{call "do_armor_break"}
	}
	{on break_armor_again
		{call "do_armor_break"}
	}
	{on "do_armor_break"
		{if name "blast"
			{if volume "body"
				{call "explosion"}
			else volume "turret"
				{call "explosion"}
			}
		}
	}
	{on blast_hit
		{if min_energy 5 
			{if not linked
				{impulse up 0.5 0.2 dir 1 0.2}
			}
			{if simulating
				{attack_save}
				{delay_ex 0.3
					{attack_load}
					{crew_throw_off up 4 1 dir 5 1 turn 0 180 forward 2 force}
				}
			}
		else min_energy 1.2
			{if not linked
				{impulse up 0.3 0.2 dir 0.7 0.2}
			}
			{if simulating
				{attack_save}
				{delay_ex 0.3
					{attack_load}
					{crew_throw_off up 4 1 dir 5 1 turn 0 180 forward 2 force}
				}
			}
		else min_energy 0.6
 		 	{ani_play "hit"}
		}
		;{if volume "wheel"
		;	{if min_energy 2.5
		;		{call "tear_wheel"}
		;	else min_energy 1.5
		;		{component break}
		;	}
		;}

		{if volume "turret"
			{if min_energy 3 ("tear_bone" bone(turret))}
		}
		{if volume "turret1"
			{if min_energy 3 ("tear_bone" bone(turret1))}
		}
		{if volume "turret2"
			{if min_energy 3 ("tear_bone" bone(turret2))}
		}
		{if volume "turret3"
			{if min_energy 3 ("tear_bone" bone(turret3))}
		}
		{if volume "turret4"
			{if min_energy 3 ("tear_bone" bone(turret4))}
		}
		
		{if volume "standl"
			{if min_energy 2.5
				("tear_bone" bone(standl))
				{tags add "standl_tear"}
				{if tagged "standr_tear"
					{tear "piece_medium_steel" bone "link1"
						{impulse up 0 1}
						{delete}
					}
				}
			}
		}
		{if volume "standr"
			{if min_energy 2.5
				("tear_bone" bone(standr))
				{tags add "standr_tear"}
				{if tagged "standl_tear"
					{tear "piece_medium_steel" bone "link1"
						{impulse up 0 1}
						{delete}
					}
				}
			}
		}
	}
	{on "cut_parts"
		{add_view "smoke_dead_norm" "deathfx" "FXfire1"}
		{view start "deathfx"}
		(define "cut_part"
			{tear "piece_medium_steel" bone %0
				{impulse up 8 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 10 no_position}
				{call "check_delete_part"}
			}
		)
		("cut_part" args "part1")
		("cut_part" args "part2")
		("cut_part" args "part3")
		("cut_part" args "part4")
		("cut_part" args "part5")
		("cut_part" args "part6")
		{delay 14 {view stop "deathfx"}}
	}
	{on operatable on
		{if tagged "standl_tear"
			{impulse up 0.3}
		}
		{if tagged "standr_tear"
			{impulse up 0.3}
		}
		{if "wheel_teared"
			{impulse up 0.3}
		}
	}
	{on fire "gun"
		{ani_play "recoil"}
        {view start "flashbarrel1"}
		{view start "flashbarrel1s"}
		{delay 0.15
			{view pause "flashbarrel1"}
		}
		{delay 0.3
			{view pause "flashbarrel1s"}
		}
		{call "spawn_shell"}
		{if tagged "standl_tear"
			{impulse up 0.3}
		}
		{if tagged "standr_tear"
			{impulse up 0.3}
		}
		{if "wheel_teared"
			{impulse up 0.3}
		}
	}
	{on fire "gun1_2"
		{ani_play "recoil"}
        {view start "flashbarrel1"}
		{view start "flashbarrel1s"}
		{delay 0.15
			{view pause "flashbarrel1"}
		}
		{delay 0.3
			{view pause "flashbarrel1s"}
		}
		{call "spawn_shell"}
		{if tagged "standl_tear"
			{impulse up 0.3}
		}
		{if tagged "standr_tear"
			{impulse up 0.3}
		}
		{if "wheel_teared"
			{impulse up 0.3}
		}
	}
	{on "spawn_shell"
		{start_sound "weapon/shot/shell"}
		{add_view "smoke_zenit_2" "smoke_shell" "fx_invers"}
		{view start "smoke_shell"}
		{delay 2.5 0.5
			{view stop "smoke_shell"}
		}
		{spawn "shell_cannon" "fx_invers" x scale 0.014
			{impulse up 1.5 0.5 dir -4.5 0.7 cz 0.2 0.1 com}
			{add_view "smoke_zenit_2" "smoke_shell" "fx_shellsmoke"}
			{view start "smoke_shell"}
			{delay_effect 3 1 "stop"}
			{delay 3 0.5
				{hide 9999}
			}
		}
	}
	{on contact
		{if not impregnable
			{if effector "killzone_medium"
				{call "explosion"}
			}
			{if effector "killzone_big"
				{call "explosion"}
			}
			{if effector "killzone_maximum"
				{call "explosion"}
			}
			{if not effector "armored_car"
				{if effector "tank"
					{component destroy}
					{if volume "body"
						{set "crush" 1}
						{call "explosion"}
					}
				else effector "big part"
					{if effector_velocity 3
						{component break}
					}
				}
			}
		}
	}
	("handle_ik")
	{on "check_water_level" overload
		{if not linked
			{if water_level 1.2
				{able "sinking" 1}
			}
		}
	}
	{on "tear_wheel"
		;{set "wheel_teared" 1}
		{spawn	"spheredust_small"}
		{component destroy}
		;{tear "piece_medium_steel" bone from_volume id "wheel"
		;	{volumes disable bullet contact blast}	;prevent destroing at spawn moment
		;	{impulse up 6 4 dir 7 3}
		;}
		{tear "piece_medium_steel" bone "link1"
			{volumes disable bullet contact blast}	;prevent destroing at spawn moment
			{impulse up 0 1}
			{delete}
		}
		{impulse up 0.3}
		{chassis_work 0}
	}
}
{"bs3"
	(define "wheel_tear_bs3"
		{set "wheel_teared" 1}
		{spawn	"spheredust_small"}
		{component destroy}
		{tear "piece_medium_steel" bone "%wheel_1"
			{volumes disable bullet contact blast}	;prevent destroing at spawn moment
			{impulse up 6 4 dir 7 3}
		}
		{tear "piece_medium_steel" bone "%wheel_2"
			{volumes disable bullet contact blast}	;prevent destroing at spawn moment
			{impulse up 6 4 dir 7 3}
		}
		{tear "piece_medium_steel" bone "link1"
			;{volumes disable bullet contact blast}	;prevent destroing at spawn moment
			{impulse up 0 1}
			{delete}
		}
		{impulse up 0.3}
		{chassis_work 0}
	)
	{on pierce
		{if stuff "shell"
			{if not stuff "zenite"
				{if volume "wheelleft1"
					("wheel_tear_bs3" wheel_1(wheell1) wheel_2(wheell2))
				}
				{if volume "wheelleft2"
					("wheel_tear_bs3" wheel_1(wheell1) wheel_2(wheell2))
				}
				{if volume "wheelright1"
					("wheel_tear_bs3" wheel_1(wheelr1) wheel_2(wheelr2))
				}
				{if volume "wheelright2"
					("wheel_tear_bs3" wheel_1(wheelr1) wheel_2(wheelr2))
				}
			}
		}
	}
	{on blast_hit
		{if volume "wheel"
			{if min_energy 2.5
				{if volume "wheelleft1"
					("wheel_tear_bs3" wheel_1(wheelleft1) wheel_2(wheelleft2))
				}
				{if volume "wheelleft2"
					("wheel_tear_bs3" wheel_1(wheelleft1) wheel_2(wheelleft2))
				}
				{if volume "wheelright1"
					("wheel_tear_bs3" wheel_1(wheelright1) wheel_2(wheelright2))
				}
				{if volume "wheelright2"
					("wheel_tear_bs3" wheel_1(wheelright1) wheel_2(wheelright2))
				}
			}
		}
	}
	{on contact
		{if effector "tow_checker"
			{unlink_trailer}
		}
		{if effector "tow_check_heavy"
			{spawn "tow_gun_signal" "link1"}
		}
	}
}
{"longtom_script"
	{on pierce
		{if volume "wheel"
			{delay 0.5
				{if not destroyed "wheel" 2
					{set "wheel_teared" 0}
					{chassis_work 1}
				}
			}
		}
		{delay 0.1
			{if tagged "standl_tear"
				{if tagged "standr_tear"
					{tear "piece_medium_steel" bone "link1"
						{impulse up 0 1}
						{delete}
					}
					{tear "piece_large_steel" bone "pivot_back"
						{volumes disable bullet contact blast}	;prevent destroing at spawn moment
						{impulse up 0 1}
						{delete}
					}
				}
			}	
		}
	}
	{on blast_hit
		{if volume "wheel"
			{delay 0.5
				{if not destroyed "wheel" 2
					{set "wheel_teared" 0}
					{chassis_work 1}
				}
			}
		}
		{delay 0.1
			{if tagged "standl_tear"
				{if tagged "standr_tear"
					{tear "piece_medium_steel" bone "link1"
						{impulse up 0 1}
						{delete}
					}
					{tear "piece_large_steel" bone "pivot_back"
						{volumes disable bullet contact blast}	;prevent destroing at spawn moment
						{impulse up 0 1}
						{delete}
					}
				}
			}	
		}
	}
	{on "tear_wheel"
		{delay 0.5
			{if not destroyed "wheel" 2
				{set "wheel_teared" 0}
				{chassis_work 1}
			}
		}
	}
}
{"cannon_small"
	{on contact overload
		{if not impregnable
			{if effector "killzone_medium"
				{call "explosion"}
			}
			{if effector "killzone_big"
				{call "explosion"}
			}
			{if effector "killzone_maximum"
				{call "explosion"}
			}
			{if effector "tank"
				{component destroy}
				{if volume "body"
					{set "crush" 1}
					{call "explosion"}
				}
			else effector "armored_car"
				{component destroy}
				{if volume "body"
					{set "crush" 1}
					{call "explosion"}
				}
			}
		}
	}
}

{"ammo_box"
	{on contact
		{if not impregnable
			{if effector "killzone_medium"
				{call "explosion"}
			}
			{if effector "killzone_big"
				{call "explosion"}
			}
			{if effector "killzone_maximum"
				{call "explosion"}
			}
			{if effector "tank"
				{call "end"}
			else effector "armored_car"
				{call "end"}
			}
		}
	}
	{on blast_hit
		{if min_energy 5 
			{call "end"}
		else min_energy 1.2
			{call "end"}
		else min_energy 0.6
			{call "end"}
		}
	}
	{on "explosion_blastwave" overload
		{call "end"}
	}
	{on bullet_hit
		{if stuff "fg"
			{call "end"}
		}
	}
	{on "end"
		{spawn "wood_hit_big"}
		{spawn "wood_hit_circle_big"}
		{call "explosion"}
		{kill_crew}
		{drop_orders}
		{components destroy}
		{reset_manual_control}
		{able select 0}
		{able repaired 0}
		{clear_inventory}
		{delete}
	}
}
{"mgun_tripod"
	{on pierce
		{if stuff "shell"
			{call "explosion"}
		}
		{if stuff "zenite"
			{call "explosion"}
		}
	}
	{on blast_hit
		{if min_energy 1.1
			{call "explosion"}
		}
	}
	{on spawn
		{tags add "mgun_tripod"}
	}
	{on "burst_mode"
		{if tagged "full_auto_mode"
			{tags remove "full_auto_mode"}
			{damage_report "mgun" "Unit changed to burst mode"}
		else
			{tags add "full_auto_mode"}
			{damage_report "mgun" "Unit changed to full auto mode"}
		}
	}
}
{"small_weapons"
	{on pierce
		{if stuff "shell"
			{call "explosion"}
		}
		{if stuff "zenite"
			{call "explosion"}
		}
	}
	{on blast_hit
		{if min_energy 1.1
			{call "explosion"}
		}
	}
}
{"medium_weapons"
	{on blast_hit
		{if min_energy 2.2
			{call "explosion"}
		}
	}
}
{"big_weapons"
	{on blast_hit
		{if min_energy 3.3
			{call "explosion"}
		}
	}
}
{"mg_stan"
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel2"	"Foresight3"}
	}
	{on fire "mgun"
	;	{view show  "flashbarrel2"}
	;	{view start "flashbarrel2"}
	;	{delay 0.4 "fire"
	;		{view hide	"flashbarrel2"}
	;		{view pause	"flashbarrel2"}
	;		{view pause	"shell"}
	;	}
	}
	{on "explosion_blastwave" overload
		{impulse up 0.2 dir 0.3}
	}
;	{on contact overload}
	{on break
		{if component "shield"
			{call "explosion"}
		}
	}
}
{"maxim_1910_30"
	{on bullet_hit
		{if volume "shield"
			{if rand 0.5
				{kill_crew "gunner"}
			}
		}
	}
}
{"no_exp_blast"
	{on "explosion_blastwave" overload
;		{impulse up 0.2 dir 0.3}
	}
	{on "explosion_sound" overload}
}

{"mortar"
	{on spawn overload
		{link_sound "rotate_turret" "vehicle/turret/mortar"}
		{link_sound "rotate_gun" "vehicle/turret/medium"}

		{add_view	"flash_cannon_small"	"flashbarrel1"	"Foresight1"}
		{add_view	"powdersmoke_big"	"flashbarrel1s"	"Foresight1"}
		{add_view	"smoke_zenite"		"smkafire"	"Foresight1"}
		{add_view	"spheredust_big"	"dust"		"basis"}
	}
	{on fire "gun" overload
		{ani_play "recoil"}
       		{view start "dust"}
        	{view start "flashbarrel1"}
		{view start "flashbarrel1s"}
        	{view start "smkafire"}
		{delay 0.8
			{view pause "flashbarrel1"}
		}
		{delay 0.2
			{view pause "flashbarrel1s"}
		}
		{delay 1
			{view pause "dust"}
		}
        	{delay 2.5
            		{view stop "smkafire"}
        	}
		{blastwave c4 0.6 r0 3 r1 5 bone "Foresight1" offset 40 0 0}
		{call "spawn_shell"}
	}
	{on "cut_parts" overload
		{spawn "tank_die" "Basis"}
		{add_view "smoke_aero_big" "deathfx1" "fx_smoke1"}
		{add_view "smoke_black" "deathfx2" "fx_smoke2"}
		{view start "deathfx1"}
		{view start "deathfx2"}
		(define "cut_part"
			{tear "piece_big_steel" bone %0
				{impulse up 8 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 10 no_position}
				{call "check_delete_part"}
			}
		)
		("cut_part" args "part1")
		("cut_part" args "part2")
		("cut_part" args "part3")
		("cut_part" args "part4")
		("cut_part" args "part5")
		("cut_part" args "part6")
		{delay 10 2 {view stop "deathfx1"}}
		{delay 6 2 {view stop "deathfx2"}}
	}
	{on ik begin "gun_rot"
		{play_sound "rotate_gun" 1}
	}
	{on ik end "gun_rot"
		{stop_sound "rotate_gun"}
	}
	{on contact overload}
}

{"cannon flak"
	{on spawn overload
		{call "init_gun"}
		{call "add_movement_sound"}
	}
	{on "burst_mode"
		{if tagged "full_auto_mode"
			{tags remove "full_auto_mode"}
			{damage_report "mgun" "Unit changed to burst mode"}
		else
			{tags add "full_auto_mode"}
			{damage_report "mgun" "Unit changed to full auto mode"}
		}
	}
}
{"flak18a"
	{on blast_hit
		{if volume "shield_front"
			{if min_energy 3
				{tear "piece_large_steel" bone "shield_front" id "shield"
					{impulse up 0.5 0.5 dir 3 1.5 cx 1 1 cy 1 1 no_position}
				}
			}
		else
			{if min_energy 3.3
				{call "explosion"}
			}
		}
	}
}
{"flak36a"
	{on blast_hit
		{if volume "shield_front"
			{if min_energy 3
				{tear "piece_large_steel" bone "shield_front" id "shield"
					{impulse up 0.5 0.5 dir 3 1.5 cx 1 1 cy 1 1 no_position}
				}
			}
		else
			{if min_energy 3.3
				{call "explosion"}
			}
		}
	}
}

{"vickers"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" "vehicle/turret/medium3"}
	}
}
{"flak41"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" "vehicle/turret/medium3"}
	}
}

{"flak"
	("handle_ik")
	{on "init_gun"
		{add_view "light_flash_zenit"	"flashbarrel"	"foresight1"}
		{add_view "flash_zenit"			"flashbarrel00"	"shooter00"}
		{add_view "flash_zenit"			"flashbarrel01"	"shooter01"}
		{add_view "flash_zenit"			"flashbarrel02"	"shooter02"}
		{add_view "flash_zenit"			"flashbarrel03"	"shooter03"}
		{add_view "smoke_zenit"			"smoke00"		"shooter00"}
		{add_view "smoke_zenit"			"smoke01"		"shooter01"}
		{add_view "smoke_zenit"			"smoke02"		"shooter02"}
		{add_view "smoke_zenit"			"smoke03"		"shooter03"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{add_view "zenit_gilz"			"shell"			"FXshell3"}
		{add_view "zenit_gilz"			"shell"			"FXshell4"}
		{add_view "circledust_norm2"	"dust"			"basis"}
		{call "update_gun"}
	}
	{on "add_movement_sound"
		{link_sound "rotate_turret" "vehicle/turret/light"}
	}
	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{delay 0.42
					{view pause "flashbarrel%0"}
				}
				{ani_play "fire%0"}
				{delay 0.12 
					{view start "smoke%0"}
					{delay 5
						{view pause "smoke%0"}
					}
				}
		)
		
		{if    ("fire_barrel" args 00)
		  else ("fire_barrel" args 01)
		  else ("fire_barrel" args 02)
		  else ("fire_barrel" args 03)
		}

		{if name "00"
			{call "fire_gun_common"}
		}
		{if not tagged "full_auto_mode"
			{call "burst_stop"}
		}
	}
	{on "burst_stop"
		{if not tagged "burst_stop"
			{tags add "burst_stop"}
			{delay 0.5 0.2
				{weapon_work "gun" 0}
				{delay 0.7 0.1
					{weapon_work "gun" 1}
					{tags remove "burst_stop"}
				}
			}
		}
	}
	{on "fire_gun_common"
		{view start "flashbarrel"}
		{ani_play "recoil"}
		{kill_delay "shell_off"}
		{view start "shell"}
		{view start "dust"}
		{delay 0.12 "shell_off"
			{view pause "shell"}
			{view pause "dust"}
		}
		{if not tagged "full_auto_mode"
			{call "burst_stop"}
		}
	}
}

{"flak barrel1"
	{on fire "gun" overload
		{view start "flashbarrel00"}
		{delay 0.42
			{view pause "flashbarrel00"}
		}
		{ani_play "fire00"}
		{delay 0.12 
			{view start "smoke00"}
			{delay 5
				{view pause "smoke00"}
			}
		}
		{call "fire_gun_common"}
	}
}

{"small cannon"
	{on spawn overload
		{link_sound "rotate_turret" "turret.flak"}

		{add_view "light_flash_zenit"	"flashbarrel"	"foresight1"}
		{add_view "flash_zenit"			"flashbarrel1"	"foresight1"}
		{add_view "smoke_zenit"			"smoke"			"foresight1"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{call "update_gun"}
		
		{add_view	"human_linked_selection" "linked_selection" "visor"}
		{view hide "linked_selection"}
	}
	{on fire "gun" overload
		{view start "flashbarrel"}
		{view start "flashbarrel1"}
		{ani_play "fire"}
		{ani_play "recoil"}
		{kill_delay "shell_off"}
		{view start "shell"}
		{delay 0.12 "shell_off"
			{view pause "shell"}
			{view start "smoke"}
			{delay 0.3
				{view pause "flashbarrel1"}
			}
			{delay 5
				{view pause "smoke"}
			}
		}
	}
}

{"sg_small"
	{on "add_movement_sound" overload}
}

{"nebelwerfer"
	{on fire "gun"
		{spawn "startsmoke" inv_normal}
	}
	{on "__explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50               
			{blastwave c4 10 r0 10 r1 25}
			{blastwave c4 10 r0 10 r1 25}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
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
			{if min_energy 4
				{delay 0.1
					{call "explosion"}
				}
			}
		}
	}
}

{"zenite" ;gun mounted on car or tank
	("handle_ik")
	{on spawn
		{add_view "light_flash_zenit"	"zenite_flash"	"foresight1"}
		{add_view "flash_zenit"			"zenite_flash"	"foresight1"}
		{add_view "smoke_zenit"			"zenite_smoke"	"foresight1"}
		{add_view "zenit_gilz"			"zenite_shell"	"FXshell1"}
		{add_view "circledust_norm2"	"zenite_dust"	"turret"}
	}
	{on fire "gun" overload
        {view start "zenite_flash"}
		{ani_play "fire"}
		{kill_delay "shell_off"}
		{view start "zenite_shell"}
		{view start "zenite_dust"}
		{delay 0.12 "shell_off"
			{view pause "zenite_shell"}
			{view pause "zenite_dust"}
			{view pause "zenite_dust"}
			{view start "zenite_smoke"}
			{delay 0.3
				{view pause "zenite_flash"}
			}
			{delay 5
				{view pause "zenite_smoke"}
			}
		}
		{if not tagged "full_auto_mode"
			{call "burst_stop"}
		}
	}
	{on "burst_stop"
		{if not tagged "burst_stop"
			{tags add "burst_stop"}
			{delay 0.5 0.2
				{weapon_work "gun" 0}
				{delay 0.7 0.1
					{weapon_work "gun" 1}
					{tags remove "burst_stop"}
				}
			}
		}
	}
}

{"searchlight"
	{on blast_hit
		{if min_energy 0.4
			{call "light_break"}
		}
	}
	{on "light_break" ; handled in extender
		{call "lamp_broken"}
	}
	{on bullet_hit
		{if volume "lamp1"
			{call "lamp_broken"}
		}
	}
	{on "lamp_broken"
		{tags add "lamp_broken"}
	}
	{on ground_hit
		{call "explosion"}
	}
	{on "_explosion"
		{drop_orders}
		{call "light_break"}
	}
	{on operatable on}	; handled in extender
	{on operatable off}	; handled in extender
}

{"flak mortar"
	("handle_ik")
	{on "init_gun" overload
		{add_view "smoke_cannon400"			"smoke00"		"shooter00"}
		{add_view "smoke_cannon400"			"smoke01"		"shooter01"}
		{add_view "smoke_cannon400"			"smoke02"		"shooter02"}
		{call "update_gun"}
	}
	{on "fire_barrel00"
 	   {spawn "cannon400_fire" "shooter00" x}
	}
	{on "fire_barrel01"
 	   {spawn "cannon400_fire" "shooter01" x}
	}
	{on "fire_barrel02"
 	   {spawn "cannon400_fire" "shooter02" x}
	}
}
{"morser18"
	("gun_mode_reloadtimer" gun_reload(90) gun1_2_reload(60))
}
{"m115"
	("gun_mode_reloadtimer" gun_reload(90) gun1_2_reload(60))
}
{"bl72"
	("gun_mode_reloadtimer" gun_reload(80) gun1_2_reload(55))
}
