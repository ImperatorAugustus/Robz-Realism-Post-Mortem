{"sdkfz138_1 tank"
	("wespe_sound")
	("burn_by_engine" args 0.3)
}
{"sdkfz234_ger2 tank"
	("sdkfz234_sound")
	("smoke_launcher_3_sides")
	("burn_by_engine" args 0.3)
}
{"sdkfz234_1 tank"
	("sdkfz234_sound")
	("burn_by_engine" args 0.3)
}
{"sdkfz234_3 tank"
	("sdkfz234_sound")
	("burn_by_engine" args 0.3)
}
{"sdkfz234_4 tank"
	("sdkfz234_sound")
	("burn_by_engine" args 0.3)
}
{"sdkfz250_1 tank"
	("hanomag_sound")
	("burn_by_engine" args 0.3)
}
{"sdkfz250_11 tank"
	("hanomag_sound")
	("burn_by_engine" args 0.3)
}
{"sdkfz251_1_stuka tank"
	("hanomag_sound")
	("burn_by_engine" args 0.3)
}
{"sdkfz7 tank"
	("hanomag_sound")
	("burn_by_engine" args 0.3)
}
{"sdkfz7_2 tank"
	("hanomag_sound")
	("burn_by_engine" args 0.3)
}
{"sdkfz8 tank"
	("hanomag_sound")
	("burn_by_engine" args 0.3)
}
{"np_sdkfz251_16"
	("sdkfz250_sound")
	{on spawn   
		{add_view "flamer_fire" "flame1" "foresight9"}
		{add_view "flamer_fire_barrel" "fire1" "foresight9"}
		{add_view "flamer_fire" "flame2" "foresight10"}
		{add_view "flamer_fire_barrel" "fire2" "foresight10"}
		{view show   "fire1"}
		{view start   "fire1"}
		{view show   "fire2"}
		{view start   "fire2"}
	}
	{on break_armor
		{if name "blast"
			{if volume "body"
				{call "explosion"}
			}
        }
	}
	{on "_explosion"
		{call "__explosion"}
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	{on fire "flamer1"
		{view start	"flame1"}
		{kill_delay "fire1"}
		{delay 1 "fire1"
			{view pause	"flame1"}
		}
	}
	{on fire "flamer2"
		{view start	"flame2"}
		{kill_delay "fire2"}
		{delay 1 "fire2"
			{view pause	"flame2"}
		}
	}
	{on operatable on	
		{view start	"fire1"}
		{view start	"fire2"}
	}	
	{on operatable off		
		{view stop	"fire1"}
		{view stop	"fire2"}
	}
}
{"m3a1scout tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"	}
		{link_sound "engine"			"vehicle/engine/ba11"		}
		{link_sound "engine_end"		"vehicle/engine/ba11_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/ba11_up"	}
		{link_sound "idle"			"vehicle/engine/ba11_idle"	}
	}
	("burn_by_engine" args 0.3)
}
{"crusaderi tank"
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
{"crusaderics tank"
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
{"crusaderii tank"
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
{"m4a4_firefly_tulip tank"
	{on "add_movement_sound" overload
		{link_sound "move"					"vehicle/tracks/m4a2"		}
		{link_sound "engine"				"vehicle/engine/m4"		}
		{link_sound "engine_end"			"vehicle/engine/m4_end"	}
		{link_sound "exhaust"				"vehicle/engine/m4a2_up"	}
		{link_sound "rotate_turret" 	    "vehicle/turret/sherman"	}
		{link_sound "idle"				"vehicle/engine/m4a2_idle"}
	}
        {on fire "gun2"
                {spawn "startsmoke_cali"}
        }
	("smoke_launcher_usa_turret")
	("burn_by_engine" args 0.3)
}
{"matildamk1 tank"
	("mk7_sound")
	("burn_by_engine" args 0.3)
}
{"cruisermk1 tank"
	("mk7_sound")
	("burn_by_engine" args 0.3)
}
{"cruisermk3 tank"
	("mk7_sound")
	("burn_by_engine" args 0.3)
}
{"flammpz38 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/hetzer"	}
		{link_sound "engine"			"vehicle/engine/hetzer_engine"		}
		{link_sound "engine_end"		"vehicle/engine/hetzer_end"	}
		{link_sound "exhaust"			"vehicle/engine/hetzer_startup"	}
		{link_sound "idle"			"vehicle/engine/hetzer_idle2"	}
	}
	{on spawn
		{add_view "flamer_fire_tank" "flame1" "foresight1"}
		{add_view "flamer_fire_barrel" "fire1" "foresight1"}
		{view show	"fire1"}
		{view start	"fire1"}
	}
	{on operatable on	
		{view start	"fire1"}
	}	
	{on operatable off		
		{view stop	"fire1"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	{on fire "flamer1"
		{view start	"flame1"}
		{kill_delay "fire1"}
		{delay 0.5 "fire1"
			{view pause	"flame1"}
		}
	}
	("burn_by_engine" args 0.3)
}
;-----------------Normand Unit Pack
{"m2halftrack tank"
	("m3_sound")
	("burn_by_engine" args 0.3)
}
{"m2halftrack_2 tank"
	("m3_sound")
	("burn_by_engine" args 0.3)
}
{"m4halftrack tank"
	("burn_by_engine" args 0.3)
	("m3_sound")
	{on spawn
		{link_sound "rotate_turret" "vehicle/turret/mortar"}
		{link_sound "rotate_gun" "vehicle/turret/medium"}
		{add_view	"flash_cannon_small"		"flashbarrel1"	"Foresight1"}
		{add_view	"powdersmoke_big"		"flashbarrel1s"		"Foresight1"}
		{add_view	"smoke_zenite"		    "smkafire"		"Foresight1"}
	}
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
{"gun_carrier_3_inch tank"
	("mk7_sound")
	("burn_by_engine" args 0.3)
	{on spawn
		{link_sound "rotate_turret" "vehicle/turret/mortar"}
		{link_sound "rotate_gun" "vehicle/turret/medium"}
		{add_view	"flash_cannon_small"		"flashbarrel1"	"Foresight1"}
		{add_view	"powdersmoke_big"		"flashbarrel1s"		"Foresight1"}
		{add_view	"smoke_zenite"		    "smkafire"		"Foresight1"}
	}
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
{"humber"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"			}
		{link_sound "engine"			"vehicle/engine/sdkfz234"		}
		{link_sound "engine_end"		"vehicle/engine/sdkfz234_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"			}
		{link_sound "exhaust"			"vehicle/engine/sdkfz234_up"	}
		{link_sound "idle"			"vehicle/engine/sdkfz222_idle"}
	}
	("burn_by_engine" args 0.3)
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
{"np_pz5a tank"
	("pz5g_sound")
	("burn_by_engine" args 0.3)
}
{"pz5d tank"
	("pz5g_sound")
	("burn_by_engine" args 0.3)
	{on "init_gun"
		{ani_play "fire_mg"}
	}
}
{"brummbar tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
	("smoke_launcher_ger_hull")
}
{"brummbar_early tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"t-38 tank"
	("t26_sound")
	("burn_by_engine" args 0.3)
}
{"np_t50 tank"
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"	}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"	}
	}
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/t-70"		}
		{link_sound "engine"			"vehicle/engine/bt"		}
		{link_sound "engine_end"		"vehicle/engine/bt_end"	}
		{link_sound "exhaust"			"vehicle/engine/bt_up"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
	}
	("burn_by_engine" args 0.2)
	{on fire "mgun" overload
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.8
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.8
				{view pause "flashbarrel01"}
			}
		}
	}
}
{"kv1s tank"
	("kv_sound")
	("burn_by_engine" args 0.2)
}
{"kv1_41 tank"
	("kv_sound")
	("burn_by_engine" args 0.2)
}
{"kv1_40 tank"
	("kv_sound")
	("burn_by_engine" args 0.2)
}
{"su152 tank"
	("kv_sound")
	("burn_by_engine" args 0.2)
}
(define "bt7_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/bt"		}
		{link_sound "engine"			"vehicle/engine/V-2"		}
		{link_sound "engine_end"		"vehicle/engine/V-2_end"	}
		{link_sound "exhaust"			"vehicle/engine/V-2_up"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "idle"			"vehicle/engine/V-2_idle"}
	}
)
(define "break_glass"
 	{volumes "glass%1" disable bullet contact blast}
 	{spawn "glass_hit2" "glass%1" x}
 	{delay 0.1
 	{bone cut "glass%1"}
	}
)
(define "m3_break_glass"
	{on bullet_hit
 		{if volume "glass_front1"
 			("break_glass" args 3 _front1)
 		else volume "glass_front2"
 			("break_glass" args 3 _front2)
 		}
 	}
)
{"np_m5 tank"
	("m3_sound")
	("m3_break_glass")
	("burn_by_engine" args 0.3)
}
{"np_m17 tank"
	("m3_sound")
	("m3_break_glass")
	("burn_by_engine" args 0.3)
}
{"np_m17_en tank"
	("m3_sound")
	("m3_break_glass")
	("burn_by_engine" args 0.3)
}
{"np_m15a1 tank"
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"	}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"	}
	}
	("m3_sound")
	("m3_break_glass")
	("burn_by_engine" args 0.3)
	{on fire "mgun"
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.8
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.8
				{view pause "flashbarrel01"}
			}
		}
	}
}
{"np_t48 tank"
	("m3_sound")
	("burn_by_engine" args 0.3)
}
{"np_t48_us tank"
	("m3_sound")
	("burn_by_engine" args 0.3)
}
{"np_t48_en tank"
	("m3_sound")
	("burn_by_engine" args 0.3)
}
{"np_t19 tank"
	("m3_sound")
	("burn_by_engine" args 0.3)
}
{"np_t15 tank"
	("m3_sound")
	("burn_by_engine" args 0.3)
}
{"np_sdkfz234 tank"
	("sdkfz234_sound")
	("smoke_launcher_3_sides")
	("burn_by_engine" args 0.3)
}	
{"np_sdkfz234_1 tank"
	("sdkfz234_sound")
	("burn_by_engine" args 0.3)
}
{"np_sdkfz234_3 tank"
	("sdkfz234_sound")
	("burn_by_engine" args 0.3)
}
{"np_sdkfz234_4 tank"
	("sdkfz234_sound")
	("burn_by_engine" args 0.3)
}
{"np_su14 tank"		
	("mk7_sound")
	("burn_by_engine" args 0.3)
}
{"t34_41 tank"
	("t34_sound")
	("burn_by_engine" args 0.2)
}
{"t34_42 tank"
	("t34_sound")
	("burn_by_engine" args 0.2)
}
{"np_ba20 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"	}
		{link_sound "engine"			"vehicle/engine/ba11"		}
		{link_sound "engine_end"		"vehicle/engine/ba11_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/ba11_up"	}
	}
	("burn_by_engine" args 0.2)
}
{"np_ho_ki tank"
	("hanomag_sound")
	("burn_by_engine" args 0.3)
}
(define "lorraine_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz3"}
		{link_sound "engine"			"vehicle/engine/lorraine"		}
		{link_sound "engine_end"		"vehicle/engine/lorraine_end"	}
		{link_sound "exhaust"			"vehicle/engine/lorraine_up"	}
	}
)
{"np_marder135 tank"
	("lorraine_sound")
	("burn_by_engine" args 0.3)
}
{"np_sdkfz135_1 tank"
	("lorraine_sound")
	("burn_by_engine" args 0.3)
}
{"np_lorraine tank"
	("lorraine_sound")
	("burn_by_engine" args 0.3)
}
{"np_lorrai_37 tank"
	("lorraine_sound")
	("burn_by_engine" args 0.3)
}
{"np_lorrai_37_47 tank"
	("lorraine_sound")
	("burn_by_engine" args 0.3)
}
{"m4a1 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m4a2"  }
		{link_sound "engine"			"vehicle/engine/radial_high"		}
		{link_sound "engine_end"		"vehicle/engine/radial_stop"	}
		{link_sound "exhaust"			"vehicle/engine/radial_start"	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy"	}
		{link_sound "idle"			"vehicle/engine/radial_idle"}
	}
	("burn_by_engine" args 0.3)
}
{"m4a1_76w tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m4a2"  }
		{link_sound "engine"			"vehicle/engine/radial_high"		}
		{link_sound "engine_end"		"vehicle/engine/radial_stop"	}
		{link_sound "exhaust"			"vehicle/engine/radial_start"	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy"	}
		{link_sound "idle"			"vehicle/engine/radial_idle"}
	}
	("smoke_launcher_usa_turret")
	("burn_by_engine" args 0.3)
}
{"m4a1_eng tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m4a2"  }
		{link_sound "engine"			"vehicle/engine/radial_high"		}
		{link_sound "engine_end"		"vehicle/engine/radial_stop"	}
		{link_sound "exhaust"			"vehicle/engine/radial_start"	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy"	}
		{link_sound "idle"			"vehicle/engine/radial_idle"}
	}
	("burn_by_engine" args 0.3)
}
{"m4a1_76w_eng tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m4a2"  }
		{link_sound "engine"			"vehicle/engine/radial_high"		}
		{link_sound "engine_end"		"vehicle/engine/radial_stop"	}
		{link_sound "exhaust"			"vehicle/engine/radial_start"	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy"	}
		{link_sound "idle"			"vehicle/engine/radial_idle"}
	}
	("smoke_launcher_usa_turret")
	("burn_by_engine" args 0.3)
}
{"m4sherman tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m4a2"  }
		{link_sound "engine"			"vehicle/engine/radial_high"		}
		{link_sound "engine_end"		"vehicle/engine/radial_stop"	}
		{link_sound "exhaust"			"vehicle/engine/radial_start"	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy"	}
		{link_sound "idle"			"vehicle/engine/radial_idle"}
	}
	("burn_by_engine" args 0.3)
}
{"m36b1 tank"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/m4a2"	}
		{link_sound "engine"			"vehicle/engine/m4"	}
		{link_sound "engine_end"		"vehicle/engine/m4_end"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"}
		{link_sound "rotate_turret" 		"vehicle/turret/heavy"	}
		{link_sound "idle"			"vehicle/engine/m4a2_idle"}
	}
	("burn_by_engine" args 0.3)
}
{"m4a2 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m4a2"  }
		{link_sound "engine"			"vehicle/engine/m4a2"		}
		{link_sound "engine_end"		"vehicle/engine/m4a2_end"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy"	}
		{link_sound "idle"			"vehicle/engine/m4a2_idle"}
	}
	("burn_by_engine" args 0.3)
}
{"m4a2_76w tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m4a2"  }
		{link_sound "engine"			"vehicle/engine/m4a2"		}
		{link_sound "engine_end"		"vehicle/engine/m4a2_end"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy"	}
		{link_sound "idle"			"vehicle/engine/m4a2_idle"}
	}
	("smoke_launcher_usa_turret")
	("burn_by_engine" args 0.3)
}
(define "b1bis_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/b1bis"}
		{link_sound "engine"			"vehicle/engine/b1bis"		}
		{link_sound "engine_end"		"vehicle/engine/b1bis_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy1"	}
		{link_sound "exhaust"			"vehicle/engine/b1bis_up"	}
	}
)
{"b1bis tank"
	("b1bis_sound")
	{on fire "gun2"
        		{view start "flashbarrel11"}
		{view start "flashbarrel11s"}
		{ani_play "fire1"}
		{delay 0.8
			{view pause "flashbarrel11"}
		}
		{delay 0.2
			{view pause "flashbarrel11s"}
		}
	}
}
{"t35 tank"		
	{on spawn
		{add_view	"flash_gun_big_vehicle"	"flashbarrel8"	"Foresight8"}
		{add_view	"flash_gun_big_vehicle"	"flashbarrel9"	"Foresight9"}
		{add_view	"flash_gun_big_vehicle"	"flashbarrel10"	"Foresight10"}
		{add_view	"flash_cannon_small"	"flashbarrel13"	"Foresight11"}
		{add_view	"powdersmoke_big"		"flashbarrel13s"	"Foresight11"}
	}
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/mk7"	}
		{link_sound "engine"			"vehicle/engine/mk7"		}
		{link_sound "engine_end"		"vehicle/engine/mk7_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/mk7_turret"		}
		{link_sound "rotate_turret2" 	"vehicle/turret/light"		}
		{link_sound "rotate_turret3" 	"vehicle/turret/light"		}
		{link_sound "rotate_turret4" 	"vehicle/turret/light1"		}
		{link_sound "rotate_turret5" 	"vehicle/turret/light1"		}
		{link_sound "exhaust"			"vehicle/engine/mk7_up" 	}
	}
	("burn_by_engine" args 0.3)
	{on fire "mgun4"
		{view start "flashbarrel8"}
	}
	{on fire "mgun5"
		{view start "flashbarrel9"}
	}
	{on fire "mgun6"
		{view start "flashbarrel10"}
	}
	{on fire "gun2"
        		{view start "flashbarrel13"}
		{view start "flashbarrel13s"}
		{ani_play "fire2"}
		{delay 0.8
			{view pause "flashbarrel13"}
		}
		{delay 0.2
			{view pause "flashbarrel13s"}
		}
	}
	{on fire "gun3"
        		{view start "flashbarrel12"}
		{view start "flashbarrel12s"}
		{ani_play "fire3"}
		{delay 0.8
			{view pause "flashbarrel12"}
		}
		{delay 0.2
			{view pause "flashbarrel12s"}
		}
	}
}
{"m3grant tank"
	{on spawn
		{add_view	"flash_gun_big_vehicle"	"flashbarrel00"	"foresight3"	}
		{add_view	"flash_gun_big_vehicle"	"flashbarrel01"	"foresight3"	}
		{add_view	"flash_gun_big_vehicle"	"flashbarrel04"	"foresight4"	}
	}
	("m4_sound")
	("burn_by_engine" args 0.3)
	{on fire "gun2"
		{spawn "tank_canon_fire_verysmall" "Foresight11" x}
	}
	{on fire "mgun2"
		{view start "flashbarrel04"}
		{delay 0.2
			{view pause "flashbarrel04"}
		}
	}
	{on fire "mgun" overload
		{if  name "00"
			{view start "flashbarrel00"}
		else name "01"
			{view start "flashbarrel01"}
		}
	}
}
{"dickermax tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"pz4f_1 tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"pz4f_2 tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"np_sdkfz222 tank"
	("sdkfz_sound")
	("burn_by_engine" args 0.3)
}
{"np_sdkfz221 tank"
	("sdkfz_sound")
	("burn_by_engine" args 0.3)
}
{"np_sdkfz223 tank"
	("sdkfz_sound")
	("burn_by_engine" args 0.3)
}
{"np_sdkfz4 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz10"	 }
		{link_sound "engine"			"vehicle/engine/sdkfz250"	 }
		{link_sound "engine_end"		"vehicle/engine/sdkfz250_end"}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"		 }
		{link_sound "exhaust"			"vehicle/engine/sdkfz250_up" }
	}
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"pz6h tank"
	("pz6_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
	("smoke_launcher_3_sides")
}
{"sdkfz182h tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/jugdpanther"	}
		{link_sound "engine"			"vehicle/engine/pz6bh"		}
		{link_sound "engine_end"		"vehicle/engine/pz6bh_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/pz6"	}
		{link_sound "exhaust"			"vehicle/engine/pz6bh_up"	}
		{link_sound "idle"			"vehicle/engine/pz6bh_idle"}
	}
	("burn_by_engine" args 0.3)
}
{"sdkfz182b tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/jugdpanther"	}
		{link_sound "engine"			"vehicle/engine/pz6bh"		}
		{link_sound "engine_end"		"vehicle/engine/pz6bh_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/pz6"	}
		{link_sound "exhaust"			"vehicle/engine/pz6bh_up"	}
		{link_sound "idle"			"vehicle/engine/pz6bh_idle"}
	}
	("burn_by_engine" args 0.3)
	{on fire "gun"
        		{ani_play "fire_p"}
	}	
}
{"stug3e tank"
	("pz3_sound")
	("burn_by_engine" args 0.3)
}
{"stug3f tank"
	("pz3_sound")
	("burn_by_engine" args 0.3)
}
{"stug3f_8 tank"
	("pz3_sound")
	("burn_by_engine" args 0.3)
}
{"pzkpfw38t_b tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/hetzer"	}
		{link_sound "engine"			"vehicle/engine/pz38"		}
		{link_sound "engine_end"		"vehicle/engine/pz38_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"		 }
		{link_sound "exhaust"			"vehicle/engine/pz38_up"	}
		{link_sound "idle"			"vehicle/engine/hetzer_idle"	}
	}
	("burn_by_engine" args 0.3)
}
{"pzkpfw38t_hun tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/hetzer"	}
		{link_sound "engine"			"vehicle/engine/pz38"		}
		{link_sound "engine_end"		"vehicle/engine/pz38_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"		 }
		{link_sound "exhaust"			"vehicle/engine/pz38_up"	}
	}
	("burn_by_engine" args 0.3)
}
{"ba10 tank"
	("sdkfz234_sound")
	("burn_by_engine" args 0.3)
}
{"m4hst tank"
	("m3_sound")
	("burn_by_engine" args 0.3)
}
{"karlthor tank"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/karl_track"		}
		{link_sound "engine"			"vehicle/engine/karl"		}
		{link_sound "engine_end"		"vehicle/engine/karl_end"	}
		{link_sound "exhaust"			"vehicle/engine/karl_up" 	}
	}
	("burn_by_engine" args 0.3)
}
{"np_sdkfz231 tank"
	("sdkfz234_sound")
	("burn_by_engine" args 0.3)
}
{"pz4e tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"pz4f tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"stug4g tank"
	("pz4_sound")
	("smoke_launcher_ger_hull")
	("burn_by_engine" args 0.3)
}
{"pz3_m tank"
	("pz3_sound")
	("burn_by_engine" args 0.3)
	("smoke_launcher_3_sides")
	{on fire "gun"
        		{ani_play "fire2"}
	}
}
{"pz3_l tank"
	("pz3_sound")
	("burn_by_engine" args 0.3)	
}
{"pz3j tank"
	("pz3_sound")
	("burn_by_engine" args 0.3)	
}
{"su85m tank"
	("t34_sound")
	("burn_by_engine" args 0.2)
	{on fire "gun"
        		{ani_play "fire2"}
	}
}
{"t34m2 tank"
	("t34_sound")
	("burn_by_engine" args 0.2)
	{on "stop_on"
		{ani_stop "start2"}
		{ani_play "stop2"}
		{view show "stop_signal"}
		{view start "stop_signal"}
		{delay 1
			{view hide "stop_signal"}
		}
	}
	{on move on
		{stop_sound "move_end"}
		{play_sound "move" 1}
		{call "exhaust_on"}
		{ani_stop "stop2"}
		{ani_play "start2"}
	}
	{on fire "gun"
        		{ani_play "fire2"}
	}
}
{"ot34_2 tank"
	("t34_sound")
	("burn_by_engine" args 0.2)
	{on spawn   
		{add_view "flamer_fire_tank" "flame1" "foresight4"}
		{add_view "flamer_fire_barrel" "fire1" "foresight4"}
		{view show   "fire1"}
		{view start   "fire1"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 8 time 15 heating 10}
	}
	{on fire "mgun1"
		{view start   "flame1"}
		{kill_delay "fire1"}
		{delay 0.5 "fire1"
			{view pause   "flame1"}
		}
	}
	{on operatable on	
		{view start	"fire1"}
	}	
	{on operatable off		
		{view stop	"fire1"}
	}
}
{"pz3_m_flamer tank"
	("pz3_sound")
	("burn_by_engine" args 0.3)	
	("smoke_launcher_3_sides")
	{on spawn
		{add_view "flamer_fire_tank" "flame1" "foresight1"}
		{add_view "flamer_fire_barrel" "fire1" "foresight1"}
		{view show	"fire1"}
		{view start	"fire1"}
	}
	{on operatable on	
		{view start	"fire1"}
	}	
	{on operatable off		
		{view stop	"fire1"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	{on fire "flamer1"
		{view start	"flame1"}
		{kill_delay "fire1"}
		{delay 0.5 "fire1"
			{view pause	"flame1"}
		}
	}
}
{"t-26_1931 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/bt"			}
		{link_sound "rotate_turret" 	"vehicle/turret/light"		}
		{link_sound "rotate_turret2" 	"vehicle/turret/light"		}
		{link_sound "engine"			"vehicle/engine/t26"		}
		{link_sound "engine_end"		"vehicle/engine/t26_end"	}
		{link_sound "exhaust"			"vehicle/engine/t26_up"	}
	}
	("burn_by_engine" args 0.2)
}
{"t-26_1931a tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/bt"			}
		{link_sound "rotate_turret" 	"vehicle/turret/light"		}
		{link_sound "rotate_turret2" 	"vehicle/turret/light"		}
		{link_sound "engine"			"vehicle/engine/t26"		}
		{link_sound "engine_end"		"vehicle/engine/t26_end"	}
		{link_sound "exhaust"			"vehicle/engine/t26_up"	}
	}
	("burn_by_engine" args 0.2)
}
{"t-26_1933 tank"
	("t26_sound")
	("burn_by_engine" args 0.2)
}
{"ot-130 tank"
	("t26_sound")
	("burn_by_engine" args 0.3)	
	{on spawn
		{add_view "flamer_fire" "flame1" "foresight1"}
		{add_view "flamer_fire_barrel" "fire1" "foresight1"}
		{view show	"fire1"}
		{view start	"fire1"}
	}
	{on operatable on	
		{view start	"fire1"}
	}	
	{on operatable off		
		{view stop	"fire1"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	{on fire "flamer1"
		{view start	"flame1"}
		{kill_delay "fire1"}
		{delay 0.5 "fire1"
			{view pause	"flame1"}
		}
	}
}
{"challenger_a30 tank"
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
{"np_is1 tank"
	("kv_sound")
	("burn_by_engine" args 0.2)
}
{"pz5a tank"
	("pz5g_sound")
	("burn_by_engine" args 0.3)
	("smoke_launcher_3_sides")
}
{"wasp tank"
	{on spawn
		{add_view "flamer_fire_tank" "flame1" "foresight1"}
		{add_view "flamer_fire_barrel" "fire1" "foresight1"}
		{view show	"fire1"}
		{view start	"fire1"}
	}
	("mk7_sound")
	{on operatable on	
		{view start	"fire1"}
	}	
	{on operatable off		
		{view stop	"fire1"}
	}
	{on break_armor
		{if name "blast"
			{if volume "body"
				{call "explosion"}
			}
        }
	}
	{on pierce
		{if volume "body"
			{if rand 0.2
				{call "_explosion"}
			}
		}
	}
	{on "_explosion"
		{call "__explosion"}
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	{on fire "flamer1"
		{view start	"flame1"}
		{kill_delay "fire1"}
		{delay 0.5 "fire1"
			{view pause	"flame1"}
		}
	}
	("burn_by_engine" args 0.3)
}
{"kv8_41 tank"
	("kv_sound")
	("burn_by_engine" args 0.2)
	{on spawn   
		{add_view "flamer_fire_tank" "flame1" "foresight5"}
		{add_view "flamer_fire_barrel" "fire1" "foresight5"}
		{view show   "fire1"}
		{view start   "fire1"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 8 time 15 heating 10}
	}
	{on fire "mgun2"
		{view start   "flame1"}
		{kill_delay "fire1"}
		{delay 0.5 "fire1"
			{view pause   "flame1"}
		}
	}
	{on operatable on	
		{view start	"fire1"}
	}	
	{on operatable off		
		{view stop	"fire1"}
	}
}
{"pz4d tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"pz3e tank"
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"	}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"	}
	}
	{on fire "mgun2" overload
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.8
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.8
				{view pause "flashbarrel01"}
			}
		}
	}
	("pz3_sound")
	("burn_by_engine" args 0.3)
}
{"sturmpz1 tank"
	("pz1_sound")
}
{"bt5 tank"
	("bt7_sound")
	("burn_by_engine" args 0.3)
}
{"bt7_35 tank"
	("bt7_sound")
	("burn_by_engine" args 0.3)
}
{"bt7_35k tank"
	("bt7_sound")
	("burn_by_engine" args 0.3)
}
{"bt7_37_1 tank"
	("bt7_sound")
	("burn_by_engine" args 0.3)
}
{"bt7_37_0 tank"
	("bt7_sound")
	("burn_by_engine" args 0.3)
}
;-----------------Normand Unit Pack
(define "pz7_sound"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/jugdpanther"	}
		{link_sound "engine"			"vehicle/engine/maus_engine"	}
		{link_sound "engine_end"		"vehicle/engine/maus_end"	}
		{link_sound "rotate_turret" 		"vehicle/turret/heavy1"	}
		{link_sound "exhaust"			"vehicle/engine/maus_up"	}
		{link_sound "idle"			"vehicle/engine/maus_idle"}
	}
)
{"maus"
	{on spawn
		{set "super_heavy_tank" 1}
		{delay 0.1{set "heavy_tank" 0}}
	}
	{on fire "gun2"
		{view start "flashbarrel2"}
		{view start "flashbarrel2s"}
       		{spawn "dust_shot_norm" 	"basis"}
        	{spawn "tank_canon_fire_medium" 	"Foresight2" x}
		{blastwave c4 0.2 r0 1 r1 1.5 bone 	"Foresight2"}
		{delay 0.3
			{view pause "flashbarrel2s"}
		}
		{ani_play "fire2"}
	}
	("pz7_sound")
	("burn_by_engine" args 0.3)
}
{"m3stuart_early tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m3stuart"	}
		{link_sound "engine"			"vehicle/engine/m3stuart"		}
		{link_sound "engine_end"		"vehicle/engine/tankengine_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "exhaust"			"vehicle/engine/tankengine_up"	}
		{link_sound "idle"			"vehicle/engine/m3stuart"	}
	}
	("burn_by_engine" args 0.3)
}
{"m3stuart_eng tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m3stuart"	}
		{link_sound "engine"			"vehicle/engine/m3stuart"		}
		{link_sound "engine_end"		"vehicle/engine/tankengine_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "exhaust"			"vehicle/engine/tankengine_up"	}
		{link_sound "idle"			"vehicle/engine/m3stuart"	}
	}
	("burn_by_engine" args 0.3)
}
{"pz4j tank"
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
{"karlthor tank"
	("pz7_sound")
	("burn_by_engine" args 0.3)
}