{"mine"
	{inflammation_time 3}
	{on spawn
		{volumes "body" disable all}
		{volumes "body1" disable all}
		{add_view "mined_view_own"		"mined_own"		"mined_view"}
		{add_view "mined_view_enemy"	"mined_enemy"	"mined_view"}
		{add_view "mined_view_defused"	"defused"		"mined_view"}
		{call "change_state"}
	}
	{on "_explosion"
		{volumes "body1" disable blast}
		{volumes "body" disable blast}
		{stuff_detonate}
	}
	{on "explosion"
		{if mined
			{call "_explosion"}
		}
	}
	{on "change_state"
		{if mined
			{tags add "mine_planted"}
			{volumes "body1" disable all}
			{volumes "body" enable select touch contact contact_ground blast}
		 else
			{tags remove "mine_planted"}
			{volumes "body" disable all}
			{volumes "body1" enable select touch contact contact_ground blast}
		}
	}
}

{"kamikaze_bomb"
	{on break_armor
		{call "explosion"}
	}
	{on blast_hit
		{if min_energy 0.5
			{call "explosion"}
		}
	}
	{on bullet_hit
		{call "explosion"}
	}
	{on "explosion"
		{if not "explosioned"
			{set "explosioned" 1}
			{blastwave c4 25 r0 4 r1 6 offset 0 0 20}
			{blastwave c4 1 r0 10 r1 15 offset 0 0 20}
			{spawn "ex_bomb_big"}
			{stuff_detonate}
			{delete}
		}
	}
}

{"mine_antipersonnel"
	{on contact
		{if mine_effector "human"
			{call "explosion"}
		else mine_effector "vehicle"
			{call "explosion"}
		else mine_effector "animal"
			{call "explosion"}
		}
	}
	{on blast_hit
		{if min_energy 1.5
			{if not stuff "mine"
				{stuff_detonate}
			}
		}	
	}
}

{"mine_antitank"
	{on blast_hit
		{if min_energy 2.5
			{if not stuff "mine"
				{stuff_detonate}
			}
		}				
	}
	{on contact
		{if mine_effector "mine_exploder"
			{delay 0
				{call "explosion"}
			}
		else mine_effector "vehicle"
			{if mined
				{volumes disable contact}
				{delay 0.1
					{call "explosion"}
				}
			}
		}
	}
}

{"dynamite"
	{on "undermine"
		{tags add "fuse"}
		{add_view "flash_fuse_small" "fire" "fire"}
;		{add_view "dynamite_p" "fire" "fire"}
		{view start "fire"}
		{ani_play "fire" 0.06}
		{delay 1
			{explosive 1}
		}
		{volumes disable touch select}
		{delay 8
			{call "explosion"}
		}
	}
	{on "onThrow"
		{if stuff_activated
			{tags add "fuse"}
			{add_view "flash_fuse_small" "fire" "fire"}
;			{add_view "dynamite_p" "fire" "fire"}
			{view start "fire"}
			{ani_play "fire" 0.06}
			{volumes disable touch select}
		}
	}
	{on blast
		{if min_energy 0.25
			{stuff_detonate}
		}	
	}
	{on "explosion"
		{stuff_detonate}
	}
}

