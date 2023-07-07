{"grenade"
	{on spawn
;		{add_view "grenade_p" "trace" "root"}
	}
	{on "onThrow"
;		{view start "trace"}
		{volumes "body" disable contact}
	}
	{on "onThrowActivate"
		{volumes "body" enable contact}
	}
	{on contact
		{if stuff_activated
			{if effector "human"
				{call "fall_down"}
			else effector "cannon"
				{link_grenade_to_nearest_human teleport}
			}
		}
	}
	{on "in_hole"
		{break_window_in_hole}
		{link_grenade_to_nearest_human}
	}
	{on ground_hit
;		{view stop "trace"}
	}
	{on "fall_down"
		{volumes disable contact}
		{fall_down}
	}
}

{"grenade training"
	{on spawn
		{tags add "grenade"}
	}
}

{"grenade contact"
	{on ground_hit
		{if stuff_activated
			{if not name "water"
				{call "ground_detonate"}
			}
		}
	}
	{on "in_hole" overload}
	{on contact
		{if stuff_activated
			{call "contact_detonate"}
		}
	}
	{on "ground_detonate"
		{call "detonate"}
	}
	{on "contact_detonate"
		{call "detonate"}
	}
	{on "detonate"
		{stuff_detonate}
	}
	{on "fall_down" overload}
	{on blast
		{if min_energy 0.5
			{call "detonate"}
		}
	}
}

