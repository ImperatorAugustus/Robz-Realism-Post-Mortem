{"explosion_throw_crew vehicle"
	{on "_explosion"F
		{crew_throw_off up 4 1 dir 5 1 turn 0 180 forward 2 rnd_die 0.5}
	}
}

{"turret_rotator"
	{on spawn
		{set "rotate_turret" 0}
	}
	{on ik begin "turret"
		{kill_delay "rotate_turret"}
		{if not "rotate_turret"
			{play_sound "rotate_turret" 1}
			{set "rotate_turret" 1}
		}
	}
	{on ik end "turret"
		{delay 0.5 "rotate_turret"
			{stop_sound "rotate_turret"}
			{set "rotate_turret" 0}
		}
	}
}
(define "gun_mode_reloadtimer"
	{on fire "gun"
		{tags add "gun_reloading"}
		{delay %gun_reload
			{tags remove "gun_reloading"}
		}
	}
	{on fire "gun1_2"
		{tags add "gun_reloading"}
		{delay %gun1_2_reload
			{tags remove "gun_reloading"}
		}
	}
)
(define "com_mode"
	{on "commander_hatch"
	{if tagged "com_mode"
		{if tagged "hatch_mode_up"
			{tags remove "hatch_mode_up"}
			{tags add "hatch_mode_down"}
			{damage_report "hatch" "component/hatch_mode_down"}
			{if not tagged "commander_down"
				{tags add "commander_down"}
				{ani_play "open" -1 resume}
				{with_linked_entity "gunner2" {ani_play "into_hatch_common"}}
				{weapon_work "%mgun" 0}
			}
		else tagged "hatch_mode_down"
			{tags remove "hatch_mode_down"}
			{damage_report "hatch" "component/hatch_mode_active"}
			{if tagged "commander_down"
				{tags remove "commander_down"}
				{ani_play "open" +1 resume}
				{with_linked_entity "gunner2" {ani_play "into_hatch_common" -1}}
				{delay 1.2
					{if not tagged "commander_down"
						{with_linked_entity "gunner2" {ani_wind "%anm" end}}
						{weapon_work "%mgun" 1}
					}
				}
			}
		else
			{tags add "hatch_mode_up"}
			{damage_report "hatch" "component/hatch_mode_up"}
			{if tagged "commander_down"
				{tags remove "commander_down"}
				{with_linked_entity "gunner2" {ani_play "into_hatch_common" -1}}
				{delay 1.2
					{if not tagged "commander_down"
						{with_linked_entity "gunner2" {ani_wind "%anm" end}}
						{weapon_work "%mgun" 1}
					}
				}
			}
		}
	}
	}
	{on bullet_hit
	{if tagged "com_mode"
		{if rand 0.8
			{if not tagged "hatch_mode_up"
				{if not tagged "hatch_mode_down"
					{if not tagged "commander_down"
						{tags add "commander_down"}
						{with_linked_entity "gunner2" {ani_play "into_hatch_common"}}
						{weapon_work "%mgun" 0}
						{delay 1{weapon_work "%mgun" 0}}
						{delay 10
							{if not tagged "hatch_mode_down"
								{if tagged "commander_down"
									{tags remove "commander_down"}
									{with_linked_entity "gunner2" {ani_play "into_hatch_common" -1}}
									{delay 1.2
										{if not tagged "commander_down"
											{weapon_work "%mgun" 1}
											{with_linked_entity "gunner2" {ani_wind "%anm" end}}
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
	}
)
(define "smoke_launcher_3_sides"
	{on "smoke_launcher"
		;{spawn "smoke_launch_right1" "smoke_launcher_right" x}
		;{delay 0.2
		;	{spawn "smoke_launch_left1" "smoke_launcher_left" x}
		;	{delay 0.2
		;		{spawn "smoke_launch_right2" "smoke_launcher_right" x}
		;		{delay 0.2
		;			{spawn "smoke_launch_left2" "smoke_launcher_left" x}
		;			{delay 0.2
		;				{spawn "smoke_launch_right3" "smoke_launcher_right" x}
		;				{delay 0.2
		;					{spawn "smoke_launch_left3" "smoke_launcher_left" x}
		;				}
		;			}
		;		}
		;	}
		;}
		{damage_report "smoke_launcher" "Smoke launched"}
		{if tagged "smoke6_launched"
			{damage_report "smoke_launcher" "Smoke grenades empty"}
		else tagged "smoke5_launched"
			{tags add "smoke6_launched"}
			{tags remove "smoke5_launched"}
			{spawn "smoke_launch_left3" "smoke_launcher_left" x}
		else tagged "smoke4_launched"
			{tags add "smoke5_launched"}
			{tags remove "smoke4_launched"}
			{spawn "smoke_launch_right3" "smoke_launcher_right" x}
		else tagged "smoke3_launched"
			{tags add "smoke4_launched"}
			{tags remove "smoke3_launched"}
			{spawn "smoke_launch_left2" "smoke_launcher_left" x}
		else tagged "smoke2_launched"
			{tags add "smoke3_launched"}
			{tags remove "smoke2_launched"}
			{spawn "smoke_launch_right2" "smoke_launcher_right" x}
		else tagged "smoke1_launched"
			{tags add "smoke2_launched"}
			{tags remove "smoke1_launched"}
			{spawn "smoke_launch_left1" "smoke_launcher_left" x}
		else
			{tags add "smoke1_launched"}
			{spawn "smoke_launch_right1" "smoke_launcher_right" x}
		}
	}
)
(define "smoke_launch_center"
	{if rand 0.33
		{spawn "smoke_launch_ger_turret" "turret" x}
	else rand 0.33
		{spawn "smoke_launch_ger_turret1" "turret" x}
	else
		{spawn "smoke_launch_ger_turret2" "turret" x}
	}
)
(define "smoke_launch_center_hull"
	{if rand 0.33
		{spawn "smoke_launch_ger_hull" "body" x}
	else rand 0.33
		{spawn "smoke_launch_ger_hull1" "body" x}
	else
		{spawn "smoke_launch_ger_hull2" "body" x}
	}
)
(define "smoke_launcher_ger_turret"
	{on "smoke_launcher"
	  {if tagged "smoke_reloading"
		{damage_report "smoke_launcher" "Smoke reloading..."}
	  else
		{damage_report "smoke_launcher" "Smoke launched"}
		{if not tagged "smoke10_launched"
			("smoke_launch_center")
			{tags add "smoke_reloading"}
			{delay 3.5
				{tags remove "smoke_reloading"}
			}
		}
		{if tagged "smoke10_launched"
			{damage_report "smoke_launcher" "Smoke grenades empty"}
		else tagged "smoke9_launched"
			{tags add "smoke10_launched"}
			{tags remove "smoke9_launched"}
		else tagged "smoke8_launched"
			{tags add "smoke9_launched"}
			{tags remove "smoke8_launched"}
		else tagged "smoke7_launched"
			{tags add "smoke8_launched"}
			{tags remove "smoke7_launched"}
		else tagged "smoke6_launched"
			{tags add "smoke7_launched"}
			{tags remove "smoke6_launched"}
		else tagged "smoke5_launched"
			{tags add "smoke6_launched"}
			{tags remove "smoke5_launched"}
		else tagged "smoke4_launched"
			{tags add "smoke5_launched"}
			{tags remove "smoke4_launched"}
		else tagged "smoke3_launched"
			{tags add "smoke4_launched"}
			{tags remove "smoke3_launched"}
		else tagged "smoke2_launched"
			{tags add "smoke3_launched"}
			{tags remove "smoke2_launched"}
		else tagged "smoke1_launched"
			{tags add "smoke2_launched"}
			{tags remove "smoke1_launched"}
		else
			{tags add "smoke1_launched"}
		}
	  }
	}
)
(define "smoke_launcher_ger_hull"
	{on "smoke_launcher"
	  {if tagged "smoke_reloading"
		{damage_report "smoke_launcher" "Smoke reloading..."}
	  else
		{damage_report "smoke_launcher" "Smoke launched"}
		{if not tagged "smoke10_launched"
			("smoke_launch_center_hull")
			{tags add "smoke_reloading"}
			{delay 3.5
				{tags remove "smoke_reloading"}
			}
		}
		{if tagged "smoke10_launched"
			{damage_report "smoke_launcher" "Smoke grenades empty"}
		else tagged "smoke9_launched"
			{tags add "smoke10_launched"}
			{tags remove "smoke9_launched"}
		else tagged "smoke8_launched"
			{tags add "smoke9_launched"}
			{tags remove "smoke8_launched"}
		else tagged "smoke7_launched"
			{tags add "smoke8_launched"}
			{tags remove "smoke7_launched"}
		else tagged "smoke6_launched"
			{tags add "smoke7_launched"}
			{tags remove "smoke6_launched"}
		else tagged "smoke5_launched"
			{tags add "smoke6_launched"}
			{tags remove "smoke5_launched"}
		else tagged "smoke4_launched"
			{tags add "smoke5_launched"}
			{tags remove "smoke4_launched"}
		else tagged "smoke3_launched"
			{tags add "smoke4_launched"}
			{tags remove "smoke3_launched"}
		else tagged "smoke2_launched"
			{tags add "smoke3_launched"}
			{tags remove "smoke2_launched"}
		else tagged "smoke1_launched"
			{tags add "smoke2_launched"}
			{tags remove "smoke1_launched"}
		else
			{tags add "smoke1_launched"}
		}
	  }
	}
)
(define "smoke_launcher_usa_turret"
	{on "smoke_launcher"
	  {if tagged "smoke_reloading"
		{damage_report "smoke_launcher" "Smoke reloading..."}
	  else
		{damage_report "smoke_launcher" "Smoke launched"}
		{if not tagged "smoke12_launched"
			{spawn "smoke_launch_usa_turret" "turret" x}
			{tags add "smoke_reloading"}
			{delay 3
				{tags remove "smoke_reloading"}
			}
		}
		{if tagged "smoke12_launched"
			{damage_report "smoke_launcher" "Smoke grenades empty"}
		else tagged "smoke11_launched"
			{tags add "smoke12_launched"}
			{tags remove "smoke11_launched"}
		else tagged "smoke10_launched"
			{tags add "smoke11_launched"}
			{tags remove "smoke10_launched"}
		else tagged "smoke9_launched"
			{tags add "smoke10_launched"}
			{tags remove "smoke9_launched"}
		else tagged "smoke8_launched"
			{tags add "smoke9_launched"}
			{tags remove "smoke8_launched"}
		else tagged "smoke7_launched"
			{tags add "smoke8_launched"}
			{tags remove "smoke7_launched"}
		else tagged "smoke6_launched"
			{tags add "smoke7_launched"}
			{tags remove "smoke6_launched"}
		else tagged "smoke5_launched"
			{tags add "smoke6_launched"}
			{tags remove "smoke5_launched"}
		else tagged "smoke4_launched"
			{tags add "smoke5_launched"}
			{tags remove "smoke4_launched"}
		else tagged "smoke3_launched"
			{tags add "smoke4_launched"}
			{tags remove "smoke3_launched"}
		else tagged "smoke2_launched"
			{tags add "smoke3_launched"}
			{tags remove "smoke2_launched"}
		else tagged "smoke1_launched"
			{tags add "smoke2_launched"}
			{tags remove "smoke1_launched"}
		else
			{tags add "smoke1_launched"}
		}
	  }
	}
)
{"vehicle"
	{inflammation_time 20}
	{on spawn
		{add_view	"stop_signal"	"stop_signal"	"FXstop1"}
		{add_view	"stop_signal"	"stop_signal"	"FXstop2"}
		
		{add_view 	"light_plafond_dim"		"redlight"			"FXlight1"}
		{add_view 	"light_plafond_dim"		"redlight"			"FXlight2"}

		{add_view 	"headlight"		"light"			"headlightL"}
		{add_view 	"headlight"		"light"			"headlightR"}
		{add_view 	"light_vehicle"	"light"			"fxlight"}

		{if tagged "diesel_exhaust"
			{add_view	"exhaust_dark_big_startup_diesel"	"exhaust_start"	"FXsmoke1"}
			{add_view	"exhaust_dark_big_startup_diesel"	"exhaust_start"	"FXsmoke2"}
		else
			{add_view	"exhaust_dark_big_startup"	"exhaust_start"	"FXsmoke1"}
			{add_view	"exhaust_dark_big_startup"	"exhaust_start"	"FXsmoke2"}
		}

		{view hide "stop_signal"}
		{view hide "light"}
		{view hide "highlight"}

		{call "init_gun"}
		{call "add_movement_sound"}
		{call "update_moveable"}
		{call "update_lights"}
		{set "burn_fire" 0}
		{set "engine_on" 1}
		{delay 0.1
		(mod "mp"
			{if operatable
				{play_sound "idle" 1}
				{view start "exhaust2"}
				{set "engine_running" 1}
			}
		)
		}
	}
	{on "init_gun"
		{add_view	"flash_gun_big"		"flashbarrel3"	"Foresight3"}
		{add_view	"flash_gun_big"		"flashbarrel4"	"Foresight4"}
		{add_view	"flash_gun_big"		"flashbarrel5"	"Foresight5"}
		{add_view	"flash_gun_big"		"flashbarrel6"	"Foresight6"}
	}
	
	{on "stop_on"
		{ani_stop "start"}
		{ani_play "stop"}
		{view show "stop_signal"}
		{view start "stop_signal"}
		{delay 1
			{view hide "stop_signal"}
		}
	}
	{on "exhaust_on"
		;{play_sound "exhaust"}
		{view start "exhaust"}
	}
	{on "exhaust_off"
		{stop_sound "exhaust"}
		{view pause "exhaust"}
		{view start "exhaust2"}
	}
	
	{on turn on
		{call "stop_on"}
		{play_sound "exhaust"}
		{call "exhaust_on"}
	}
	{on turn off
		{call "exhaust_off"}
	}
	{on "burst_mode"
	}
	{on "smoke_launcher"
		{damage_report "smoke_launcher" "No smoke launcher"}
	}
	{on "gun_mode"
		{if tagged "gun_mode_unit"
			{if work "gun"
			    {if not tagged "gun_reloading"
				{weapon_work "gun" 0}
				{weapon_work "gun1_2" 0}
				{if "gun_mode"
					{damage_report "gun_mode" "Gun changing to direct-fire mode.."}
					{set "gun_mode" 0}
				else
					{damage_report "gun_mode" "Gun changing to indirect-fire mode.."}
					{set "gun_mode" 1}
				}
				{if not tagged "gun_changing"
					{tags add "gun_changing"}
					{damage_report "gun_changing" "5 secounds, weapon disabled"}
					{delay 5
						{tags remove "gun_changing"}
						{if work "gun"
							{if "gun_mode"
								{damage_report "gun_mode" "Gun changed to indirect-fire mode"}
								{weapon_work "gun" 0}
								{weapon_work "gun1_2" 1}
							else
								{damage_report "gun_mode" "Gun changed to direct-fire mode"}
								{weapon_work "gun" 1}
								{weapon_work "gun1_2" 0}
							}
						}
					}
				}
			    else
				{damage_report "gun_mode" "Can't change while reloading"}
			    }
			else
				{damage_report "gun_mode" "Main gun is broken"}
			}
		else
			{damage_report "gun_mode" "Direct/Indirect not available for this unit"}
		}
		{if tagged "gun_mode_unit_art"
			{if work "gun"
			    {if not tagged "gun_reloading"
				{weapon_work "gun" 0}
				{weapon_work "gun1_2" 0}
				{if "gun_mode"
					{damage_report "gun_mode" "Gun changing to indirect-fire mode.."}
					{set "gun_mode" 0}
				else
					{damage_report "gun_mode" "Gun changing to direct-fire mode.."}
					{set "gun_mode" 1}
				}
				{if not tagged "gun_changing"
					{tags add "gun_changing"}
					{damage_report "gun_changing" "5 secounds, weapon disabled"}
					{delay 5
						{tags remove "gun_changing"}
						{if work "gun"
							{if "gun_mode"
								{damage_report "gun_mode" "Gun changed to direct-fire mode"}
								{weapon_work "gun" 0}
								{weapon_work "gun1_2" 1}
							else
								{damage_report "gun_mode" "Gun changed to indirect-fire mode"}
								{weapon_work "gun" 1}
								{weapon_work "gun1_2" 0}
							}
						}
					}
				}
			    else
				{damage_report "gun_mode" "Can't change while reloading"}
			    }
			else
				{damage_report "gun_mode" "Main gun is broken"}
			}
		else not tagged "gun_mode_unit"
			{damage_report "gun_mode" "Direct/Indirect not available for this unit"}
		}
	}
	{on "enginetoggle"
		{if "transmission_destroyed"
			{damage_report "internal" "<c(FF1F00)>Transmission is destroyed<c(FFFFFF)>"}
		else not work "transmission"
			{damage_report "internal" "Transmission is broken"}
		}
		;{if stuff_filled "fuel" 0
		;	{call "explosion"}
		;}
		{if work "engine"
		{if work "hull"
		{if work "transmission"
			{if "engine_on"
				;{if not stuff_filled "fuel" 0
					{set "engine_on" 0}
					{stop_sound "idle"}
					{stop_sound "move"}
					{view pause "exhaust2"}
					{play_sound "engine_end"}
					{chassis_work 0}
				;}
			else
				{set "engine_on" 1}
				{delay 1.5
					{if work "engine"
					{if work "hull"
					{if work "transmission"
						{play_sound "engine_end"}
						{view start "exhaust_start"}
						{delay 0.5
							{view pause "exhaust_start"}
						}
						{if not stuff_filled "fuel" 0
							{delay 1.5
								{if work "engine"
									{if "engine_on"
										{if work "transmission"
											{stop_sound "engine_end"}
											{play_sound "exhaust"}
											{view start "exhaust_start"}
											{call "engine_idle"}
										}
									}
								}
							}
						else
							{delay 1 {stop_sound "engine_end"}}
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
	{on "engine_idle"
		{delay 2
			;{if not stuff_filled "fuel" 0
				{if work "engine"
					{if work "transmission"
						{if work "trackleft" {if work "trackright" {chassis_work 1}}}
						{view pause "exhaust_start"}
						{play_sound "idle" 1}
						{view start "exhaust2"}
						{set "engine_running" 1}
					}
				}
			;}
		}
	}
	{on move on
		{stop_sound "idle"}
		{stop_sound "move_end"}
		{play_sound "move" 1}
		{play_sound "exhaust"}
		{call "exhaust_on"}
		{ani_stop "stop"}
		{ani_play "start"}
		{view pause "exhaust2"}
		;{if not tagged "heavy_tower"
		;	{damage_report "internal" "<c(FF1F00)>move detect<c(FFFFFF)>"}
		;	{with_linked_entity "tow_link" {delay 0.5{call "update_towability"}}}
		;}
		;{if linked ;CAUSES CRASH WHILE IN DIRECT CONTROL
		;	{with_effector 
		;		{if "wheel_teared"
		;			{delay 0.1{impulse up 0.3}}
		;		}
		;	}
		;}
	}
	{on move off
		{stop_sound "move"}
		{play_sound "move_end"}
		{call "exhaust_off"}
	}
	{on accelerate on
		{call "exhaust_on"}
	}
	{on accelerate off
		{call "exhaust_off"}
	}
	{on brake on
		{call "stop_on"}
	}
	{on engine on
		{kill_delay "engine_stopped"}
		{kill_delay "engine_steam_stopped"}
		{stop_sound "engine_end"}
		{play_sound "engine" 1}
		{view start "engine_steam"}
	}
	{on engine off
		{if not "engine_on"
			{stop_sound "engine"}
			{view pause "exhaust"}
			{view pause "exhaust2"}
		}
		{if "engine_on"
			{delay 1.5 "engine_stopped"
				{stop_sound "engine"}
				;{if not stuff_filled "fuel" 0
					{if work "engine"
						{if work "body"
							{if "engine_on"
								{if work "transmission"
									{play_sound "idle" 1}
									{if not "engine_running"
										{set "engine_running" 1}
									}
								}
							}
						}
					}
				;}
			}
			{delay 0.5 "engine_steam_stopped"
				;{if not stuff_filled "fuel" 0
					{if work "engine"
						{if work "body"
							{if "engine_on"
								{if work "transmission"
									{view start "exhaust2"}
								}
							}
						}
					}
				;}
			}
		}
	}

	{on "engine stop view"
		{view pause "exhaust"}
		{stop_sound "idle"}
		{stop_sound "engine"}
		{stop_sound "transmission_break"}
		{view pause "exhaust2"}
	}
	{on "engine fullstop"
		{view pause "exhaust"}
		{stop_sound "transmission_break"}
		{set "engine_running" 0}
		{delay 0 "engine_stopped"
			{stop_sound "idle"}
			{play_sound "engine_end"}
		}
		{delay 0 "engine_steam_stopped"
			{view pause "exhaust2"}
		}
	}
	
	{on "engine destroyed"
		{view pause "exhaust"}
		{set "engine_running" 0}
		{delay 1 "engine_stopped"
			{stop_sound "idle"}
			{play_sound "engine_end"}
			{view pause "exhaust2"}
		}
		{delay 1 "engine_steam_stopped"
			{view pause "exhaust2"}
		}
	}

	{on break
		{if component "body"
			{call "stat_break"}
			{if "engine_on"
				{call "engine stop view"}
			}
		else component "turret"
;			{stat_notify break}
		}
		{if component "engine"
			{call "engine stop view"}
		}
		{call "update_moveable"}
		{call "break_light"}
		;{call "engine fullstop"}
		;{call "engine destroyed"}
	}
	{on repair
		{call "update_moveable"}
		{call "repair_light"}
	}

	{on "break_light"
		{if component "engine"
			{bone cut "headlightL"}
			{bone cut "headlightR"}
			{bone cut "fxlight"}
		}
	}
	{on "repair_light"
		{if component "engine"}
	}
	{on "lights_on"
		{view start "light"}
		{view show "light"}
	}
	{on "lights_off"
		{view stop "light"}
		{view hide "light"}
	}
	{on "update_lights"
		{if not sunlight
			{if operatable
				{call "lights_on"}
			else
				{call "lights_off"}
			}
		}
	}
	
; ---------- Snowman redlights -----------

	{on "redlights_on"
		{view start "redlight"}
		{view show "redlight"}
	}
	{on "redlights_off"
		{view stop "redlight"}
		{view hide "redlight"}
	}
	{on "update_redlights"
		{if operatable
			{call "redlights_on"}
		else
			{call "redlights_off"}
		}
	}
; -----------------------------------------
	
	{on operatable on
		{if "internal_damage" {crew_emit}}
		{call "update_lights"}
	}
	{on operatable off
		{call "update_lights"}
	}

	{on "link_weapon"
		{if name "mgun"
			{add_view "flash_gun_big"	"flashbarrel3"	"Foresight3"}
			{add_view "shell_mgun"		"shell"			"fxshell"}
		else
			{view hide	"flashbarrel3"}
			{view pause	"flashbarrel3"}
			{view pause "shell"}
		}
	}
(define "burst_stop"
	{if not tagged "burst_stop_%mgun"
		{tags add "burst_stop_%mgun"}
		{delay 0.6 0.15
			{weapon_work "%mgun" 0}
			{delay 0.7 0.1
				{weapon_work "%mgun" 1}
				{tags remove "burst_stop_%mgun"}
			}
		}
	}
)
(define "burst_stop_short"
	{if not tagged "burst_stop_%mgun"
		{tags add "burst_stop_%mgun"}
		{delay 0.3 0.1
			{weapon_work "%mgun" 0}
			{delay 0.7 0.1
				{if not tagged "commander_down"{weapon_work "%mgun" 1}}
				{tags remove "burst_stop_%mgun"}
			}
		}
	}
)

	{on "burst_stop_mgun_short"
		("burst_stop_short" mgun(mgun))
	}
	{on "burst_stop_mgun"
		("burst_stop" mgun(mgun))
	}
	{on "burst_stop_mgun1"
		("burst_stop" mgun(mgun1))
	}
	{on "burst_stop_mgun2"
		("burst_stop" mgun(mgun2))
	}
	{on "burst_stop_mgun3"
		("burst_stop" mgun(mgun3))
	}
	{on fire "mgun"
		{view show  "flashbarrel3"}
		{view start "flashbarrel3"}
		{ani_play "fire_mgun"}
		{view start "shell"}
		{delay 0.1 "shell"
			{view pause "shell"}
		}
		{delay 0.1 "fire"
			{view hide	"flashbarrel3"}
			{view pause	"flashbarrel3"}
			{view pause	"shell"}
		}
		{if not tagged "full_auto_mode"
			{if tagged "com_mode"
				{call "burst_stop_mgun_short"}
			else
				{call "burst_stop_mgun"}
			}
		}
		
	}
	{on fire "mgun1"
		{view show  "flashbarrel4"}
		{view start "flashbarrel4"}
		{delay 0.1 "fire"
			{view hide	"flashbarrel4"}
			{view pause	"flashbarrel4"}
			{view pause	"shell"}
		}
		{if not tagged "full_auto_mode"
			{call "burst_stop_mgun1"}
		}
	}
	{on fire "mgun2"
		{view show  "flashbarrel5"}
		{view start "flashbarrel5"}
		{delay 0.1 "fire"
			{view hide	"flashbarrel5"}
			{view pause	"flashbarrel5"}
			{view pause	"shell"}
		}
		{if tagged "coax_burst_mode"
			{call "burst_stop_mgun2"}
		}
	}
	{on fire "mgun3"
		{view show  "flashbarrel6"}
		{view start "flashbarrel6"}
		{delay 0.1 "fire"
			{view hide	"flashbarrel6"}
			{view pause	"flashbarrel6"}
			{view pause	"shell"}
		}
		{if not tagged "full_auto_mode"
			{call "burst_stop_mgun3"}
		}
	}
	{on contact
		{if volume "sticky"
			{if effector "grenade"
				{if not effector "contact"
					{call "grenade_stick"}
				}
			}
		}
		{if not impregnable
			{if effector_velocity 3
				{if effector "airborne"
					{call "contact_airborne"}
				else effector "piece_big_stone"
					{component break}
				}
			}
		}
		;{if effector "cannon"
		;	{if effector "wheel_teared"
		;		{delay 0.1 {unlink_trailer}}
		;	}
		;}
	}
	{on "grenade_stick"
		{with_effector
			{link_grenade_to_nearest_human}
		}
	}
	{on "contact_airborne"
		{if not "contact_airborne_first"
			{set "contact_airborne_first" 1}
			{component break}
			{delay 0.1
				{set "contact_airborne_second" 1}
				{delay 0.1
					{set "contact_airborne_first" 0}
					{set "contact_airborne_second" 0}
				}
			}
		else "contact_airborne_second"
			{call "explosion"}
		}
	}

	{on "update_moveable"
		{if work "body"
			{view stop "smoke4"}
		else
			;{view start "smoke4"}
		}
		{if work "engine"
			{call "check_work_mover"}
		else
			{chassis_work 0}
		}
	}
	{on "check_work_mover"
		{if work "mover"
			{if "engine_on"
				{chassis_work 1}
			}
		else
			{chassis_work 0}
		}
	}

	{on "explosion"
		{if not able "exploded"
			{tags remove "ammo_overload"}
			{tags remove "ammo_normal_load"}
			{set "internal_damage" 1}
			{damage_report "body" "component/empty"}
			{damage_report "engine" "component/empty"}
			{damage_report "trackright" "component/empty"}
			{damage_report "trackleft" "component/empty"}
			{damage_report "turret" "component/empty"}
			{damage_report "gun" "component/empty"}
			{able "exploded" 1}
			{call "_explosion"}
			{stop_sound "idle"}
		}
	}
	(define "ammunition_loads2"
		{if explosive_amount (* %ammo 2.00)	;>200%
			{tags add "ammo_overload"}{tags add "instant_explosion"}
		else explosive_amount (* %ammo 1.75)	;>175%
			{tags add "ammo_overload"}{tags add "instant_explosion"}
		else explosive_amount (* %ammo 1.50)	;>150%
			{tags add "ammo_overload"}{tags add "instant_explosion"}
		else explosive_amount (* %ammo 1.25)	;>125%
			{tags add "ammo_overload"}
		else explosive_amount %ammo		;>100%
			{tags add "ammo_overload"}
		else explosive_amount (* %ammo 0.9)	;>90%
			{if rand 0.5{tags add "ammo_overload"}
			else{tags add "ammo_normal_load"}}
		else explosive_amount (* %ammo 0.75)	;>75%
			{tags add "ammo_normal_load"}
		else explosive_amount (* %ammo 0.5)	;>50%
			{tags add "ammo_normal_load"}
		else explosive_amount (* %ammo 0.25)	;>25%
		}
	)
	{on "_explosion"
		{if "light_tank"
			("ammunition_loads2" ammo(250))
		else "medium_tank"
			("ammunition_loads2" ammo(300))
		else "heavy_tank"
			("ammunition_loads2" ammo(360))
		else not "train"
			("ammunition_loads2" ammo(250))
		}
;		{call "__explosion"}
;		{call "stat_break"}
		{call "break_all"}
		{stop_sound "transmission_break"}
		{stop_sound "move"}
		{stop_sound "move_end"}
		{stop_sound "engine"}
		{stop_sound "engine_end"}
		{stop_sound "exhaust"}
		{able "exploded" 1}
		{call "engine fullstop"}
		{view stop "fire1"}
		{view stop "fire2"}
		{tags add "destroyed"}
		{kick_entity_manager}
		{call "explosion_sound"}

		{if not terrain_fx "bridge"
			{if not under_water
				{call "spawn_shellhole"}
			}
		}

		{delay_ex 0
			{set "no_burn_volumes" 1}
			{set_skeleton "_xx" sync}
			{ani_play "death"}
			{call "cut_parts"}
		}
	}
	{on "destroy_energy_overload"
		{call "break_all"}
		{stop_sound "move"}
		{stop_sound "move_end"}
		{stop_sound "engine"}
		{stop_sound "engine_end"}
		{stop_sound "exhaust"}
		{call "engine fullstop"}
		{view stop "fire1"}
		{view stop "fire2"}
		{tags add "destroyed"}
		{kick_entity_manager}
		{if "crush"
			{start_sound "crush/medium/vehicle"}
		else
			{start_sound "crush/big/vehicle"}
		}
		{if not terrain_fx "bridge"
			{if not under_water
				{call "spawn_shellhole"}
			}
		}
		{delay_ex 0
			{set "no_burn_volumes" 1}
			{set_skeleton "_xx" sync}
			{ani_play "death"}
			{call "cut_parts"}
		}
	}
	{on "explosion_blastwave"
		{blastwave c4 3 r0 3 r1 8}
	}
	{on "explosion_sound"
		{if "crush"
			{start_sound "crush/medium/vehicle"}
		else
			{call "explosion_blastwave"}
			{start_sound "crush/big/vehicle"}
		}
	}

	{on "break_all"
		{kill_crew}
		{drop_orders}
		{components destroy}
		{reset_manual_control}
		{able select 0}
		{able repaired 0}
		{unlink_trailer}
		{clear_inventory}
		{call "engine fullstop"}
	}
	
	{on "kill_crew"
		{kill_crew}
	}
	
	{on "_burn"
        {if not tagged "burned"
			{if not able "exploded"
				{damage_report "engine" "component/burn_engine"}
            	{add_view		"smoke_dead_norm"	"burn_fire"		"FXfire1"}
				{view start "burn_fire"}
				{burn time 12}
				{tags add "burned"}
				{add_view "smoke_black" "burn_fire" "FXfire1"}
				{play_sound "flame" 1}
				{view start "burn_fire"}
				{set "burn_fire" 1}
                {call "stat_break"}
				{delay 4 2
                	{call "check_burn_emit"}
                }
                ;{explosive 1}
				{delay 10 2
						{call "mp_destroy"}
						{start_sound "crush/medium/metal"}
				}
				{delay 10 2
					{components "engine" break}
					{start_sound "crush/medium/metal"}
                    	{delay 5 4
						{call "mp_destroy"}
					}
				}
				{delay 12
					{explosive 0}
					{view stop "burn_fire"}
					{stop_sound "flame"}
					{set "burn_fire" 0}
					{call "check_burn_emit"}
					{if rand 0.5
						{call "explosion"}
					else
						{able "burning" 0}
					}
				}
			}
    	}
	}

	{on "burn_emit"
		{if not able "burning"
			{able "burning" 1}
			{set_heater}
            {reset_manual_control}
		}
	}

	{on "burn_volume"
		{log "burn_volume"}
		{if not burned
			{if volume "engine"
				{if rand 0.3
					{log "burn_engine"}
					{call "fuel_fire"}
				}
			else volume "engine1"
				{if rand 0.3
					{log "burn_engine"}				
					{call "fuel_fire"}
				}
			else
				{burn volume fx "smoke_dead_small" time 5 1 fake even_law}
			}
		}
	}
	{on "stat_break"	
		{if not tagged "body_break"
			{if not "notified_broken"
				{set "notified_broken" 1}
				{if not "broken"
					{set "broken" 1}
					{if "burn_fire"
						{stat_notify break burned}
				else
						{stat_notify break}
					}
				}
			}
		}		
	}

	{on "leave_unit"
		{if work "body"
			{if not tagged "abandoned"
				{unlink_trailer}
				{reset_manual_control}
				
				{if not tagged "emit_label"		
					{damage_report "body" "component/leave_unit"}
					{tags add "emit_label"}
					{crew_emit}
				}
				{delay 1		
					{crew_emit}
				}
				{delay 2		
					{crew_emit}
				}
				{delay 3		
					{crew_emit}
				}
				;{call "burn_emit"}
				
				{delay 4	{if operatable {tags remove "emit_label"}}}
				{delay 6	{if operatable {tags remove "emit_label"}}}
				{delay 8	{if operatable {tags remove "emit_label"}}}
				{delay 10	{if operatable {tags remove "emit_label"}}}
				{delay 12	{if operatable {tags remove "emit_label"}}}
				{delay 14	{if operatable {tags remove "emit_label"}}}
	
				{delay 15
					{if not operatable
						{tags add "abandoned"}
						{set "broken" 1}
						{able select 0}
						{able repaired 0}
						{explosive 1}
						{player -1}
						{stat_notify leave}
						{kick_entity_manager}
						{explosive 1}
						{damage_report "body" "component/empty"}
						{damage_report "trackright" "component/empty"}
						{damage_report "trackleft" "component/empty"}
						{damage_report "gun" "component/empty"}
						{damage_report "turret" "component/empty"}
						{damage_report "engine" "component/empty"}
						
						{delay 3 1					
							{explosive 0}
							{tags add "destroyed"}
							{call "explosion"}
						}
					}
				}			
			}
		}
	}

	(define "terrain_fx"
		{on terrain_fx %0 enter
			{view start "on_%1"}
			{view start "on_%1_time_short"}
			{delay 0.1
				{view pause "on_%1_time_short"}
			}
		}
		{on terrain_fx %0 leave
			{view pause "on_%1"}
		}
	)
	("terrain_fx" args "ground"			ground)
	("terrain_fx" args "sand"			sand)
	("terrain_fx" args "grass" 			grass)
	("terrain_fx" args "water" 			water)
	("terrain_fx" args "shallow_water" 	puddle)
	("terrain_fx" args "puddle"			puddle)
	("terrain_fx" args "mud"			mud)
	("terrain_fx" args "country_road"	country_road)
	("terrain_fx" args "snow"			snow)

	{on "explosion_delete"
		{set "delete_parts" 1}
		{call "explosion"}
		{delay 20
			{hide 3}
		}
	}
}

{"emit_on_sink vehicle"
	{on operatable on
		{delay 0.3 "start_check_sinking"
			{call "check_sinking"}
		}
	}
	{on operatable off
		{kill_delay "start_check_sinking"}
		{kill_delay "check_sinking"}
	}
	(define "sink_terrain"
		{on terrain_pp "%0" enter
			{reset_manual_control}
			{able "sinking" 1}
		}
		{on terrain_pp "%0" leave
			{reset_manual_control}
;			{able "sinking" 0} ;do not use this because of leaving terrain on stop
		}
	)
;	("sink_terrain" args water)
	("sink_terrain" args swamp)
	{on "check_sinking"
		{call "check_water_level"}
		{if able "sinking"
			{reset_manual_control}
		}
		{delay 0.5 "check_sinking"
			{call "check_sinking"}
		}
	}
	{on "check_water_level"
		{if water_level 1.2
			{able "sinking" 1}
		}
	}
	{on "crew_emit"
		{crew_emit}
	}
}

{"with_gun vehicle"
	{on spawn
		{call "update_gun"}
	}
	{on break
		{if component "gun"
			{call "update_gun"}
                        {tags add "gun_brake"}
		}
	}
	{on repair
		{if component "gun"
			{call "update_gun"}
                        {tags remove "gun_brake"}
		}
	}
	{on "update_gun"
		{if work "gun"
			{weapon_work "gun" 1}
		 else
			{weapon_work "gun" 0}
		}
	}
}

{"open_with_land"
	{on "open"
		{ani_stop "drift"}
		{ani_play "dooropen" callback}
		{land on}
		{chassis_work 0}
		{physics_work 0}
		{area enable}
	}
	{on "close"
		{ani_play "dooropen" -1 callback}
		{ani_play "drift" loop}
		{land off}
		{chassis_work 1}
		{physics_work 1}
		{area disable}
	}
	{on animation_end "dooropen"
		{update_visibility_patch}
	}
}

{"open_without_land"
	{on "open"
		{ani_stop "drift"}
		{ani_play "dooropen" callback}
	}
	{on "close"
		{ani_play "dooropen" -1 callback}
		{ani_play "drift" loop}
	}
	{on animation_end "dooropen"
		{update_visibility_patch}
	}
}

{"amphibia vehicle"
	{on spawn
		{add_view	"wash_ship_stop"	"on_stead"	"FX_bulb_small_center1"}
		{add_view	"wash_ship_stop"	"on_stead"	"FX_bulb_small_center2"}
		{add_view	"wash_ship_stop"	"on_stead"	"FX_bulb_small_center3"}
		{add_view	"wash_ship_stop"	"on_stead"	"FX_bulb_small_center4"}
		{add_view	"wash_ship_stop"	"on_stead"	"FX_bulb_small_center5"}
		{add_view	"wash_ship_stop"	"on_stead"	"FX_bulb_small_center6"}
		{add_view	"wash_ship_stop"	"on_stead"	"FX_bulb_small_center7"}
		{add_view	"wash_ship_stop"	"on_stead"	"FX_bulb_small_center8"}
		{add_view	"wash_ship_stop"	"on_stead"	"FX_bulb_small_center9"}
		{add_view	"wash_ship_stop"	"on_stead"	"FX_bulb_small_center10"}
		{add_view	"wash_ship_stop"	"on_stead"	"FX_bulb_norm_front1"}
		{add_view	"wash_ship_stop"	"on_stead"	"FX_bulb_norm_front2"}
		{add_view	"wash_ship_stop"	"on_stead"	"FX_bulb_norm_engine1"}
		{add_view	"wash_ship_motion"	"on_move"	"FX_bulb_small_center1"}
		{add_view	"wash_ship_motion"	"on_move"	"FX_bulb_small_center2"}
		{add_view	"wash_ship_motion"	"on_move"	"FX_bulb_small_center3"}
		{add_view	"wash_ship_motion"	"on_move"	"FX_bulb_small_center4"}
		{add_view	"wash_ship_motion"	"on_move"	"FX_bulb_small_center5"}
		{add_view	"wash_ship_motion"	"on_move"	"FX_bulb_small_center6"}
		{add_view	"wash_ship_motion"	"on_move"	"FX_bulb_small_center7"}
		{add_view	"wash_ship_motion"	"on_move"	"FX_bulb_small_center8"}
		{add_view	"wash_ship_motion"	"on_move"	"FX_bulb_small_center9"}
		{add_view	"wash_ship_motion"	"on_move"	"FX_bulb_small_center10"}
		{add_view	"wash_ship_motion"	"on_move"	"FX_bulb_small_back1"}
		{add_view	"wash_ship_motion"	"on_move"	"FX_bulb_small_back2"}
		{add_view	"wash_front_small"	"on_move"	"FX_bulb_small_front1"}
		{add_view	"wash_front_small"	"on_move"	"FX_bulb_small_front2"}
		{add_view	"wash_front_norm"	"on_move"	"FX_bulb_norm_front1"}
		{add_view	"wash_front_norm"	"on_move"	"FX_bulb_norm_front2"}
		{add_view	"wash_ship_motion_norm"	"on_move"	"FX_bulb_norm_front1"}
		{add_view	"wash_ship_motion_norm"	"on_move"	"FX_bulb_norm_front2"}
		{add_view	"wash_engine_small"	"on_move"	"FX_bulb_small_engine1"}
		{add_view	"wash_engine_norm"	"on_move"	"FX_bulb_norm_engine1"}
	}
	{on terrain_pp "deep_water" enter
		{set "in_water" 1}
		{call "update_bulbs"}
	}
	{on terrain_pp "water" enter
		{set "in_water" 1}
		{call "update_bulbs"}
	}
	{on terrain_pp "shallow_water" enter
		{set "in_water" 1}
		{call "update_bulbs"}
	}
	{on terrain_pp "shallow_water" leave
		{set "in_water" 0}
		{call "update_bulbs"}
	}
	{on "update_bulbs"
		{if "in_water"
			{if not velocity 0.001
				{view start "on_stead"}
				{view pause "on_move"}
			else
				{view start "on_move"}
				{view pause "on_stead"}
			}
		else
			{view pause "on_stead"}
			{view pause "on_move"}
		}
	}
	{on "check_water_level" overload}
	{on move on
		{call "update_bulbs"}
	}
	{on move off
		{call "update_bulbs"}
	}
}

{"gun_mode_change"
	{on spawn
		{if work "gun"
			{if "gun_mode"
				{weapon_work "gun" 0}
				{weapon_work "gun1_2" 1}
			else
				{weapon_work "gun" 1}
				{weapon_work "gun1_2" 0}
			}
		}
		{tags add "gun_mode_unit"}
	}
	{on repair
		{if component "gun"
			{if "gun_mode"
				{weapon_work "gun" 0}
				{weapon_work "gun1_2" 1}
			else
				{weapon_work "gun" 1}
				{weapon_work "gun1_2" 0}
			}
		}
	}
	{on break
		{if component "gun"
			{weapon_work "gun1_2" 0}
		}
	}
}

{"gun_mode_change_art"
	{on spawn
		{if work "gun"
			{if "gun_mode"
				{weapon_work "gun" 0}
				{weapon_work "gun1_2" 1}
			else
				{weapon_work "gun" 1}
				{weapon_work "gun1_2" 0}
			}
		}
		;{set "gun_mode_unit_art" 1}
		{tags add "gun_mode_unit_art"}
	}
	{on repair
		{if component "gun"
			{if "gun_mode"
				{weapon_work "gun" 0}
				{weapon_work "gun1_2" 1}
			else
				{weapon_work "gun" 1}
				{weapon_work "gun1_2" 0}
			}
		}
	}
	{on break
		{if component "gun"
			{weapon_work "gun1_2" 0}
		}
	}
}
{"switch_mgun_coax" ;if the unit has coax or main MG named "mgun" instead of "mgun2"
	{on "burst_mode"
		{if tagged "full_auto_mode_coax"
			{tags remove "full_auto_mode_coax"}
			{damage_report "mgun" "Unit changed to burst mode"}
		else
			{tags add "full_auto_mode_coax"}
			{damage_report "mgun" "Unit changed to full auto mode"}
		}
	}
}
{"switch_mgun_special" ;if the unit has coax or main MG named "mgun" instead of "mgun2" and main gun is automatic but not zenite
	{on "burst_mode"
		{if tagged "full_auto_mode_coax"
			{tags remove "full_auto_mode_coax"}
			{damage_report "mgun" "Unit changed to burst mode"}
		else
			{tags add "full_auto_mode_coax"}
			{damage_report "mgun" "Unit changed to full auto mode"}
		}
	}
	{on fire "gun"
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
{"switch_mgun" ;if the unit has MG named "mgun2" which is not coax, usually halftracks with many machineguns, works for units with just 1 MG aswell and autocannon units
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
}
{"switch_cannon" ;if the unit has single cannon
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
{"ace_camo"	
	{on spawn
		{if not tagged "texmod_set"
			{if tex_mod "1"
				;{tags add "texmod_set"}
				;{delay 0.1
				;	{tex_mod "ace"}
				;}
			else
				{tags add "texmod_set"}
				{delay 0.1
					{tex_mod "ace"}
				}
			}
		}
	}
}
{"vehicle_camo_2var2"	;2 camo, 2 total variation with base 2 skin
	{on spawn
		{if not tagged "texmod_set"
			{if tex_mod "2"
				{tags add "texmod_set"}
				{if rand 0.5
					{delay 0.1
						{tex_mod "2a"}
					}
				}
			}
		}
	}
}
{"vehicle_camo_2var3"	;2 camo, 3 total variation with base 2 skin
	{on spawn
		{if not tagged "texmod_set"
			{if tex_mod "2"
				{tags add "texmod_set"}
				{if rand 0.33
					{delay 0.1
						{tex_mod "2a"}
					}
				else rand 0.33
					{delay 0.1
						{tex_mod "2b"}
					}
				}
			}
		}
	}
}