{"rp3_rocket_dropping"
	{on spawn
		;{link_sound "sound" "weapon/shot/shellheavy_incoming"}
		;{play_sound "sound"}
	}
	{on "explosion"
		;{blastwave c4 20 r0 0.5 r1 0.5 offset 0 0 1}
		{blastwave c4 10 r0 1 r1 2.5 offset 0 0 1}
		{blastwave c4 1.5 r0 8 r1 16 offset 0 0 10}
		{delete}
	}
	{on ground_hit
		{call "explosion"}
		{if terrain_fx "snow"
			{spawn "ex_fg_big_w"}
		else
			{spawn "ex_fg_big"}
		}
      		{spawn "crater_big" terrain_texmod}
	}
	{on contact
		{spawn "ex_stone_hit_br_big"}
		{call "explosion"}
	}
}
{"240_shell_dropping"
	{on spawn
		{link_sound "sound" "weapon/shot/shellheavy_incoming"}
		{play_sound "sound"}
	}
	{on "explosion"
		{blastwave c4 34 r0 2.5 r1 6.8 offset 0 0 10}
		{blastwave c4 14.5 r0 10.2 r1 17 offset 0 0 10}
		{blastwave c4 1.5 r0 26 r1 37 offset 0 0 10}
		{blastwave c4 0.1 r0 50 r1 50 offset 0 0 10}
		{delete}
	}
	{on ground_hit
		{call "explosion"}
		{if terrain_fx "snow"
			{spawn "ex_fg_maximum_w"}
		else
			{spawn "ex_fg_maximum"}
		}
      		{spawn "crater_big" terrain_texmod}
	}
	{on contact
		{spawn "ex_stone_hit_br_big"}
		{call "explosion"}
	}
}
{"155_shell_dropping"
	{on spawn
		{link_sound "sound" "weapon/shot/artillery"}
		{play_sound "sound"}
	}
	{on "explosion"
		{blastwave c4 14 r0 1 r1 2 offset 0 0 10}
		{blastwave c4 2.8 r0 5.5 r1 6 offset 0 0 10}
		{blastwave c4 1.5 r0 13 r1 21 offset 0 0 10}
		{blastwave c4 0.1 r0 26 r1 26 offset 0 0 10}
		{delete}
	}
	{on ground_hit
		{call "explosion"}
		{if terrain_fx "snow"
			{spawn "ex_fg_big_w"}
		else
			{spawn "ex_fg_big"}
		}
      		{spawn "crater_big" terrain_texmod}
	}
	{on contact
		{spawn "ex_stone_hit_br_big"}
		{call "explosion"}
	}
}
{"105_shell_dropping"
	{on spawn
		{link_sound "sound" "weapon/shot/artillery"}
		{play_sound "sound"}
	}
	{on "explosion"
		{blastwave c4 7.5 r0 0.4 r1 0.5 offset 0 0 10}
		{blastwave c4 3.5 r0 4 r1 5 offset 0 0 10}
		{blastwave c4 1.5 r0 8 r1 12.5 offset 0 0 10}
		{blastwave c4 0.1 r0 15 r1 15 offset 0 0 10}
		{delete}
	}
	{on ground_hit
		{call "explosion"}
		{if terrain_fx "snow"
			{spawn "ex_fg_medium_w"}
		else
			{spawn "ex_fg_medium"}
		}
      		{spawn "crater_norm_land" terrain_texmod}
	}
	{on contact
		{spawn "ex_stone_hit_br"}
		{call "explosion"}
	}
}
{"mortar_shell_dropping"
	{on spawn
		{link_sound "sound" "weapon/shot/mortar_sound"}
		{play_sound "sound"}
	}
	{on "explosion"
		{blastwave c4 3.7 r0 0.1 r1 0.1 offset 0 0 10}
		{blastwave c4 1.2 r0 4.1 r1 7.4 offset 0 0 10}
		{blastwave c4 0.1 r0 8.25 r1 8.25 offset 0 0 10}
		{delete}
	}
	{on ground_hit
		{call "explosion"}
		{if terrain_fx "snow"
			{spawn "ex_grenade_big_w"}
		else
			{spawn "ex_grenade_big"}
		}
      		{spawn "grenade_at_shellhole" terrain_texmod}
	}
	{on contact
		{spawn "ex_stone_hit_small"}
		{call "explosion"}
	}
}

{"air_bomb"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{ani_play "start"}
		{delay 0.5
			{volumes enable contact}
		}
	}
	{on ground_hit
		{if min_speed 10
			{call "explosion"}
		}
	}
	{on contact
		{if min_speed 8
			{call "explosion"}
		}
	}
}

{"air_bomb_stuff"
	{on "explosion"
		{stuff_detonate}
	}
	{on break_armor
		{call "explosion"}
	}
	{on contact
		{if min_speed 8
			{call "explosion"}
		}
	}
}

{"artillery_explosion"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{delay 0
			{start_sound "weapon/shot/artillery"}
			{delay 2
				{call "explosion"}
			}
		}
	}
}

