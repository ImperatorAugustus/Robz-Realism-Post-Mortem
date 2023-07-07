;------------------ GERMAN -----------------------
;vet SS units--------------------------------
{"pz4h_vet tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"pz4j_vet tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz4"	}
		{link_sound "engine"			"vehicle/engine/pz4"		}
		{link_sound "engine_end"		"vehicle/engine/pz4_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/manual_turret"	}
		{link_sound "exhaust"			"vehicle/engine/pz4_up"	  	}
		{link_sound "idle"			"vehicle/engine/pz4_idle"	}
	}
	("smoke_launcher_ger_turret")
	("burn_by_engine" args 0.3)
}
{"jagdpanther_vet tank"
	("pz5g_sound")
	("burn_by_engine" args 0.3)
	("smoke_launcher_ger_hull")
}
{"stug3g_vet tank"
	("pz3_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open" -1.0 resume}
	}
	("burn_by_engine" args 0.3)
	("smoke_launcher_ger_hull")
}
{"jagdpanzer_iv_vet tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
	("smoke_launcher_ger_hull")
}
;-----------------------------------------------
{"pz4g_42 tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"dickermax tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz4"	}
		{link_sound "engine"			"vehicle/engine/pz4"		}
		{link_sound "engine_end"		"vehicle/engine/pz4_end"	}
		{link_sound "exhaust"			"vehicle/engine/pz4_up"	  	}
		{link_sound "idle"			"vehicle/engine/pz4_idle"	}
	}
	("burn_by_engine" args 0.3)
}
{"sturer_emil tank"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/pz4"		}
		{link_sound "engine"			"vehicle/engine/hl62_run"		}
		{link_sound "engine_end"		"vehicle/engine/hl62_stop"	}
		{link_sound "exhaust"			"vehicle/engine/hl62_start"	  	}
		{link_sound "idle"			"vehicle/engine/hl62_idle"	}
	}
	("burn_by_engine" args 0.3)
}
{"np_sdkfz8_flak tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz250"	}
		{link_sound "engine"			"vehicle/engine/sdkfz250"		}
		{link_sound "engine_end"		"vehicle/engine/sdkfz250_end"	}
		{link_sound "exhaust"			"vehicle/engine/sdkfz250_up"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "idle"			"vehicle/engine/sdkfz_idle"	}
	}
	{on fire "gun"
		{ani_play "fire"}
		{ani_play "start"}
		{call "spawn_shell_tank"}
	}
	{on "spawn_shell_tank"
		{start_sound "weapon/shot/shell"}
		{add_view "smoke_zenit" "smoke_shell" "fx_invers"}
		{view start "smoke_shell"}
		{delay 2.5 0.5
			{view stop "smoke_shell"}
		}
		{spawn "shell_cannon" "fx_invers2" x scale 0.014
			{impulse up 1.5 0.5 dir -4.5 0.7 cz 0.2 0.1 com}
			{add_view "smoke_zenit" "smoke_shell" "fx_shellsmoke"}
			{view start "smoke_shell"}
			{delay_effect 3 1 "stop"}
			{delay 3 0.5
				{hide 15}
			}
		}
	}
	{on "update_lights"
		{if not sunlight
			{if operatable
				{ani_play "lights_on"}
				{call "lights_on"}
			else
				{call "lights_off"}
				{ani_play "lights_off"}
			}
		}
	}
	{on pierce
		{if stuff "shell_maximum"
			{components "body" break}
		else stuff "shell_verybig"
			{components "body" break}
		else stuff "shell_big"
			{components "body" break}
		else stuff "shell"
			{if rand 0.4
				{components "body" break}
			}
		}
	}	
}
;------------------ USA --------------------------
{"m10wolverine_42 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/mk2"	}
		{link_sound "engine"			"vehicle/engine/m10wolverine"		}
		{link_sound "engine_end"		"vehicle/engine/m4_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/manual_turret2"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"	}
		{link_sound "idle"			"vehicle/engine/m10wolverine"}
	}
	{on "gunner_hatch_open" overload
		{ani_play "open" -1.0 resume}
	}
	("burn_by_engine" args 0.3)
}
{"m10wolverine_eng tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/mk2"	}
		{link_sound "engine"			"vehicle/engine/m10wolverine"		}
		{link_sound "engine_end"		"vehicle/engine/m4_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/manual_turret2"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"	}
		{link_sound "idle"			"vehicle/engine/m10wolverine"}
	}
	{on "gunner_hatch_open" overload
		{ani_play "open" -1.0 resume}
	}
	("burn_by_engine" args 0.3)
}
{"m4a3_75_42 tank"
	("m4_sound")
	("burn_by_engine" args 0.3)
}
{"m4a3_75_43 tank"
	("m4_sound")
	("burn_by_engine" args 0.3)
}
{"m4a3_75_44 tank"
	("m4_sound")
	("burn_by_engine" args 0.3)
}
{"m4a3_75_45 tank"
	("m4_sound")
	("burn_by_engine" args 0.3)
}
;---------------- British ---------------------
{"challenger_a30_43 tank"
	{on "add_movement_sound" overload
		{link_sound "move"		    	"vehicle/tracks/cromwell"	}
		{link_sound "engine"			"vehicle/engine/cromwell"		}
		{link_sound "engine_end"		"vehicle/engine/cromwell_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/churchill_turret"	}
		{link_sound "exhaust"			"vehicle/engine/cromwell_up"	}
		{link_sound "idle"			"vehicle/engine/cromwell_idle"	}
	}
	("burn_by_engine" args 0.3)
}
{"mk4_42 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/churchill"		}
		{link_sound "engine"			"vehicle/engine/churchill"		}
		{link_sound "engine_end"		"vehicle/engine/churchill_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/churchill_turret"	}
		{link_sound "exhaust"			"vehicle/engine/churchill_up" 	}
		{link_sound "idle"			"vehicle/engine/cromwell_idle"	}
	}
	("burn_by_engine" args 0.3)
}
{"mk6_42 tank"
	("mk6_sound")
	("burn_by_engine" args 0.3)
}