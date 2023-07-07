{on pierce
   ;///////////////////////////////////////////////////////// bullet
    ("damage_process_pierce"
        staff(bullet)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0)
        pierce_front_back_track(0)
        pierce_left_right_track(0)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0)
	pierce_internal_damage(0)
	pierce_body__ammo_fire(0)
	pierce_turret__ammo_fire(0)

	pierce_transmission_break(0)
	pierce_turret_drive_break(0)
	pierce_gun_drive_break(0)
	pierce_gun_breech(0)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.05)
        pierce_body__body_destroy(0.01)
    ;--------------------------
		  crew_shock_time(0)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0)

	pierce_mantlet__gun_destroy(0)
	pierce_turret__gun_destroy(0)

        pierce_turret_front__turret_brake(0.08)
        pierce_turret_back__turret_brake(0.08)
        pierce_turret_left_right__turret_brake(0.08)

        pierce_turret_front__gun_brake(0.05) pierce_mantlet__gun_brake(0.05)
        pierce_turret_back__gun_brake(0.03)
        pierce_turret_left_right__gun_brake(0.03)

    ;---------------------------
        pierce_engine__engine_brake(0.30)
        pierce_engine__engine_burn(0.10)
	pierce_engine__fuel_leak(0)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.20)
        pierce_body__kill_gunner(0)
        pierce_body__kill_driver(0.20)
        pierce_body__kill_commander(0)
        pierce_body__kill_gunner2(0)
    ;--------------------------
        pierce_turret__kill_charger(0)
        pierce_turret__kill_gunner(0.20)
        pierce_turret__kill_driver(0)
        pierce_turret__kill_commander(0.20)
        pierce_turret__kill_gunner2(0.20)
    )
    ;///////////////////////////////////////////////////////// ptr
   ("damage_process_pierce"
        staff(ptr)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(0.60)
        pierce_left_right_track(0.50)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.20)
	pierce_internal_damage(0.05)
	pierce_body__ammo_fire(0.02)
	pierce_turret__ammo_fire(0.02)

	pierce_transmission_break(0.10)
	pierce_turret_drive_break(0.10)
	pierce_gun_drive_break(0.10)
	pierce_gun_breech(0.10)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.05)
        pierce_body__body_destroy(0)
    ;--------------------------
		  crew_shock_time(3.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0)

	pierce_mantlet__gun_destroy(0)
	pierce_turret__gun_destroy(0)

        pierce_turret_front__turret_brake(0.10)
        pierce_turret_back__turret_brake(0.10)
        pierce_turret_left_right__turret_brake(0.10)

        pierce_turret_front__gun_brake(0.10) pierce_mantlet__gun_brake(0.15)
        pierce_turret_back__gun_brake(0.10)
        pierce_turret_left_right__gun_brake(0.10)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.10)
	pierce_engine__fuel_leak(0.4)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.20)
        pierce_body__kill_gunner(0)
        pierce_body__kill_driver(0.20)
        pierce_body__kill_commander(0)
        pierce_body__kill_gunner2(0)
    ;--------------------------
        pierce_turret__kill_charger(0)
        pierce_turret__kill_gunner(0.20)
        pierce_turret__kill_driver(0)
        pierce_turret__kill_commander(0.20)
        pierce_turret__kill_gunner2(0.20)
    )
    ;///////////////////////////////////////////////////////// 20mm
   ("damage_process_pierce"
        staff(20mm)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0.5)
        pierce_front_back_track(0.60)
        pierce_left_right_track(0.50)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.10)
	pierce_internal_damage(0.10)
	pierce_body__ammo_fire(0.03)
	pierce_turret__ammo_fire(0.03)

	pierce_transmission_break(0.08)
	pierce_turret_drive_break(0.10)
	pierce_gun_drive_break(0.10)
	pierce_gun_breech(0.07)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.05)
        pierce_body__body_destroy(0)
    ;--------------------------
		  crew_shock_time(4.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0.05)

	pierce_mantlet__gun_destroy(0)
	pierce_turret__gun_destroy(0)

        pierce_turret_front__turret_brake(0.02)
        pierce_turret_back__turret_brake(0.02)
        pierce_turret_left_right__turret_brake(0.02)

        pierce_turret_front__gun_brake(0.05) pierce_mantlet__gun_brake(0.10)
        pierce_turret_back__gun_brake(0.05)
        pierce_turret_left_right__gun_brake(0.05)

    ;---------------------------
        pierce_engine__engine_brake(0.60)
        pierce_engine__engine_burn(0.10)
	pierce_engine__fuel_leak(0.10)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.10)
        pierce_body__kill_gunner(0)
        pierce_body__kill_driver(0.10)
        pierce_body__kill_commander(0)
        pierce_body__kill_gunner2(0)
    ;--------------------------
        pierce_turret__kill_charger(0)
        pierce_turret__kill_gunner(0.10)
        pierce_turret__kill_driver(0)
        pierce_turret__kill_commander(0.10)
        pierce_turret__kill_gunner2(0.10)
    )
    ;///////////////////////////////////////////////////////// 37to47
   ("damage_process_pierce"
        staff(shell_minimum)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(0.90)
        pierce_left_right_track(0.80)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.50)
	pierce_internal_damage(0.20)
	pierce_body__ammo_fire(0.05)
	pierce_turret__ammo_fire(0.05)

	pierce_transmission_break(0.25)
	pierce_turret_drive_break(0.25)
	pierce_gun_drive_break(0.20)
	pierce_gun_breech(0.20)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.05)
        pierce_body__body_destroy(0)
    ;--------------------------
		  crew_shock_time(6.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0.10)

	pierce_mantlet__gun_destroy(0.05)
	pierce_turret__gun_destroy(0)

        pierce_turret_front__turret_brake(0.20)
        pierce_turret_back__turret_brake(0.20)
        pierce_turret_left_right__turret_brake(0.20)

        pierce_turret_front__gun_brake(0.20) pierce_mantlet__gun_brake(0.25)
        pierce_turret_back__gun_brake(0.20)
        pierce_turret_left_right__gun_brake(0.20)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.25)
	pierce_engine__fuel_leak(0.6)
	shell_shatter(0.15)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.25)
        pierce_body__kill_gunner(0.10)
        pierce_body__kill_driver(1.00)
        pierce_body__kill_commander(0.10)
        pierce_body__kill_gunner2(0.10)
    ;--------------------------
        pierce_turret__kill_charger(0.10)
        pierce_turret__kill_gunner(1.00)
        pierce_turret__kill_driver(0.10)
        pierce_turret__kill_commander(0.25)
        pierce_turret__kill_gunner2(0.25)
    )
	    ;///////////////////////////////////////////////////////// 50to57 no HE filler
   ("damage_process_pierce"
        staff(shell_small_no_filler)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(1.00)
        pierce_left_right_track(0.90)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.45)
	pierce_internal_damage(0.35)
	pierce_body__ammo_fire(0.04)
	pierce_turret__ammo_fire(0.04)

	pierce_transmission_break(0.35)
	pierce_turret_drive_break(0.35)
	pierce_gun_drive_break(0.30)
	pierce_gun_breech(0.30)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.10)
        pierce_body__body_destroy(0.05)
    ;--------------------------
		  crew_shock_time(8.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0.15)

	pierce_mantlet__gun_destroy(0.08)
	pierce_turret__gun_destroy(0.03)

        pierce_turret_front__turret_brake(0.25)
        pierce_turret_back__turret_brake(0.25)
        pierce_turret_left_right__turret_brake(0.25)

        pierce_turret_front__gun_brake(0.25) pierce_mantlet__gun_brake(0.30)
        pierce_turret_back__gun_brake(0.25)
        pierce_turret_left_right__gun_brake(0.25)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.30)
	pierce_engine__fuel_leak(0.2)
	shell_shatter(0.1)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.30)
        pierce_body__kill_gunner(0.15)
        pierce_body__kill_driver(1.00)
        pierce_body__kill_commander(0.15)
        pierce_body__kill_gunner2(0.15)
    ;--------------------------
        pierce_turret__kill_charger(0.15)
        pierce_turret__kill_gunner(1.00)
        pierce_turret__kill_driver(0.15)
        pierce_turret__kill_commander(0.30)
        pierce_turret__kill_gunner2(0.30)
    )
	;///////////////////////////////////////////////////////// 50to57 APRC
   ("damage_process_pierce"
        staff(shell_small_apcr)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(1.00)
        pierce_left_right_track(0.90)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.30)
	pierce_internal_damage(0.25)
	pierce_body__ammo_fire(0.02)
	pierce_turret__ammo_fire(0.02)

	pierce_transmission_break(0.30)
	pierce_turret_drive_break(0.30)
	pierce_gun_drive_break(0.25)
	pierce_gun_breech(0.25)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.05)
        pierce_body__body_destroy(0)
    ;--------------------------
		  crew_shock_time(8.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0.05)

	pierce_mantlet__gun_destroy(0.08)
	pierce_turret__gun_destroy(0.03)

        pierce_turret_front__turret_brake(0.25)
        pierce_turret_back__turret_brake(0.25)
        pierce_turret_left_right__turret_brake(0.25)

        pierce_turret_front__gun_brake(0.25) pierce_mantlet__gun_brake(0.30)
        pierce_turret_back__gun_brake(0.25)
        pierce_turret_left_right__gun_brake(0.25)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.30)
	pierce_engine__fuel_leak(0.7)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.30)
        pierce_body__kill_gunner(0.15)
        pierce_body__kill_driver(1.00)
        pierce_body__kill_commander(0.15)
        pierce_body__kill_gunner2(0.15)
    ;--------------------------
        pierce_turret__kill_charger(0.15)
        pierce_turret__kill_gunner(1.00)
        pierce_turret__kill_driver(0.15)
        pierce_turret__kill_commander(0.30)
        pierce_turret__kill_gunner2(0.30)
    )
    ;///////////////////////////////////////////////////////// 50to57
   ("damage_process_pierce"
        staff(shell_small)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(1.00)
        pierce_left_right_track(0.90)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.60)
	pierce_internal_damage(0.40)
	pierce_body__ammo_fire(0.1)
	pierce_turret__ammo_fire(0.1)

	pierce_transmission_break(0.45)
	pierce_turret_drive_break(0.45)
	pierce_gun_drive_break(0.35)
	pierce_gun_breech(0.35)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.15)
        pierce_body__body_destroy(0.05)
    ;--------------------------
		  crew_shock_time(8.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0.15)

	pierce_mantlet__gun_destroy(0.08)
	pierce_turret__gun_destroy(0.03)

        pierce_turret_front__turret_brake(0.25)
        pierce_turret_back__turret_brake(0.25)
        pierce_turret_left_right__turret_brake(0.25)

        pierce_turret_front__gun_brake(0.25) pierce_mantlet__gun_brake(0.30)
        pierce_turret_back__gun_brake(0.25)
        pierce_turret_left_right__gun_brake(0.25)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.30)
	pierce_engine__fuel_leak(0.7)
	shell_shatter(0.1)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.30)
        pierce_body__kill_gunner(0.15)
        pierce_body__kill_driver(1.00)
        pierce_body__kill_commander(0.15)
        pierce_body__kill_gunner2(0.15)
    ;--------------------------
        pierce_turret__kill_charger(0.15)
        pierce_turret__kill_gunner(1.00)
        pierce_turret__kill_driver(0.15)
        pierce_turret__kill_commander(0.30)
        pierce_turret__kill_gunner2(0.30)
    )
   ;///////////////////////////////////////////////////////// 75-76 no HE filler
    ("damage_process_pierce"
        staff(shell_medium_no_filler)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(0.50)
        pierce_left_right_track(0.40)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.65)
	pierce_internal_damage(0.55)
	pierce_body__ammo_fire(0.10)
	pierce_turret__ammo_fire(0.08)

	pierce_transmission_break(0.55)
	pierce_turret_drive_break(0.55)
	pierce_gun_drive_break(0.50)
	pierce_gun_breech(0.50)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.20)
        pierce_body__body_destroy(0.10)	
    ;--------------------------
		  crew_shock_time(10.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0.20)

	pierce_mantlet__gun_destroy(0.13)
	pierce_turret__gun_destroy(0.08)

        pierce_turret_front__turret_brake(0.30)
        pierce_turret_back__turret_brake(0.30)
        pierce_turret_left_right__turret_brake(0.30)

        pierce_turret_front__gun_brake(0.30) pierce_mantlet__gun_brake(0.35)
        pierce_turret_back__gun_brake(0.30)
        pierce_turret_left_right__gun_brake(0.30)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.30)
	pierce_engine__fuel_leak(0.5)
	shell_shatter(0.075)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.20)
        pierce_body__kill_gunner(0.15)
        pierce_body__kill_driver(0.75)
        pierce_body__kill_commander(0.15)
        pierce_body__kill_gunner2(0.15)
    ;--------------------------
        pierce_turret__kill_charger(0.15)
        pierce_turret__kill_gunner(0.90)
        pierce_turret__kill_driver(0.15)
        pierce_turret__kill_commander(0.20)
        pierce_turret__kill_gunner2(0.20)
    )
    ;///////////////////////////////////////////////////////// 75to76 APCR/HVAP/APDS
   ("damage_process_pierce"
        staff(shell_medium_apcr)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(0.50)
        pierce_left_right_track(0.40)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.50)
	pierce_internal_damage(0.35)
	pierce_body__ammo_fire(0.05)
	pierce_turret__ammo_fire(0.05)

	pierce_transmission_break(0.45)
	pierce_turret_drive_break(0.45)
	pierce_gun_drive_break(0.40)
	pierce_gun_breech(0.40)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.03)
        pierce_body__body_destroy(0.03)	
    ;--------------------------
		  crew_shock_time(10.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0.10)

	pierce_mantlet__gun_destroy(0.15)
	pierce_turret__gun_destroy(0.10)

        pierce_turret_front__turret_brake(0.10)
        pierce_turret_back__turret_brake(0.10)
        pierce_turret_left_right__turret_brake(0.10)

        pierce_turret_front__gun_brake(0.18) pierce_mantlet__gun_brake(0.23)
        pierce_turret_back__gun_brake(0.13)
        pierce_turret_left_right__gun_brake(0.13)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.2)
	pierce_engine__fuel_leak(0.3)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.30)
        pierce_body__kill_gunner(0.20)
        pierce_body__kill_driver(1.00)
        pierce_body__kill_commander(0.20)
        pierce_body__kill_gunner2(0.20)
    ;--------------------------
        pierce_turret__kill_charger(0.20)
        pierce_turret__kill_gunner(1.00)
        pierce_turret__kill_driver(0.20)
        pierce_turret__kill_commander(0.35)
        pierce_turret__kill_gunner2(0.35)
    )
    ;///////////////////////////////////////////////////////// 75to76
   ("damage_process_pierce"
        staff(shell_medium)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(1.00)
        pierce_left_right_track(1.00)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.70)
	pierce_internal_damage(0.60)
	pierce_body__ammo_fire(0.13)
	pierce_turret__ammo_fire(0.10)

	pierce_transmission_break(0.65)
	pierce_turret_drive_break(0.65)
	pierce_gun_drive_break(0.60)
	pierce_gun_breech(0.60)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.15)
        pierce_body__body_destroy(0.15)
    ;--------------------------
		  crew_shock_time(10.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0.05)
	pierce_turret__turret_destroy(0.15)

	pierce_mantlet__gun_destroy(0.25)
	pierce_turret__gun_destroy(0.20)

        pierce_turret_front__turret_brake(0.30)
        pierce_turret_back__turret_brake(0.30)
        pierce_turret_left_right__turret_brake(0.30)

        pierce_turret_front__gun_brake(0.30) pierce_mantlet__gun_brake(0.35)
        pierce_turret_back__gun_brake(0.30)
        pierce_turret_left_right__gun_brake(0.30)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.35)
	pierce_engine__fuel_leak(0.8)
	shell_shatter(0.075)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.35)
        pierce_body__kill_gunner(0.20)
        pierce_body__kill_driver(1.00)
        pierce_body__kill_commander(0.20)
        pierce_body__kill_gunner2(0.20)
    ;--------------------------
        pierce_turret__kill_charger(0.20)
        pierce_turret__kill_gunner(1.00)
        pierce_turret__kill_driver(0.20)
        pierce_turret__kill_commander(0.35)
        pierce_turret__kill_gunner2(0.35)
    )
    ;///////////////////////////////////////////////////////// 75to76 HEAT
   ("damage_process_pierce"
        staff(heat_small)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(0.50)
        pierce_left_right_track(0.40)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.70)
	pierce_internal_damage(0.60)
	pierce_body__ammo_fire(0.15)
	pierce_turret__ammo_fire(0.15)

	pierce_transmission_break(0.35)
	pierce_turret_drive_break(0.35)
	pierce_gun_drive_break(0.30)
	pierce_gun_breech(0.30)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0)
        pierce_body__body_destroy(0)	
    ;--------------------------
		  crew_shock_time(10.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0)

	pierce_mantlet__gun_destroy(0)
	pierce_turret__gun_destroy(0)

        pierce_turret_front__turret_brake(0.10)
        pierce_turret_back__turret_brake(0.10)
        pierce_turret_left_right__turret_brake(0.10)

        pierce_turret_front__gun_brake(0.15) pierce_mantlet__gun_brake(0.15)
        pierce_turret_back__gun_brake(0.15)
        pierce_turret_left_right__gun_brake(0.15)

    ;---------------------------
        pierce_engine__engine_brake(0.50)
        pierce_engine__engine_burn(0.50)
	pierce_engine__fuel_leak(0.8)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.55)
        pierce_body__kill_gunner(0.55)
        pierce_body__kill_driver(1.00)
        pierce_body__kill_commander(0.55)
        pierce_body__kill_gunner2(0.55)
    ;--------------------------
        pierce_turret__kill_charger(0.85)
        pierce_turret__kill_gunner(1.00)
        pierce_turret__kill_driver(0.55)
        pierce_turret__kill_commander(0.65)
        pierce_turret__kill_gunner2(0.65)
    )
    ;///////////////////////////////////////////////////////// 85to105 APCR
   ("damage_process_pierce"
        staff(shell_big_apcr)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(0.60)
        pierce_left_right_track(0.50)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.60)
	pierce_internal_damage(0.40)
	pierce_body__ammo_fire(0.1)
	pierce_turret__ammo_fire(0.1)

	pierce_transmission_break(0.60)
	pierce_turret_drive_break(0.60)
	pierce_gun_drive_break(0.55)
	pierce_gun_breech(0.55)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0)
        pierce_body__body_destroy(0)
    ;--------------------------
		  crew_shock_time(12.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0.13)

	pierce_mantlet__gun_destroy(0.25)
	pierce_turret__gun_destroy(0.15)

        pierce_turret_front__turret_brake(0.20)
        pierce_turret_back__turret_brake(0.20)
        pierce_turret_left_right__turret_brake(0.20)

        pierce_turret_front__gun_brake(0.25) pierce_mantlet__gun_brake(0.30)
        pierce_turret_back__gun_brake(0.20)
        pierce_turret_left_right__gun_brake(0.20)

    ;---------------------------
        pierce_engine__engine_brake(0.75)
        pierce_engine__engine_burn(0.20)
	pierce_engine__fuel_leak(0.30)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.45)
        pierce_body__kill_gunner(0.45)
        pierce_body__kill_driver(1.00)
        pierce_body__kill_commander(0.40)
        pierce_body__kill_gunner2(0.75)
    ;--------------------------
        pierce_turret__kill_charger(0.75)
        pierce_turret__kill_gunner(1.00)
        pierce_turret__kill_driver(0.45)
        pierce_turret__kill_commander(0.65)
        pierce_turret__kill_gunner2(0.45)
    )
    ;///////////////////////////////////////////////////////// 85to105
   ("damage_process_pierce"
        staff(shell_big)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(1.00)
        pierce_left_right_track(1.00)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.90)
	pierce_internal_damage(0.90)
	pierce_body__ammo_fire(0.18)
	pierce_turret__ammo_fire(0.13)

	pierce_transmission_break(0.90)
	pierce_turret_drive_break(0.90)
	pierce_gun_drive_break(0.85)
	pierce_gun_breech(0.85)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.20)
        pierce_body__body_destroy(0.20)
    ;--------------------------
		  crew_shock_time(12.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0.20)
	pierce_turret__turret_destroy(0.20)

	pierce_mantlet__gun_destroy(0.30)
	pierce_turret__gun_destroy(0.25)

        pierce_turret_front__turret_brake(0.40)
        pierce_turret_back__turret_brake(0.40)
        pierce_turret_left_right__turret_brake(0.40)

        pierce_turret_front__gun_brake(0.30) pierce_mantlet__gun_brake(0.35)
        pierce_turret_back__gun_brake(0.30)
        pierce_turret_left_right__gun_brake(0.30)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.40)
	pierce_engine__fuel_leak(1)
	shell_shatter(0.025)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.40)
        pierce_body__kill_gunner(0.25)
        pierce_body__kill_driver(1.00)
        pierce_body__kill_commander(0.25)
        pierce_body__kill_gunner2(0.25)
    ;--------------------------
        pierce_turret__kill_charger(0.25)
        pierce_turret__kill_gunner(1.00)
        pierce_turret__kill_driver(0.25)
        pierce_turret__kill_commander(0.40)
        pierce_turret__kill_gunner2(0.40)
    )
    ;///////////////////////////////////////////////////////// 85to105, ger 37to50 HEAT
   ("damage_process_pierce"
        staff(heat_medium)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(0.50)
        pierce_left_right_track(0.40)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.95)
	pierce_internal_damage(0.90)
	pierce_body__ammo_fire(0.20)
	pierce_turret__ammo_fire(0.18)

	pierce_transmission_break(0.40)
	pierce_turret_drive_break(0.40)
	pierce_gun_drive_break(0.35)
	pierce_gun_breech(0.35)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.3)
        pierce_body__body_destroy(0)	
    ;--------------------------
		  crew_shock_time(12.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0)

	pierce_mantlet__gun_destroy(0)
	pierce_turret__gun_destroy(0)

        pierce_turret_front__turret_brake(0.10)
        pierce_turret_back__turret_brake(0.10)
        pierce_turret_left_right__turret_brake(0.10)

        pierce_turret_front__gun_brake(0.2) pierce_mantlet__gun_brake(0.2)
        pierce_turret_back__gun_brake(0.2)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(0.50)
        pierce_engine__engine_burn(0.50)
	pierce_engine__fuel_leak(1)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.65)
        pierce_body__kill_gunner(0.65)
        pierce_body__kill_driver(1.00)
        pierce_body__kill_commander(0.65)
        pierce_body__kill_gunner2(0.65)
    ;--------------------------
        pierce_turret__kill_charger(0.95)
        pierce_turret__kill_gunner(1.00)
        pierce_turret__kill_driver(0.65)
        pierce_turret__kill_commander(0.75)
        pierce_turret__kill_gunner2(0.75)
    )
    ;///////////////////////////////////////////////////////// 122to128
   ("damage_process_pierce"
        staff(shell_verybig)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(1.00)
        pierce_left_right_track(1.00)
        pierce_inventory__explosive(0)

	pierce_crew_bail(1)
	pierce_internal_damage(1)
	pierce_body__ammo_fire(0.2)
	pierce_turret__ammo_fire(0.18)

	pierce_transmission_break(1.00)
	pierce_turret_drive_break(1.00)
	pierce_gun_drive_break(0.95)
	pierce_gun_breech(0.95)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.05)
        pierce_body__body_destroy(0.80)
    ;--------------------------
		  crew_shock_time(14.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0.50)
	pierce_turret__turret_destroy(0.80)

	pierce_mantlet__gun_destroy(0.80)
	pierce_turret__gun_destroy(0.60)

        pierce_turret_front__turret_brake(0.60)
        pierce_turret_back__turret_brake(0.60)
        pierce_turret_left_right__turret_brake(0.60)

        pierce_turret_front__gun_brake(0.45) pierce_mantlet__gun_brake(0.50)
        pierce_turret_back__gun_brake(0.45)
        pierce_turret_left_right__gun_brake(0.45)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.45)
	pierce_engine__fuel_leak(1)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.45)
        pierce_body__kill_gunner(0.30)
        pierce_body__kill_driver(1.00)
        pierce_body__kill_commander(0.30)
        pierce_body__kill_gunner2(0.30)
    ;--------------------------
        pierce_turret__kill_charger(0.30)
        pierce_turret__kill_gunner(1.00)
        pierce_turret__kill_driver(0.30)
        pierce_turret__kill_commander(0.45)
        pierce_turret__kill_gunner2(0.45)
    )
    ;///////////////////////////////////////////////////////// 120to152 HEAT
   ("damage_process_pierce"
        staff(heat_big)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(0.90)
        pierce_left_right_track(0.60)
        pierce_inventory__explosive(0)

	pierce_crew_bail(1.00)
	pierce_internal_damage(1.00)
	pierce_body__ammo_fire(0.30)
	pierce_turret__ammo_fire(0.25)

	pierce_transmission_break(0.70)
	pierce_turret_drive_break(0.70)
	pierce_gun_drive_break(0.65)
	pierce_gun_breech(0.65)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.3)
        pierce_body__body_destroy(0.6)	
    ;--------------------------
		  crew_shock_time(12.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0)

	pierce_mantlet__gun_destroy(0)
	pierce_turret__gun_destroy(0)

        pierce_turret_front__turret_brake(0.30)
        pierce_turret_back__turret_brake(0.30)
        pierce_turret_left_right__turret_brake(0.30)

        pierce_turret_front__gun_brake(0.4) pierce_mantlet__gun_brake(0.4)
        pierce_turret_back__gun_brake(0.4)
        pierce_turret_left_right__gun_brake(0.4)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.50)
	pierce_engine__fuel_leak(1)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.80)
        pierce_body__kill_gunner(0.80)
        pierce_body__kill_driver(1.00)
        pierce_body__kill_commander(0.80)
        pierce_body__kill_gunner2(0.80)
    ;--------------------------
        pierce_turret__kill_charger(1.00)
        pierce_turret__kill_gunner(1.00)
        pierce_turret__kill_driver(0.80)
        pierce_turret__kill_commander(0.90)
        pierce_turret__kill_gunner2(0.90)
    )
    ;///////////////////////////////////////////////////////// 150to152
   ("damage_process_pierce"
        staff(shell_maximum)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1.00)
        pierce_front_back_track(1.00)
        pierce_left_right_track(1.00)
        pierce_inventory__explosive(0)

	pierce_crew_bail(1)
	pierce_internal_damage(1)
	pierce_body__ammo_fire(0.25)
	pierce_turret__ammo_fire(0.25)

	pierce_transmission_break(1.00)
	pierce_turret_drive_break(1.00)
	pierce_gun_drive_break(1.00)
	pierce_gun_breech(1.00)
    ;--------------------------
        pierce_body__burn(0)
        pierce_body__body_brake(0.00)
        pierce_body__body_destroy(1.00)
    ;--------------------------
		  crew_shock_time(15.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(1.00)
	pierce_turret__turret_destroy(0)

	pierce_mantlet__gun_destroy(1.00)
	pierce_turret__gun_destroy(0.80)

        pierce_turret_front__turret_brake(1.00)
        pierce_turret_back__turret_brake(1.00)
        pierce_turret_left_right__turret_brake(1.00)

        pierce_turret_front__gun_brake(1.00) pierce_mantlet__gun_brake(1.00)
        pierce_turret_back__gun_brake(1.00)
        pierce_turret_left_right__gun_brake(1.00)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.50)
	pierce_engine__fuel_leak(1)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.50)
        pierce_body__kill_gunner(0.35)
        pierce_body__kill_driver(1.00)
        pierce_body__kill_commander(0.35)
        pierce_body__kill_gunner2(0.35)
    ;--------------------------
        pierce_turret__kill_charger(0.35)
        pierce_turret__kill_gunner(1.00)
        pierce_turret__kill_driver(0.35)
        pierce_turret__kill_commander(0.50)
        pierce_turret__kill_gunner2(0.50)
    )
	
	
    ;///////////////////////////////////////////////////////// cumulative
   ("damage_process_pierce"
        staff(cumulative_charge)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0)
        pierce_front_back_track(1.00)
        pierce_left_right_track(1.00)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0)
	pierce_internal_damage(0.60)
	pierce_body__ammo_fire(0)
	pierce_turret__ammo_fire(0)

	pierce_transmission_break(0.20)
	pierce_turret_drive_break(0.25)
	pierce_gun_drive_break(0.15)
	pierce_gun_breech(0.15)
    ;--------------------------
        pierce_body__burn(0.70)
        pierce_body__body_brake(0.30)
        pierce_body__body_destroy(1.00)
    ;--------------------------
		crew_shock_time(8.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0)

	pierce_mantlet__gun_destroy(0)
	pierce_turret__gun_destroy(0)

        pierce_turret_front__turret_brake(0.40)
        pierce_turret_back__turret_brake(0.40)
        pierce_turret_left_right__turret_brake(0.40)

        pierce_turret_front__gun_brake(1.00) pierce_mantlet__gun_brake(1.00)
        pierce_turret_back__gun_brake(0.60)
        pierce_turret_left_right__gun_brake(0.60)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.90)
	pierce_engine__fuel_leak(1)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.60)
        pierce_body__kill_gunner(0.30)
        pierce_body__kill_driver(0.60)
        pierce_body__kill_commander(0.30)
        pierce_body__kill_gunner2(0.30)
    ;--------------------------
        pierce_turret__kill_charger(0.30)
        pierce_turret__kill_gunner(0.60)
        pierce_turret__kill_driver(0.30)
        pierce_turret__kill_commander(0.60)
        pierce_turret__kill_gunner2(0.60)
    )
    ;///////////////////////////////////////////////////////// cumulative_tiny
   ("damage_process_pierce"
        staff(cumulative_tiny)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0)
        pierce_front_back_track(1.00)
        pierce_left_right_track(1.00)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.60)
	pierce_internal_damage(0.60)
	pierce_body__ammo_fire(0.10)
	pierce_turret__ammo_fire(0.05)

	pierce_transmission_break(0.10)
	pierce_turret_drive_break(0.15)
	pierce_gun_drive_break(0.10)
	pierce_gun_breech(0.10)
    ;--------------------------
        pierce_body__burn(0.50)
        pierce_body__body_brake(0)
        pierce_body__body_destroy(0)
    ;--------------------------
		crew_shock_time(7.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0)

	pierce_mantlet__gun_destroy(0)
	pierce_turret__gun_destroy(0)

        pierce_turret_front__turret_brake(0.1)
        pierce_turret_back__turret_brake(0.1)
        pierce_turret_left_right__turret_brake(0.1)

        pierce_turret_front__gun_brake(0.2) pierce_mantlet__gun_brake(0.2)
        pierce_turret_back__gun_brake(0.2)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.70)
	pierce_engine__fuel_leak(0.8)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.40)
        pierce_body__kill_gunner(0.10)
        pierce_body__kill_driver(0.40)
        pierce_body__kill_commander(0.10)
        pierce_body__kill_gunner2(0.10)
    ;--------------------------
        pierce_turret__kill_charger(0.10)
        pierce_turret__kill_gunner(0.40)
        pierce_turret__kill_driver(0.10)
        pierce_turret__kill_commander(0.40)
        pierce_turret__kill_gunner2(0.40)
    )
    ;///////////////////////////////////////////////////////// cumulative_small
   ("damage_process_pierce"
        staff(cumulative_small)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0)
        pierce_front_back_track(1.00)
        pierce_left_right_track(1.00)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.70)
	pierce_internal_damage(0.70)
	pierce_body__ammo_fire(0.14)
	pierce_turret__ammo_fire(0.09)

	pierce_transmission_break(0.15)
	pierce_turret_drive_break(0.20)
	pierce_gun_drive_break(0.15)
	pierce_gun_breech(0.15)
    ;--------------------------
        pierce_body__burn(0.60)
        pierce_body__body_brake(0)
        pierce_body__body_destroy(0)
    ;--------------------------
		crew_shock_time(8.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0)

	pierce_mantlet__gun_destroy(0)
	pierce_turret__gun_destroy(0)

        pierce_turret_front__turret_brake(0.1)
        pierce_turret_back__turret_brake(0.1)
        pierce_turret_left_right__turret_brake(0.1)

        pierce_turret_front__gun_brake(0.2) pierce_mantlet__gun_brake(0.2)
        pierce_turret_back__gun_brake(0.2)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.80)
	pierce_engine__fuel_leak(0.9)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.50)
        pierce_body__kill_gunner(0.20)
        pierce_body__kill_driver(0.50)
        pierce_body__kill_commander(0.20)
        pierce_body__kill_gunner2(0.20)
    ;--------------------------
        pierce_turret__kill_charger(0.20)
        pierce_turret__kill_gunner(0.50)
        pierce_turret__kill_driver(0.20)
        pierce_turret__kill_commander(0.50)
        pierce_turret__kill_gunner2(0.50)
    )
    ;///////////////////////////////////////////////////////// cumulative
   ("damage_process_pierce"
        staff(cumulative)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0)
        pierce_front_back_track(1.00)
        pierce_left_right_track(1.00)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.80)
	pierce_internal_damage(0.80)
	pierce_body__ammo_fire(0.18)
	pierce_turret__ammo_fire(0.13)

	pierce_transmission_break(0.20)
	pierce_turret_drive_break(0.25)
	pierce_gun_drive_break(0.20)
	pierce_gun_breech(0.20)
    ;--------------------------
        pierce_body__burn(0.70)
        pierce_body__body_brake(0)
        pierce_body__body_destroy(0)
    ;--------------------------
		crew_shock_time(9.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0)

	pierce_mantlet__gun_destroy(0)
	pierce_turret__gun_destroy(0)

        pierce_turret_front__turret_brake(0.1)
        pierce_turret_back__turret_brake(0.1)
        pierce_turret_left_right__turret_brake(0.1)

        pierce_turret_front__gun_brake(0.2) pierce_mantlet__gun_brake(0.2)
        pierce_turret_back__gun_brake(0.2)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.90)
	pierce_engine__fuel_leak(1)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.60)
        pierce_body__kill_gunner(0.30)
        pierce_body__kill_driver(0.60)
        pierce_body__kill_commander(0.30)
        pierce_body__kill_gunner2(0.30)
    ;--------------------------
        pierce_turret__kill_charger(0.30)
        pierce_turret__kill_gunner(0.60)
        pierce_turret__kill_driver(0.30)
        pierce_turret__kill_commander(0.60)
        pierce_turret__kill_gunner2(0.60)
    )
	;///////////////////////////////////////////////////////// cumulative_big
   ("damage_process_pierce"
        staff(cumulative_big)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0)
        pierce_front_back_track(1.00)
        pierce_left_right_track(1.00)
        pierce_inventory__explosive(0)

	pierce_crew_bail(0.80)
	pierce_internal_damage(0.90)
	pierce_body__ammo_fire(0.22)
	pierce_turret__ammo_fire(0.17)

	pierce_transmission_break(0.25)
	pierce_turret_drive_break(0.30)
	pierce_gun_drive_break(0.25)
	pierce_gun_breech(0.25)
    ;--------------------------
        pierce_body__burn(0.90)
        pierce_body__body_brake(0)
        pierce_body__body_destroy(0)
    ;--------------------------
		crew_shock_time(10.00)
    ;--------------------------
        pierce_turret__explosive(0)
	pierce_turret__tear(0)
	pierce_turret__turret_destroy(0)

	pierce_mantlet__gun_destroy(0)
	pierce_turret__gun_destroy(0)

        pierce_turret_front__turret_brake(0.1)
        pierce_turret_back__turret_brake(0.1)
        pierce_turret_left_right__turret_brake(0.1)

        pierce_turret_front__gun_brake(0.2) pierce_mantlet__gun_brake(0.2)
        pierce_turret_back__gun_brake(0.2)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(1.00)
        pierce_engine__engine_burn(0.95)
	pierce_engine__fuel_leak(1)
	shell_shatter(0)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.70)
        pierce_body__kill_gunner(0.40)
        pierce_body__kill_driver(0.70)
        pierce_body__kill_commander(0.40)
        pierce_body__kill_gunner2(0.40)
    ;--------------------------
        pierce_turret__kill_charger(0.40)
        pierce_turret__kill_gunner(0.70)
        pierce_turret__kill_driver(0.40)
        pierce_turret__kill_commander(0.70)
        pierce_turret__kill_gunner2(0.70)
    )

}; end of pierce
;=================================================================================================================================================
{on bullet_hit
    ;{if stuff "size_minimum"
    ;    ("blind" args 1)
    ;else stuff "size_small"
    ;    ("blind" args 2)
    ;else stuff "size_big"
    ;    ("blind" args 3)
    ;}

                    ;{if stuff "big shell extra"
                    ;    ;{ani_play "hit"}
                    ;else stuff "big shell"
                    ;    ;{ani_play "hit"}
                    ;}
    ;///////////////////////////////////////////////////////// 150to152
    ("damage_process_bullet_hit"
       staff(shell_maximum fg)

        hit_body__explosive(0)
        hit_body__engine_burn(0)
        hit_body__body_destroy(1)
        hit_body__body_brake(0)

	hit_tank__inter_spall(0)
        hit_tank__kill_charger(0)
        hit_tank__kill_gunner(0)
        hit_tank__kill_driver(0)
        hit_tank__kill_commander(0)
        hit_tank__kill_gunner2(0)

	hit_body__ammo_fire(0)
	hit_turret__ammo_fire(0)
        ;--------------------------
        hit_body__engine_brake(0)
	crew_shock_time(11)
        ;--------------------------
        hit_turret__explosive(0)
        hit_turret_front__gun_brake(0)
        hit_turret__turret_destroy(0.80)
        hit_turret__turret_brake(0)
        imp(0)
        hit_tank__tank_destroy(1.00)
        hit_engine__engine_brake(0)
    )
    ("damage_process_bullet_hit"
       staff(shell_verybig fg)

        hit_body__explosive(0)
        hit_body__engine_burn(0)
        hit_body__body_destroy(1)
        hit_body__body_brake(0)

	hit_tank__inter_spall(0)
        hit_tank__kill_charger(0)
        hit_tank__kill_gunner(0)
        hit_tank__kill_driver(0)
        hit_tank__kill_commander(0)
        hit_tank__kill_gunner2(0)

	hit_body__ammo_fire(0)
	hit_turret__ammo_fire(0)
        ;--------------------------
        hit_body__engine_brake(0)
	crew_shock_time(10)
        ;--------------------------
        hit_turret__explosive(0)
        hit_turret_front__gun_brake(0)
        hit_turret__turret_destroy(0.50)
        hit_turret__turret_brake(0)
        imp(0)
        hit_tank__tank_destroy(1.00)
        hit_engine__engine_brake(0)
    )
    ("damage_process_bullet_hit"
       staff(shell_big fg)

        hit_body__explosive(0)
        hit_body__engine_burn(0)
        hit_body__body_destroy(0.8)
        hit_body__body_brake(0)

	hit_tank__inter_spall(0.7)
        hit_tank__kill_charger(0.7)
        hit_tank__kill_gunner(0.7)
        hit_tank__kill_driver(0.7)
        hit_tank__kill_commander(0.7)
        hit_tank__kill_gunner2(0.7)

	hit_body__ammo_fire(0.20)
	hit_turret__ammo_fire(0.20)
        ;--------------------------
        hit_body__engine_brake(0)
	crew_shock_time(8)
        ;--------------------------
        hit_turret__explosive(0)
        hit_turret_front__gun_brake(0)
        hit_turret__turret_destroy(0.20)
        hit_turret__turret_brake(0.70)
        imp(0)
        hit_tank__tank_destroy(1.00)
        hit_engine__engine_brake(0)
    )
    ("damage_process_bullet_hit"
       staff(highvel_verybig)

        hit_body__explosive(0)
        hit_body__engine_burn(0.1)
        hit_body__body_destroy(0)
        hit_body__body_brake(0)

	hit_tank__inter_spall(0.80)
        hit_tank__kill_charger(0.6)
        hit_tank__kill_gunner(0.6)
        hit_tank__kill_driver(0.6)
        hit_tank__kill_commander(0.6)
        hit_tank__kill_gunner2(0.6)

	hit_body__ammo_fire(0.15)
	hit_turret__ammo_fire(0.10)
        ;--------------------------
        hit_body__engine_brake(0.4)
	crew_shock_time(9)
        ;--------------------------
        hit_turret__explosive(0)
        hit_turret_front__gun_brake(0)
        hit_turret__turret_destroy(0)
        hit_turret__turret_brake(0)
        imp(0)
        hit_tank__tank_destroy(0)
        hit_engine__engine_brake(0)
    )
    ("damage_process_bullet_hit"
       staff(highvel_big)

        hit_body__explosive(0)
        hit_body__engine_burn(0.1)
        hit_body__body_destroy(0)
        hit_body__body_brake(0)

	hit_tank__inter_spall(0.40)
        hit_tank__kill_charger(0.5)
        hit_tank__kill_gunner(0.5)
        hit_tank__kill_driver(0.5)
        hit_tank__kill_commander(0.5)
        hit_tank__kill_gunner2(0.5)

	hit_body__ammo_fire(0.15)
	hit_turret__ammo_fire(0.10)
        ;--------------------------
        hit_body__engine_brake(0.4)
	crew_shock_time(8)
        ;--------------------------
        hit_turret__explosive(0)
        hit_turret_front__gun_brake(0)
        hit_turret__turret_destroy(0)
        hit_turret__turret_brake(0)
        imp(0)
        hit_tank__tank_destroy(0)
        hit_engine__engine_brake(0)
    )
    ("damage_process_bullet_hit"
       staff(highvel_medium)

        hit_body__explosive(0)
        hit_body__engine_burn(0.1)
        hit_body__body_destroy(0)
        hit_body__body_brake(0)

	hit_tank__inter_spall(0.25)
        hit_tank__kill_charger(0.3)
        hit_tank__kill_gunner(0.3)
        hit_tank__kill_driver(0.3)
        hit_tank__kill_commander(0.3)
        hit_tank__kill_gunner2(0.3)

	hit_body__ammo_fire(0.10)
	hit_turret__ammo_fire(0.05)
        ;--------------------------
        hit_body__engine_brake(0.2)
	crew_shock_time(6)
        ;--------------------------
        hit_turret__explosive(0)
        hit_turret_front__gun_brake(0)
        hit_turret__turret_destroy(0)
        hit_turret__turret_brake(0)
        imp(0)
        hit_tank__tank_destroy(0)
        hit_engine__engine_brake(0)
    )
    ("damage_process_bullet_hit"
       staff(highvel_small)

        hit_body__explosive(0)
        hit_body__engine_burn(0)
        hit_body__body_destroy(0)
        hit_body__body_brake(0)

	hit_tank__inter_spall(0.20)
        hit_tank__kill_charger(0.20)
        hit_tank__kill_gunner(0.20)
        hit_tank__kill_driver(0.20)
        hit_tank__kill_commander(0.20)
        hit_tank__kill_gunner2(0.20)

	hit_body__ammo_fire(0.10)
	hit_turret__ammo_fire(0.05)
        ;--------------------------
        hit_body__engine_brake(0)
	crew_shock_time(5)
        ;--------------------------
        hit_turret__explosive(0)
        hit_turret_front__gun_brake(0)
        hit_turret__turret_destroy(0)
        hit_turret__turret_brake(0)
        imp(0)
        hit_tank__tank_destroy(0)
        hit_engine__engine_brake(0)
    )
    ("damage_process_bullet_hit"
       staff(shell_big fg)

        hit_body__explosive(0)
        hit_body__engine_burn(0)
        hit_body__body_destroy(0)
        hit_body__body_brake(0)

	hit_tank__inter_spall(0.25)
        hit_tank__kill_charger(0.3)
        hit_tank__kill_gunner(0.3)
        hit_tank__kill_driver(0.3)
        hit_tank__kill_commander(0.3)
        hit_tank__kill_gunner2(0.3)

	hit_body__ammo_fire(0.15)
	hit_turret__ammo_fire(0.10)
        ;--------------------------
        hit_body__engine_brake(0)
	crew_shock_time(8)
        ;--------------------------
        hit_turret__explosive(0)
        hit_turret_front__gun_brake(0)
        hit_turret__turret_destroy(0)
        hit_turret__turret_brake(0)
        imp(0)
        hit_tank__tank_destroy(0)
        hit_engine__engine_brake(0)
    )
}; end of bullet_hit

{on blast ;higher energy must be first
    ("blast_damage_contusion"
	blast_rand_contusion(1.00)
	blast_energy(8)
	blast_crew_shock_time(6.00)
    )
    ("blast_damage_contusion"
	blast_rand_contusion(1.00)
	blast_energy(6)
	blast_crew_shock_time(5.00)
    )
    ("blast_damage_contusion"
	blast_rand_contusion(1.00)
	blast_energy(4)
	blast_crew_shock_time(1.00)
    )
}