{"artillery_explosion_240"

	(define "240_rand_delay"
		{delay %delay
			{start_sound "world/cannonade/torn_bomb2"}
			{delay 1 {start_sound "world/cannonade/torn_bomb2"}}
			{delay 2 {start_sound "world/cannonade/torn_bomb2"}}
			{delay 9
				{spawn "240_shell_fx"}
				{delete}
			}
		}
	)
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{if rand 0.1 ("240_rand_delay" delay(14 3))
		else rand 0.1 ("240_rand_delay" delay(15 4))
		else rand 0.1 ("240_rand_delay" delay(16 2))
		else rand 0.1 ("240_rand_delay" delay(17 3))
		else rand 0.1 ("240_rand_delay" delay(18 4))
		else rand 0.1 ("240_rand_delay" delay(19 2))
		else rand 0.1 ("240_rand_delay" delay(20 3))
		else rand 0.1 ("240_rand_delay" delay(21 4))
		else rand 0.1 ("240_rand_delay" delay(22 2))
		else ("240_rand_delay" delay(23 3))
		}
	}
}

{"artillery_explosion_mega"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{delay 0
			{start_sound "weapon/shot/shellheavy_incoming"}
			{delay 2.5
				{call "explosion"}
			}
		}
	}
}


{"mortar_explosion"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{delay 0
			{start_sound "weapon/shot/mortar_sound"}
			{delay 3
				{call "explosion"}
			}
		}
	}
}
{"artillery_explosion_105"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		;{spawn "smoke_red_small"}
		;{spawn "smoke_red_norm"}

		{delay 15
			{spawn "105_shell_fx"}
			{delay 7
				{spawn "105_shell_fx"}
				{delay 7
					{spawn "105_shell_fx"}
					{delay 7
						{spawn "105_shell_fx"}
						{delete}
					}
				}
			}
		}
	}
}
{"artillery_explosion_155"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		;{spawn "smoke_red_small"}
		;{spawn "smoke_red_norm"}

		{delay 15
			{spawn "155_shell_fx"}
			{delay 7
				{spawn "155_shell_fx"}
				{delay 7
					{spawn "155_shell_fx"}
					{delete}
				}
			}
		}
	}
}
{"airstrike_rp3"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		(define "airstrike_rockets"
		{delay 15
			{start_sound "world/ambient/airstrike_incoming.wav"}
			{delay 15
				{start_sound "world/ambient/airstrike_attack.wav"}
				{delay 2
					{start_sound "world/ambient/airstrike_incoming.wav"}
					{spawn "airstrike_rockets_%direction"}
					{delay 0.3
						{spawn "airstrike_rockets_%direction"}
						{delay 0.3
							{spawn "airstrike_rockets_%direction"}
							{delay 0.3
								{spawn "airstrike_rockets_%direction"}
								{delay 15{delete}}
							}
						}
					}
				}
			}
		}
		)
		
		{if rand 0.25
			("airstrike_rockets" direction(north))
		else rand 0.25
			("airstrike_rockets" direction(south))
		else rand 0.25
			("airstrike_rockets" direction(west))
		else
			("airstrike_rockets" direction(east))
		}
	}
}
{"mortar_explosion_flaer"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		;{spawn "smoke_red_small"}
		;{spawn "smoke_red_norm"}

		{delay 15
			{spawn "mortar_barrage"}
			{delete}
		}
	}
}
{"mortar_explosion_flaer_test"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		;{spawn "smoke_red_small"}
		;{spawn "smoke_red_norm"}

		{delay 10
			{if rand 0.2
				{spawn "mortar_explosion" offset 0 100 7}
			else rand 0.2
				{spawn "mortar_explosion" offset 0 -100 7}
			else rand 0.2
				{spawn "mortar_explosion" offset 100 0 7}
			else
				{spawn "mortar_explosion" offset -100 0 7}
			}
			{delay 2
				{if rand 0.3
					{spawn "mortar_explosion" offset 200 200 7}
				else rand 0.3
					{spawn "mortar_explosion" offset 150 300 7}
				else
					{spawn "mortar_explosion" offset 300 200 7}
				}
				{delay 2
					{if rand 0.3
						{spawn "mortar_explosion" offset -200 -200 7}
					else rand 0.3
						{spawn "mortar_explosion" offset -150 -300 7}
					else
						{spawn "mortar_explosion" offset -300 -200 7}
					}
					{delay 2
						{if rand 0.3
							{spawn "mortar_explosion" offset 200 -200 7}
						else rand 0.3
							{spawn "mortar_explosion" offset -300 150 7}
						else
							{spawn "mortar_explosion" offset 300 -200 7}
						}
						{delay 2
							{if rand 0.3
								{spawn "mortar_explosion" offset -200 200 7}
							else rand 0.3
								{spawn "mortar_explosion" offset 260 -180 7}
							else
								{spawn "mortar_explosion" offset -300 200 7}
							}
							{delay 2
								{if rand 0.3
									{spawn "mortar_explosion" offset 0 -200 7}
								else rand 0.3
									{spawn "mortar_explosion" offset 180 270 7}
								else
									{spawn "mortar_explosion" offset 0 -300 7}
								}
								{delay 2
									{if rand 0.3
										{spawn "mortar_explosion" offset 0 200 7}
									else rand 0.3
										{spawn "mortar_explosion" offset 270 180 7}
									else
										{spawn "mortar_explosion" offset 0 300 7}
									}
									{delay 2
										{if rand 0.3
											{spawn "mortar_explosion" offset 200 0 7}
										else rand 0.3
											{spawn "mortar_explosion" offset -150 300 7}
										else
											{spawn "mortar_explosion" offset 300 0 7}
										}
										{delay 2
											{if rand 0.3
												{spawn "mortar_explosion" offset -200 0 7}
											else rand 0.3
												{spawn "mortar_explosion" offset 150 -300 7}
											else
												{spawn "mortar_explosion" offset -300 0 7}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			{start_sound "mission/artillery/"}
			{start_sound "weapon/shot/artillery"}
		}
	}
}
{"artillery_explosion_flaer"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{spawn "smoke_red_small"}
		{spawn "smoke_red_norm"}
		{delay 10
			{delay 2
				;{set_radius 20
				{call "explosion"}
			}
			{start_sound "weapon/shot/artillery"}
		}
	}
}

{"explosion"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{call "explosion"}
	}
}


{"explosive_barrel"
	{inflammation_time 3}
	{on spawn
		{set "explosioned" 0}
	}
	{on break_armor
		{if name "pierce"
			{if stuff_filled "fuel" 20
				{call "explosion"}
			else stuff "bullet"
				{if stuff_filled "water" 20
					{burn fx "drops_water_small_short" fake}
				}
			else stuff "shell"
				{call "break"}
			}
	else name "blast"
			{call "break"}
		}
	}
	{on contact
;		{if effector "vehicle"
;			{if effector_velocity 5
;				{call "break"}
;			}
;		}
	}
	{on "burn"
		{call "break"}
	}
	{on "break"
		{if stuff_filled "fuel" 20
			{call "explosion"}
		else
			{spawn "car_die_particle"}
			{volumes disable bullet blast contact}
			{hide 0.3}
		}
	}
	{on "explosion"
		{if not "explosioned"
			{set "explosioned" 1}
			{volumes disable bullet blast contact}
			{delay 1
				{volumes enable contact}
			}
			{blastwave c4 5 r0 4 r1 6}
			{spawn "barrel_die_big"}
			{spawn "fire_shellhole"}
			{add_view "smoke_barrel" "smoke" "root"}
			{view start "smoke"}
			{impulse up 15 3 dir 3 1 cx 0 1 cy 0 1 com}
			{delay 25
				{view stop "smoke"}
				{hide 1}
			}
		}
	}
	{on ground_hit
		{if "explosioned"
			{blastwave c4 2 r0 4 r1 6}
			{spawn "barrel_die" offset 0 0 7}
			{delete}
		}
	}
}

{"balloon"
	{on break_armor
		{if name "pierce"
			{if rand 0.2
				{bullet_detonate}
				{if stuff_filled "fuel" 5
					{call "explosion"}
				}
			}
		}
	}
	{on "explosion"
		{if not "explosioned"
			{set "explosioned" 1}
			{spawn "flamer_die"}
			{spawn "fire_molot_ground"}
			{blastwave c4 10 r0 1 r1 1.5}
			{fire radius 6 time 2 heating 6}
			{delete}
		}
	}
}

{"explosive_stuff"
	{inflammation_time 7}
	{on break_armor
		{call "explosion"}
	}
	{on "burn"
		{call "explosion"}
	}
	{on "explosion"
		{if not "explosioned"
			{set "explosioned" 1}
;			{con "explosion"}
			{stuff_detonate}
		}
	}
}
