{"moto"
	{on spawn
		{link_sound "flame" "fire/big"}

		{if not rain
			{add_view	"dustrun_small"			"on_ground"			"FXtrace2"}
			{add_view	"dustrun_small"			"on_ground"			"FXtrace3"}
			{add_view	"dustrun_small"			"on_grass"			"FXtrace2"}
			{add_view	"dustrun_small"			"on_grass"			"FXtrace3"}
			{add_view	"dustrun_small"			"on_country_road"	"FXtrace2"}
			{add_view	"dustrun_small"			"on_country_road"	"FXtrace3"}
			{add_view	"dustrun_sand_small"	"on_sand"			"FXtrace2"}
			{add_view	"dustrun_sand_small"	"on_sand"			"FXtrace3"}
			{add_view	"dustrun_snow_small"	"on_snow"			"FXtrace2"}
			{add_view	"dustrun_snow_small"	"on_snow"			"FXtrace3"}
		}
		{add_view	"drops_water"			"on_water"			"FXtrace1"}
;		{add_view	"drops_water"			"on_mud"			"FXtrace1"}
		{add_view	"drops_water_moto"		"on_puddle"			"FXtrace1"}

		{add_view	"smoke_black"			"smoke4"			"basis"}
		{add_view	"exhaust_dark_small"	"exhaust"			"FXsmoke1"}
	}
	{on "add_movement_sound"
		{link_sound "move"			"vehicle/wheels/bmw"}
		{link_sound "move_end"		"vehicle/wheels/bmw_end"}
		{link_sound "engine"		"vehicle/engine/bmw"}
		{link_sound "engine_end"	"vehicle/engine/moto_end"}
		{link_sound "exhaust"		"vehicle/engine/bmw_up"}
		{link_sound "idle"		"vehicle/engine/bmw"   	}
	}

	{on "test_heavy_contact"
		{if min_speed 30
			{if effector "construction"
				{call "explosion"}
			 else effector "shed"
				{call "explosion"}
			}
		else min_speed 20
			{component break}
;		else min_speed 5
;			{component break}
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
	{on pierce
		{if volume "engine"
			{if stuff "zenite"
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
			{if rand 0.7
				{components "body" break}
			}
		}
	}
	{on contact
		{if not impregnable
			{if effector_velocity 5
				{if effector "vehicle"
					{component break}
					{if volume "body"
						{set "crush" 1}
						{call "explosion"}
					}
				}
			else effector "concrete"
				{call "test_heavy_contact"}
			else effector "steel"
				{call "test_heavy_contact"}
			}
		}
	}
	{on "test_contact_off"
		{volumes disable contact touch}
	}
	{on "test_contact_on"
		{volumes enable contact touch}
	}
	{on break
		{if component "body"
			{spawn "tank_die_particle"}
			{crew_enable group "crew" 0}
			{view start "smoke3"}
			{reset_manual_control}
			{able select 0}
			{call "notify_break"}
			{delay 2 1
				{crew_emit}
				{delay 2{crew_emit}}
				{delay 4{crew_emit}}
				{delay 6{crew_emit}}
			}
    			{delay 10 {view stop "smoke3"}}
		else component "engine"
			{spawn "tank_die_particle"}
		}
	}
	{on repair
		{if component "body"
			{crew_enable group "crew" 1}
			{able select 1}
		}
	}
	{on blast_hit
		{if min_energy 0.8
			{impulse up 2 1 dir 2 1}
		 else min_energy 0.5
			{impulse up 1 1 dir 1 1}
		}
	}
	{on break_armor
		{component break}
		{if name "blast"
;			{if volume "body"
				{call "explosion"}
;			}
		}
	}
;	{on "_burn"
;		{add_view "smoke_dead_norm" "burn_fire" "basis"}
;		{view start "burn_fire"}
;	}
	{on "_burn" overload
		{add_view "smoke_dead_norm" "burn_fire" "basis"}
;		{add_view	"smoke_black" "burn_fire" "FXfire1"}
		{play_sound "flame" 1}
		{view start "burn_fire"}
		{explosive 1}
		{delay 5 1
			{explosive 0}
			{view stop "burn_fire"}
			{stop_sound "flame"}
			{call "explosion"}
		}
		{burn time 7}
	}
	{on "burn"
		{if not burned
			{call "_burn"}
		}
	}
	{on "check_burn_emit"
		{call "burn_emit"}
	}

	{on "_explosion"
		{area disable}
		{if not "crush"
			{spawn "car_die" "Basis"}
			{spawn "tank_die_particle" "Basis"}
			{impulse up 4 2 dir 2 1}
		}
	}

	{on "spawn_shellhole"
;		{spawn "shellhole_road_moto" "Basis"}
		{spawn "shellhole_dead_moto2" "Basis"}
	}

	{on "slice_load"
		{if name "wheel"
			{with_effector
				{add_view "smoke_dead_wheel" "smoke" "basis"}
			}
		}
	}
	{on "cut_parts"
		{add_view "smoke_dead_moto" "deathfx" "body"}
		{view start "deathfx"}

		(define "cut_part"
			{tear "piece_medium_steel" bone %0
				{impulse up 4 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 6 no_position}
				{burn first_volume fx "smoke_dead_wheel" time 20 5}
;				{add_view "smoke_dead_wheel" "smoke" "basis"}
;				{view start "smoke"}
				{delay_effect 20 5 "stop"}
			}
		)
		(define "tear_wheel"
			{if rand 0.2
				{components "%0" destroy}
				{tear "piece_medium_steel" bone "%0" id "wheel"
					{volumes disable bullet contact blast}	;prevent destroing at spawn moment
					{impulse up 6 4 dir 7 3}
					{add_view "smoke_dead_wheel" "smoke" "basis"}
					{view start "smoke"}
					{delay_effect 10 5 "pause"}
				}
			}
		)

		{volumes disable contact}
		{delay 14 {view stop "deathfx"}}

		("tear_wheel" args wheel1)
		("tear_wheel" args wheel2)
		("tear_wheel" args wheel3)

		("cut_part" args "part1")
		("cut_part" args "part2")
		("cut_part" args "part3")
		("cut_part" args "part4")
		("cut_part" args "part5")
		("cut_part" args "part6")
	}
}