{"grenade smoke"
	{on spawn
		{call "add_smoke"}
		{link_sound "smoke" "detonation/grenade_smoke/grenade_smoke"}
	}
	{on "add_smoke"
;		{add_view "smoke_cover-up_small"	"smoke1" "root"}
		{add_view "smoke_cover-up_norm"		"smoke2" "root"}
		{add_view "smoke_cover-up_big"		"smoke3" "root"}
	}
	{on "onThrow"
		{volumes disable touch select}
	}
	{on "activate"
		{play_sound "smoke" 1}
		{tags add "smoke"}
;		{view stop "trace"}
;		{view stop "smoke1"}
		{view start "smoke2"}
		{volumes "smoke1" enable visible}
		{update_visibility_patch}
		{delay 3
			{view stop "smoke2"}
			{view start "smoke3"}
		}
		{delay 5
			{volumes "smoke1" disable visible}
			{volumes "smoke2" enable visible}
			{spawn "smoke_zone_grenade"}
			{update_visibility_patch}
		}
		{delay 90
			{view stop "smoke3"}
			{stop_sound "smoke"}
		}
		{delay 92
			{hide 1}
		}
	}
	{on ground_hit
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{if under_water
					{hide 1}
				else
					{delay 3
						{call "activate"}
					}
				}
			}
		}
	}
	{on contact
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{delay 3
					{call "activate"}
				}
			}
		}
	}
}
{"smoke_launcher_grenade"
	{on spawn
		{call "add_smoke"}
		{link_sound "smoke" "detonation/grenade_smoke/grenade_smoke"}
	}
	{on "add_smoke"
;		{add_view "smoke_cover-up_small"	"smoke1" "root"}
		{add_view "smoke_cover-up_norm"		"smoke2" "root"}
		{add_view "smoke_cover-up_big"		"smoke3" "root"}
	}
	{on "onThrow"
		{volumes disable touch select}
	}
	{on "activate"
		{play_sound "smoke" 1}
		{tags add "smoke"}
;		{view stop "trace"}
;		{view stop "smoke1"}
		{view start "smoke2"}
		{volumes "smoke1" enable visible}
		{update_visibility_patch}
		{delay 3
			{view stop "smoke2"}
			{view start "smoke3"}
		}
		{delay 5
			{volumes "smoke1" disable visible}
			{volumes "smoke2" enable visible}
			{spawn "smoke_zone_grenade"}
			{update_visibility_patch}
		}
		{delay 90
			{view stop "smoke3"}
			{stop_sound "smoke"}
		}
		{delay 92
			{hide 1}
		}
	}
	{on ground_hit
		;{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{if under_water
					{hide 1}
				else
					{delay 1
						{call "activate"}
					}
				}
			}
		;}
	}
	{on contact
		;{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{delay 1
					{call "activate"}
				}
			}
		;}
	}
}
{"smoke_shell"
	{on spawn
		{call "add_smoke"}
		{link_sound "smoke" "detonation/grenade_smoke/grenade_smoke"}
		{call "activate"}
		{volumes disable touch select}
	}
	{on "add_smoke"
;		{add_view "smoke_cover-up_small"	"smoke1" "root"}
		{add_view "smoke_cover-up_norm"		"smoke2" "root"}
		{add_view "smoke_cover-up_big"		"smoke3" "root"}
	}	
	{on "activate"
		{play_sound "smoke" 1}
		{tags add "smoke"}
;		{view stop "smoke1"}
		{view start "smoke2"}
		{volumes "smoke1" enable visible}
		{update_visibility_patch}
		{delay 3
			{view stop "smoke2"}
			{view start "smoke3"}
		}
		{delay 5
			{volumes "smoke1" disable visible}
			{volumes "smoke2" enable visible}
			{spawn "smoke_zone_grenade"}
			{update_visibility_patch}
		}
		{delay 90
			{view stop "smoke3"}
			{stop_sound "smoke"}
		}
		{delay 122
			{hide 1}
		}
	}
	{on ground_hit
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{if under_water
					{hide 1}
				else
					{delay 3
						{call "activate"}
					}
				}
			}
		}
	}
	{on contact
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{delay 3
					{call "activate"}
				}
			}
		}
	}
}
{"smoke_shell_medium"
	{on spawn
		{call "add_smoke"}
		{link_sound "smoke" "detonation/grenade_smoke/grenade_smoke"}
		{call "activate"}
		{volumes disable touch select}
	}
	{on "add_smoke"
;		{add_view "smoke_cover-up_small"	"smoke1" "root"}
		{add_view "smoke_cover-up_norm"		"smoke2" "root"}
		{add_view "smoke_shell_fx_medium"	"smoke3" "root"}
	}	
	{on "activate"
		{play_sound "smoke" 1}
		{tags add "smoke"}
;		{view stop "smoke1"}
		{view start "smoke2"}
		{volumes "smoke1" enable visible}
		{update_visibility_patch}
		{delay 3
			{view stop "smoke2"}
			{view start "smoke3"}
		}
		{delay 5
			{volumes "smoke1" disable visible}
			{volumes "smoke2" enable visible}
			{spawn "smoke_zone_medium"}
			{update_visibility_patch}
		}
		{delay 120
			{view stop "smoke3"}
			{stop_sound "smoke"}
		}
		{delay 122
			{hide 1}
		}
	}
	{on ground_hit
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{if under_water
					{hide 1}
				else
					{delay 3
						{call "activate"}
					}
				}
			}
		}
	}
	{on contact
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{delay 3
					{call "activate"}
				}
			}
		}
	}
}
{"smoke_shell_big"
	{on spawn
		{call "add_smoke"}
		{link_sound "smoke" "detonation/grenade_smoke/grenade_smoke"}
		{call "activate"}
		{volumes disable touch select}
	}
	{on "add_smoke"
;		{add_view "smoke_cover-up_small"	"smoke1" "root"}
		{add_view "smoke_cover-up_norm"		"smoke2" "root"}
		{add_view "smoke_shell_fx_big"		"smoke3" "root"}
	}	
	{on "activate"
		{play_sound "smoke" 1}
		{tags add "smoke"}
;		{view stop "smoke1"}
		{view start "smoke2"}
		{volumes "smoke1" enable visible}
		{update_visibility_patch}
		{delay 3
			{view stop "smoke2"}
			{view start "smoke3"}
		}
		{delay 5
			{volumes "smoke1" disable visible}
			{volumes "smoke2" enable visible}
			{spawn "smoke_zone_big"}
			{update_visibility_patch}
		}
		{delay 120
			{view stop "smoke3"}
			{stop_sound "smoke"}
		}
		{delay 122
			{hide 1}
		}
	}
	{on ground_hit
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{if under_water
					{hide 1}
				else
					{delay 3
						{call "activate"}
					}
				}
			}
		}
	}
	{on contact
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{delay 3
					{call "activate"}
				}
			}
		}
	}
}

{"grenade smoke yellow"
	{on "add_smoke" overload
		{add_view "smoke_yellow_small"	"smoke1" "root"}
		{add_view "smoke_yellow_norm"	"smoke2" "root"}
		{add_view "smoke_yellow_big"	"smoke3" "root"}
	}
}

{"molotov_coctail"
	{on bullet_hit
		{fire radius 1.5 time 2 heating 6 effector}
		{call "detonate"}
	}
	{on blast
		{if min_energy 0.3
			{fire radius 1.5 time 2 heating 6 effector}
			{call "detonate"}
		}
	}
	{on "ground_detonate"
		{fire radius 2 time 5}
	}
	{on "contact_detonate" overload
		{if effector "construction"
			{volumes disable bullet contact blast}
			{fire radius 1.5 time 2 heating 6 effector}
			{delay 0.1
				{call "detonate"}
			}
		else
		;	{fire radius 1.5 time 2 heating 20 effector follow}
			{fire radius 0.7 time 0.7 heating 30 effector}
			{call "detonate"}
		}
	}
}
