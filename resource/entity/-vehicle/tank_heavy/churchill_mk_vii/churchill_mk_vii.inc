;{game_entity
	(include "/properties/tank.ext")
	(include "/properties/selection/vehicle.inc"  scale(1.2))
	{collider "tank.heavy"}
	{props "heavy" "turret_rotator" "vision_vehicle_maximum" "muzzle_medium"}

	{extender "enumerator"}


	{Volume "body1"
		{tags "body"}
		{component "body"}
	}
	{Volume "body2"
		{tags "body"}
		{component "body"}
	}
	{Volume "body3"
		{tags "body"}
		{component "body"}
	}

	("armor_heavy" turret(152 95 95 20) body(152 95 51 20) body2(57 95 51 20) body3(140 95 51 25))
	("armor_engine"  t(10 95 51 20))
	("armor_mantlet" t(110))
	("eng_3x_sight")

	("shield" args 8)
	{extender "shield"
		{on}
	}

	{component "shieldl1" {tags "shield"}}
	{component "shieldl2" {tags "shield"}}
	{component "shieldr1" {tags "shield"}}
	{component "shieldr2" {tags "shield"}}

	
	
	("crew_4_human")

		{boarder
		{anm "left"
			{forward	{begin	"board_tank_left"} {end "pose_mgun_pz6"}}
			{reverse 	{end	"emit_tank_1_hold"}}
		}
		{anm "right"
			{forward	{begin	"board_tank_right"} {end "pose_mgun_pz6"}}
			{reverse 	{end	"emit_tank_1_hold"}}
		}
		{anm "armor"
			{forward	{begin	"board_lowArmor"} 	{end "pose_seat_armor_2"}}
			{reverse 	{end	"emit_tank_2"}}
		}
		{anm "armor1"
			{forward	{begin	"board_lowArmor"} {end "pose_seat_armor_2"}}
			{reverse 	{end	"emit_body"}}
		}
		{anm "armor2"
			{forward	{begin	"board_lowArmor"} {end "pose_seat_armor_1"}}
			{reverse 	{end	"emit_body"}}
		}
	}

	("crew_human_visible" 	place(gunner2)	door1(emit1) door2(emit2) visor(main))
	
	("seat_human" place(seat1) bone(seat01) door(emit3)  animation(armor1))
	("seat_human" place(seat2) bone(seat02) door(emit4)  animation(armor))
	("seat_human" place(seat3) bone(seat03) door(emit5)  animation(armor))
	("seat_human" place(seat4) bone(seat04) door(emit6)  animation(armor1))

	{mass 40500}
	{Chassis
		("tank_trace" fx("tracks_mid") step(0.52) len(0.2))
		{Locomotion ("locomotion")
			{MaxSpeed   15}
			{maxSpeedAtMaxTurn 4}
			{StartTime  25}
			{TurnStart  1.8}			
			{TurnTime   30}
			{TurnRadius 9} 
    		{TurnStop   0.8}
			{BrakeTime  2}
			{StopTime   3}
			{Gears 0.1 0.2 0.3 1}
			{RearGears  0.1 0.3}		
		}
		{FuelBag
			{volume 680 }	
			{rate	76 }   
			{remain 680 }
			{fuel "fuel"}
		}
		{speed
        	{Normal  10}
        	{Slow  16}
    	}
	}

;}

