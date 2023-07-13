(define "para_ammo"
	{extender "supply_zone"
		{resupply
			{item "rifle" "ammo" 25 {max 100}}
			{item "pistol" "ammo" 100 {max 200}}
			{item "stg" "ammo" 100 {max 180}}
			{item "carbine" "ammo" 25 {max 90}}
			{item "mgun" "ammo" 100	{max 300}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 10}}
			{item "bazooka" "ammo" 1 {max 6}}
			{item "panzershreck" "ammo" 1 {max 6}}
			{item "m18recoilless" "ammo" 1 {max 6}}
			{item "piatrocket" "ammo" 1	{max 6}}
			{item "type_4" "ammo" 1	{max 6}}
			{item "rifle_grenade" "ammo" 2 {max 5}}
			{item "rifle_grenade_at" "ammo" 2 {max 5}}
			{item "shotgun" "ammo" 3 {max 20}}
			{item "mortar" "fg" "ammo" 3 {max 30}{value 2}}
			{item "mortar60" "fg" "ammo" 5 {max 30}{value 2}}
			{item "mortar81" "fg" "ammo" 3 {max 30}{value 2}}
			{item "hmgun" "ammo" 30 {max 300}{value 2}}

			{item "mauser_clip" "mauser" "ammo" 20 {max 60}}
			{item "g43_mag" "mauser" "ammo" 20 {max 80}}
			{item "fg42_mag" "ammo" 20 {max 160}}
			{item "walther_mag" "ammo" 32 {max 32}}
			{item "mp28_mag" "ammo" 90 {max 180}}
			{item "mp28_50_mag" "ammo" 50 {max 150}}
			{item "mp40_mag" "ammo" 96 {max 192}}
			{item "stg44_mag" "ammo" 90 {max 180}}
			{item "mg_mauser" "drum" "ammo" 50 {max 300}}
			{item "mg_mauser" "belt" "ammo" 50 {max 300}}
			{item "zb30_mag" "ammo" 60 {max 300}}
			{item "k98_grenade" "fg" 1 {max 10}}
			{item "k98_grenade" "ap" 1 {max 5}}

			{item "arisaka6-5_clip" "ammo" 20 {max 60}}
			{item "arisaka7-7_clip" "ammo" 20 {max 60}}
			{item "nambu_mag" "ammo" 32 {max 32}}
			{item "type2_mag" "ammo" 50 {max 150}}
			{item "type100_mag" "ammo" 90 {max 180}}
			{item "type92_strip" "ammo" 60 {max 300}}
			{item "type96_mag" "ammo" 60 {max 300}}
			{item "type97_mag" "ammo" 60 {max 300}}
			{item "type99_mag" "ammo" 60 {max 300}}

			{item "garand_clip" "ammo" 20 {max 80}}
			{item "springfield_clip" "ammo" 20 {max 60}}
			{item "bar_mag" "ammo" 40 {max 240}}
			{item "m1941lmg_mag" "ammo" 40 {max 240}}
			{item "m1carbine_mag" "ammo" 30 {max 90}}
			{item "m2carbine_mag" "ammo" 30 {max 90}}
			{item "colt_mag" "ammo" 28 {max 28}}
			{item "hdm_mag" "ammo" 30 {max 30}}
			{item "m3a_mag" "ammo" 75 {max 150}}
			{item "thompson_drum" "ammo" 75 {max 150}}
			{item "thompson_m1a1_mag" "ammo" 75 {max 150}}
			{item "m50reising_mag" "ammo" 75 {max 150}}
			{item "springfield_belt" "ammo" 50 {max 250}}
			{item "m1garand_grenade" "fg" 1 {max 10}}
			{item "m1garand_grenade" "ap" 1 {max 5}}
			{item "m1garand_grenade" "wp" 1 {max 3}}

			{item "bren_mag" "ammo" 56 {max 224}}
			{item "british303_belt" "ammo" 50 {max 250}}
			{item "british303_clip" "ammo" 20 {max 60}}
			{item "lewis_mag" "ammo" 47 {max 235}}
			{item "vickersk_mag" "ammo" 96 {max 288}}
			{item "webley_clip" "ammo" 30 {max 30}}
			{item "welrod_mag" "ammo" 30 {max 30}}
			{item "sten_mag" "ammo" 64 {max 128}}
			{item "owen_mag" "ammo" 64 {max 128}}

			{item "mosin_clip" "ammo" 20 {max 60}}
			{item "dp27_mag" "ammo" 47 {max 235}}
			{item "dt29_mag" "ammo" 60 {max 240}}
			{item "nagant_clip" "ammo" 28 {max 28}}
			{item "tt_mag" "ammo" 32 {max 32}}
			{item "ppd40_mag" "ammo" 71 {max 213}}
			{item "ppsh_mag" "ammo" 71 {max 213}}
			{item "ppsh41_mag" "ammo" 70 {max 210}}
			{item "pps43_mag" "ammo" 70 {max 210}}
			{item "rus_mg_belt" "ammo" 50 {max 250}}
			{item "sks_clip" "ammo" 20 {max 60}}
			{item "svt40_mag" "ammo" 20 {max 60}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				100}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "truck_ammo"
	{extender "supply_zone"
		{resupply
			{item "rifle" "ammo" 25 {max 100}}
			{item "pistol" "ammo" 100 {max 200}}
			{item "stg" "ammo" 100 {max 180}}
			{item "carbine" "ammo" 25 {max 90}}
			{item "mgun" "ammo" 100	{max 300}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 25}}
			{item "bazooka" "ammo" 1 {max 6}}
			{item "panzershreck" "ammo" 1 {max 6}}
			{item "m18recoilless" "ammo" 1 {max 6}}
			{item "piatrocket" "ammo" 1 {max 6}}
			{item "type_4" "ammo" 1 {max 6}}
			{item "rifle_grenade" "ammo" 2 {max 10}}
			{item "rifle_grenade_at" "ammo" 2 {max 10}}
			{item "shotgun" "ammo" 5 {max 30}}
			{item "mortar" "fg" "ammo" 5 {max 30}{value 2}}
			{item "mortar60" "fg" "ammo" 5 {max 30}{value 2}}
			{item "mortar81" "fg" "ammo" 3 {max 30}{value 2}}
			{item "hmgun" "ammo" 50 {max 300}{value 2}}
		}
		{radius 			10}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				150}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "truck_ammo_art"
	{extender "supply_zone"
		{resupply
			{item "rifle" "ammo" 25 {max 100}}
			{item "pistol" "ammo" 100 {max 200}}
			{item "stg" "ammo" 100 {max 180}}
			{item "carbine" "ammo" 25 {max 90}}
			{item "mgun" "ammo" 100	{max 300}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 25}}
			{item "bazooka" "ammo" 1 {max 6}}
			{item "panzershreck" "ammo" 1 {max 6}}
			{item "m18recoilless" "ammo" 1 {max 6}}
			{item "piatrocket" "ammo" 1 {max 6}}
			{item "type_4" "ammo" 1 {max 6}}
			{item "rifle_grenade" "ammo" 2 {max 10}}
			{item "rifle_grenade_at" "ammo" 2 {max 10}}
			{item "shotgun" "ammo" 5 {max 30}}
			{item "mortar" "fg" "ammo" 5 {max 30}{value 2}}
			{item "mortar60" "fg" "ammo" 5 {max 30}{value 2}}
			{item "mortar81" "fg" "ammo" 3 {max 30}{value 2}}
			{item "mortar120" "fg" "ammo" 2 {max 30}{value 2}}
			{item "hmgun" "ammo" 50 {max 300}{value 2}}
			{item "mortar150" "fg" "ammo" 2 {max 15}{value 2}}
			;
			{item "bullet20" "zenite" "ap" "ammo" 10 {max 100}{value 2}}
			{item "bullet20" "zenite" "fg" "ammo" 10 {max 100}{value 2}}
			{item "bullet25" "zenite" "ap" "ammo" 10 {max 100}{value 2}}
			{item "bullet25" "zenite" "fg" "ammo" 10 {max 100}{value 2}}
			{item "bullet37" "zenite" "ap" "ammo" 10 {max 100}{value 2}}
			{item "bullet37" "zenite" "fg" "ammo" 10 {max 100}{value 2}}
			{item "bullet40" "zenite" "ap" "ammo" 10 {max 100}{value 2}}
			{item "bullet40" "zenite" "fg" "ammo" 10 {max 100}{value 2}}
			{item "bullet37" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet37" "ger" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet37" "ger" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet37" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet40" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet40" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet45" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet45" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet47" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet47" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet50" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet50" "ger" "apc" "ammo" 3 {max 30}{value 2}}
			{item "bullet50" "ger" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet50" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet57" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet57" "rus" "apc" "ammo" 3 {max 30}{value 2}}
			{item "bullet57" "rus" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet57" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet75" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "ger" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "gers" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "gerl" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "ger" "fg" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "gers" "fg" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "gerl" "fg" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet76" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet76" "us" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet76" "rus" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet76" "rus" "br350b" "ammo" 2 {max 20}{value 2}}
			{item "bullet76" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet77" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet77" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet85" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet85" "rus" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet85" "rus" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet85" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet88" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet88" "ger" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet88" "gerl" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet88" "ger" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet88" "gerl" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet88" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet89" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet89" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet90" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet90" "us" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet90" "usl" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet90" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet93" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet93" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet95" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet95" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet100" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet100" "rus" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet100" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet105" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet120" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet122" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet122" "rus" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet128" "ap" "ammo" 2 {max 15}{value 2}}
			{item "bullet128" "ger" "apc" "ammo" 2 {max 15}{value 2}}
			;
			{item "bullet105" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet120" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet122" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet122" "rus" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet128" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet128" "ger" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet150" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet152" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet155" "fg" "ammo" 1 {max 10}{value 5}}
			;
			{item "bullet203" "ammo" 1 {max 5}{value 5}}
			{item "bullet290" "ammo" 1 {max 5}{value 5}}
			;
			{item "calliope" "ammo" 5 {max 60}{value 5}}
			{item "lm_ammo" "ammo" 5 {max 32}{value 5}}
			{item "bm8" "ammo" 5 {max 24}{value 5}}
			{item "katusha" "ammo" 3 {max 16}{value 5}}
			{item "panzerwerfer42" "ammo" 2 {max 10}{value 5}}
			{item "nebel41" "ammo" 2 {max 12}{value 5}}
			{item "nebel42" "ammo" 2 {max 12}{value 5}}
			{item "nebel" "ammo" 2 {max 12}{value 5}}
			{item "20cm_rocket" "ammo" 2 {max 10}{value 5}}
			{item "tulip" "ammo" 2 {max 10}{value 5}}
			;
			{item "30cm_rocket" "ammo" 1 {max 5}{value 10}}
			{item "sturmtiger" "ammo" 1 {max 5}{value 10}}
		}
		{radius 			10}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				250}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "box_ammo_art"
	{extender "supply_zone"
		{resupply
			{item "mortar" "fg" "ammo" 5 {max 30}{value 2}}
			{item "mortar60" "fg" "ammo" 5 {max 30}{value 2}}
			{item "mortar81" "fg" "ammo" 3 {max 30}{value 2}}
			{item "mortar120" "fg" "ammo" 2 {max 30}{value 2}}
			{item "mortar150" "fg" "ammo" 2 {max 15}{value 2}}
			;
			{item "bullet20" "zenite" "ammo" 10 {max 100}{value 2}}
			{item "bullet20" "zenite" "fg" "ammo" 10 {max 100}{value 2}}
			{item "bullet25" "zenite" "ammo" 10 {max 100}{value 2}}
			{item "bullet25" "zenite" "fg" "ammo" 10 {max 100}{value 2}}
			{item "bullet37" "zenite" "ammo" 10 {max 100}{value 2}}
			{item "bullet37" "zenite" "fg" "ammo" 10 {max 100}{value 2}}
			{item "bullet40" "zenite" "ammo" 10 {max 100}{value 2}}
			{item "bullet40" "zenite" "fg" "ammo" 10 {max 100}{value 2}}
			{item "bullet37" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet37" "ger" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet37" "ger" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet37" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet40" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet40" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet45" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet45" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet47" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet47" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet50" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet50" "ger" "apc" "ammo" 3 {max 30}{value 2}}
			{item "bullet50" "ger" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet50" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet57" "ap" "ammo" 3 {max 30}{value 2}}
			{item "bullet57" "rus" "apc" "ammo" 3 {max 30}{value 2}}
			{item "bullet57" "rus" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet57" "fg" "ammo" 3 {max 25}{value 2}}
			{item "bullet75" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "ger" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "gers" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "gerl" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "ger" "fg" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "gers" "fg" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "gerl" "fg" "ammo" 2 {max 20}{value 2}}
			{item "bullet75" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet76" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet76" "us" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet76" "rus" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet76" "rus" "br350b" "ammo" 2 {max 20}{value 2}}
			{item "bullet76" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet77" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet77" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet85" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet85" "rus" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet85" "rus" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet85" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet88" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet88" "ger" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet88" "gerl" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet88" "ger" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet88" "gerl" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet88" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet89" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet89" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet90" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet90" "us" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet90" "usl" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet90" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet93" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet93" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet95" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet95" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet100" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet100" "rus" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet100" "fg" "ammo" 2 {max 15}{value 2}}
			{item "bullet105" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet120" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet122" "ap" "ammo" 2 {max 20}{value 2}}
			{item "bullet122" "rus" "apc" "ammo" 2 {max 20}{value 2}}
			{item "bullet128" "ap" "ammo" 2 {max 15}{value 2}}
			{item "bullet128" "ger" "apc" "ammo" 2 {max 15}{value 2}}
			;
			{item "bullet105" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet120" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet122" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet122" "rus" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet128" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet128" "ger" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet150" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet152" "fg" "ammo" 1 {max 10}{value 5}}
			{item "bullet155" "fg" "ammo" 1 {max 10}{value 5}}
			;
			{item "bullet203" "ammo" 1 {max 5}{value 5}}
			{item "bullet290" "ammo" 1 {max 5}{value 5}}
			;
			{item "calliope" "ammo" 5 {max 60}{value 5}}
			{item "lm_ammo" "ammo" 5 {max 32}{value 5}}
			{item "bm8" "ammo" 5 {max 24}{value 5}}
			{item "katusha" "ammo" 3 {max 16}{value 5}}
			{item "panzerwerfer42" "ammo" 2 {max 10}{value 5}}
			{item "nebel41" "ammo" 2 {max 12}{value 5}}
			{item "nebel42" "ammo" 2 {max 12}{value 5}}
			{item "nebel" "ammo" 2 {max 12}{value 5}}
			{item "20cm_rocket" "ammo" 2 {max 10}{value 5}}
			{item "tulip" "ammo" 2 {max 10}{value 5}}
			;
			{item "30cm_rocket" "ammo" 1 {max 5}{value 10}}
			{item "sturmtiger" "ammo" 1 {max 5}{value 10}}
		}
		{radius 			6}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				75}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

;###############################################################################
;####################	new ammo boxes/trucks	################################
;###############################################################################

;¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤	GERMAN		¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤
(define "truck_ammo_ger_art"
	{extender "supply_zone"
		{resupply
			{item "mauser_clip" "mauser" "ammo" 20 {max 60}}
			{item "g43_mag" "mauser" "ammo" 20 {max 80}}
			{item "fg42_mag" "ammo" 20 {max 160}}
			{item "walther_mag" "ammo" 32 {max 32}}
			{item "mp28_mag" "ammo" 90 {max 180}}
			{item "mp28_50_mag" "ammo" 50 {max 150}}
			{item "mp40_mag" "ammo" 96 {max 192}}
			{item "stg44_mag" "ammo" 90 {max 180}}
			{item "mg_mauser" "drum" "ammo" 100 {max 300}}
			{item "mg_mauser" "belt" "ammo" 100 {max 1500}}
			{item "zb30_mag" "ammo" 60 {max 600}}
			{item "k98_grenade" "fg" 1 {max 10}{value 2}}
			{item "k98_grenade" "ap" 1 {max 5}{value 2}}
			{item "mortar_flaer" "ammo" 1 {max 5}{value 15}}

			{item "rifle" "ammo" 20 {max 60}}
			{item "pistol" "ammo" 96 {max 192}}
			{item "stg" "ammo" 90 {max 180}}
			{item "mgun" "ammo" 100	{max 300}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "panzershreck" "ammo" 1 {max 6}}
			{item "mortar50" "ger" "fg" "ammo" 2 {max 100}{value 2}}
			{item "mortar81" "ger" "fg" "ammo" 2 {max 100}{value 3}}
			{item "mortar81" "ger" "sm" "ammo" 2 {max 100}{value 3}}
			{item "mortar120" "ger" "fg" "ammo" 1 {max 100}{value 6}}
			{item "mortar120" "ger" "sm" "ammo" 1 {max 100}{value 6}}
			;
			{item "bullet20" "ger" "zenite" "ap" "ammo" 10 {max 1000}{value 2}}
			{item "bullet20" "ger" "zenite" "fg" "ammo" 10 {max 1000}{value 2}}

			{item "bullet37" "ger" "zenite" "aphe" "ammo" 10 {max 1000}{value 2}}
			{item "bullet37" "ger" "zenite" "fg" "ammo" 10 {max 1000}{value 2}}

			{item "bullet37" "ger" "ap" "ammo" 3 {max 100}{value 3}}
			{item "bullet37" "ger" "fg" "ammo" 3 {max 100}{value 3}}

			{item "bullet50" "ger" "apc" "ammo" 3 {max 100}{value 3}}
			{item "bullet50" "ger" "fg" "ammo" 3 {max 100}{value 3}}

			{item "bullet50" "gerl" "apc" "ammo" 3 {max 100}{value 3}}
			{item "bullet50" "gerl" "fg" "ammo" 3 {max 100}{value 3}}

			{item "bullet75" "gerlg" "fg" "ammo" 2 {max 10}{value 3}}

			{item "bullet75" "gers" "apc" "ammo" 2 {max 50}{value 3}}
			{item "bullet75" "gers" "fg" "ammo" 2 {max 50}{value 3}}

			{item "bullet75" "ger" "apcbc" "ammo" 2 {max 50}{value 4}}
			{item "bullet75" "ger" "fg" "ammo" 2 {max 50}{value 4}}

			{item "bullet75" "gerp" "apcbc" "ammo" 2 {max 50}{value 5}}
			{item "bullet75" "gerp" "fg" "ammo" 2 {max 50}{value 5}}

			{item "bullet75" "gerl" "apcbc" "ammo" 2 {max 50}{value 5}}
			{item "bullet75" "gerl" "fg" "ammo" 2 {max 50}{value 5}}

			{item "bullet88" "ger" "apcbc" "ammo" 2 {max 50}{value 5}}
			{item "bullet88" "ger" "fg" "ammo" 2 {max 40}{value 5}}

			{item "bullet88" "gerl" "apcbc" "ammo" 2 {max 40}{value 6}}
			{item "bullet88" "gerl" "fg" "ammo" 2 {max 40}{value 6}}

			{item "bullet105" "ger" "apc" "ammo" 1 {max 10}{value 6}}
			{item "bullet105" "ger" "fg" "ammo" 1 {max 30}{value 6}}
			{item "bullet105" "ger" "sm" "ammo" 1 {max 9}{value 6}}

			{item "bullet128" "ger" "apc" "ammo" 1 {max 25}{value 10}}
			{item "bullet128" "ger" "apcbc" "ammo" 1 {max 25}{value 10}}
			{item "bullet128" "ger" "fg" "ammo" 1 {max 14}{value 10}}
			;
			{item "bullet150" "ger" "fg" "ammo" 1 {max 15}{value 15}}
			{item "bullet150" "ger" "sm" "ammo" 1 {max 6}{value 15}}
			{item "bullet150" "gers" "fg" "ammo" 1 {max 29}{value 15}}
			{item "bullet150" "gers" "sm" "ammo" 1 {max 6}{value 15}}
			{item "bullet210" "ammo" 1 {max 3}{value 40}}

			{item "nebel41" "fg" "ammo" 1 {max 30}{value 10}}
			{item "nebel41" "sm" "ammo" 1 {max 20}{value 10}}
			{item "nebel42" "ammo" 1 {max 30}{value 15}}
			{item "nebel" "fg" "ammo" 1 {max 30}{value 25}}
			{item "nebel" "incendiary" "ammo" 1 {max 30}{value 25}}

			{item "sturmtiger" "ammo" 1 {max 30}{value 50}}
			{item "bullet600" "60cm_light" "ammo" 1 {max 30}{value 75}}
			{item "bullet600" "60cm_heavy" "ammo" 1 {max 30}{value 100}}
		}
		{radius 			10}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				500}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "halftrack_ammo_ger_art"
	{extender "supply_zone"
		{resupply
			{item "mortar50" "ger" "fg" "ammo" 2 {max 30}{value 2}}
			{item "mortar81" "ger" "fg" "ammo" 2 {max 30}{value 3}}
			{item "mortar81" "ger" "sm" "ammo" 2 {max 30}{value 3}}
			{item "mortar120" "ger" "fg" "ammo" 1 {max 10}{value 6}}
			{item "mortar120" "ger" "sm" "ammo" 1 {max 10}{value 6}}
			{item "mortar_flaer" "ammo" 1 {max 5}{value 15}}
			;
			{item "bullet20" "ger" "zenite" "ap" "ammo" 10 {max 100}{value 2}}
			{item "bullet20" "ger" "zenite" "fg" "ammo" 10 {max 100}{value 2}}

			{item "bullet37" "ger" "zenite" "aphe" "ammo" 10 {max 100}{value 2}}
			{item "bullet37" "ger" "zenite" "fg" "ammo" 10 {max 100}{value 2}}

			{item "bullet37" "ger" "ap" "ammo" 3 {max 10}{value 3}}
			{item "bullet37" "ger" "fg" "ammo" 3 {max 10}{value 3}}

			{item "bullet50" "ger" "apc" "ammo" 3 {max 8}{value 3}}
			{item "bullet50" "ger" "fg" "ammo" 3 {max 8}{value 3}}

			{item "bullet50" "gerl" "apc" "ammo" 3 {max 8}{value 3}}
			{item "bullet50" "gerl" "fg" "ammo" 3 {max 8}{value 3}}

			{item "bullet75" "gerlg" "fg" "ammo" 2 {max 7}{value 3}}

			{item "bullet75" "gers" "apc" "ammo" 2 {max 7}{value 3}}
			{item "bullet75" "gers" "fg" "ammo" 2 {max 7}{value 3}}

			{item "bullet75" "ger" "apcbc" "ammo" 2 {max 7}{value 4}}
			{item "bullet75" "ger" "fg" "ammo" 2 {max 7}{value 4}}

			{item "bullet75" "gerp" "apcbc" "ammo" 2 {max 7}{value 5}}
			{item "bullet75" "gerp" "fg" "ammo" 2 {max 7}{value 5}}

			{item "bullet75" "gerl" "apcbc" "ammo" 2 {max 7}{value 5}}
			{item "bullet75" "gerl" "fg" "ammo" 2 {max 7}{value 5}}

			{item "bullet88" "ger" "apcbc" "ammo" 2 {max 7}{value 5}}
			{item "bullet88" "ger" "fg" "ammo" 2 {max 7}{value 5}}

			{item "bullet88" "gerl" "apcbc" "ammo" 2 {max 7}{value 6}}
			{item "bullet88" "gerl" "fg" "ammo" 2 {max 7}{value 6}}

			{item "bullet105" "ger" "apc" "ammo" 1 {max 6}{value 6}}
			{item "bullet105" "ger" "fg" "ammo" 1 {max 6}{value 6}}
			{item "bullet105" "ger" "sm" "ammo" 1 {max 6}{value 6}}

			{item "bullet128" "ger" "apc" "ammo" 1 {max 6}{value 10}}
			{item "bullet128" "ger" "apcbc" "ammo" 1 {max 6}{value 10}}
			{item "bullet128" "ger" "fg" "ammo" 1 {max 6}{value 10}}
			;
			{item "bullet150" "ger" "fg" "ammo" 1 {max 5}{value 15}}
			{item "bullet150" "ger" "sm" "ammo" 1 {max 5}{value 15}}
			{item "bullet150" "gers" "fg" "ammo" 1 {max 5}{value 15}}
			{item "bullet150" "gers" "sm" "ammo" 1 {max 5}{value 15}}
			{item "bullet210" "ammo" 1 {max 3}{value 40}}
		}
		{radius 			8}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				150}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_ger_special"
	{extender "supply_zone"
		{resupply
			;
			{item "bullet20" "ger" "zenite" "apcr" "ammo" 20 {max 80}{value 2}}

			{item "bullet37" "ger" "apcr" "ammo" 1 {max 10}{value 2}}
			{item "bullet37" "ger" "heat" "ammo" 1 {max 10}{value 2}}

			{item "bullet50" "ger" "apcr" "ammo" 1 {max 10}{value 3}}

			{item "bullet50" "gerl" "apcr" "ammo" 1 {max 10}{value 3}}
			{item "bullet50" "gerl" "heat" "ammo" 1 {max 10}{value 3}}

			{item "bullet75" "gerlg" "heat" "ammo" 1 {max 10}{value 4}}
			{item "bullet75" "gerlg" "heata" "ammo" 1 {max 10}{value 4}}
			{item "bullet75" "gerlg" "heatb" "ammo" 1 {max 10}{value 4}}
			{item "bullet75" "gerlg" "heatc" "ammo" 1 {max 10}{value 4}}

			{item "bullet75" "gers" "heat" "ammo" 1 {max 10}{value 4}}
			{item "bullet75" "gers" "heata" "ammo" 1 {max 10}{value 4}}
			{item "bullet75" "gers" "heatb" "ammo" 1 {max 10}{value 4}}
			{item "bullet75" "gers" "heatc" "ammo" 1 {max 10}{value 4}}

			{item "bullet75" "ger" "apcr" "ammo" 1 {max 10}{value 5}}
			{item "bullet75" "ger" "heatb" "ammo" 1 {max 10}{value 5}}
			{item "bullet75" "ger" "heatc" "ammo" 1 {max 10}{value 5}}

			{item "bullet75" "gerp" "apcr" "ammo" 1 {max 10}{value 6}}
			{item "bullet75" "gerp" "heatb" "ammo" 1 {max 10}{value 6}}
			{item "bullet75" "gerp" "heatc" "ammo" 1 {max 10}{value 6}}

			{item "bullet75" "gerl" "apcr" "ammo" 1 {max 10}{value 6}}

			{item "bullet88" "ger" "apcr" "ammo" 1 {max 10}{value 6}}
			{item "bullet88" "ger" "heat" "ammo" 1 {max 10}{value 6}}

			{item "bullet88" "gerl" "apcr" "ammo" 1 {max 10}{value 7}}
			{item "bullet88" "gerl" "heat" "ammo" 1 {max 10}{value 7}}

			{item "bullet105" "ger" "heat" "ammo" 1 {max 6}{value 8}}

			{item "bullet150" "gers" "heat" "ammo" 1 {max 3}{value 15}}
		}
		{radius 			6}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				75}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_ger_art"
	{extender "supply_zone"
		{resupply
			{item "mortar50" "ger" "fg" "ammo" 2 {max 30}{value 2}}
			{item "mortar81" "ger" "fg" "ammo" 2 {max 30}{value 3}}
			{item "mortar81" "ger" "sm" "ammo" 2 {max 30}{value 3}}
			{item "mortar120" "ger" "fg" "ammo" 1 {max 10}{value 6}}
			{item "mortar120" "ger" "sm" "ammo" 1 {max 10}{value 6}}
			{item "mortar_flaer" "ammo" 1 {max 5}{value 15}}
			;
			{item "bullet20" "ger" "zenite" "ap" "ammo" 10 {max 100}{value 2}}
			{item "bullet20" "ger" "zenite" "fg" "ammo" 10 {max 100}{value 2}}

			{item "bullet37" "ger" "zenite" "aphe" "ammo" 10 {max 100}{value 2}}
			{item "bullet37" "ger" "zenite" "fg" "ammo" 10 {max 100}{value 2}}

			{item "bullet37" "ger" "ap" "ammo" 3 {max 10}{value 3}}
			{item "bullet37" "ger" "fg" "ammo" 3 {max 10}{value 3}}

			{item "bullet50" "ger" "apc" "ammo" 3 {max 8}{value 3}}
			{item "bullet50" "ger" "fg" "ammo" 3 {max 8}{value 3}}

			{item "bullet50" "gerl" "apc" "ammo" 3 {max 8}{value 3}}
			{item "bullet50" "gerl" "fg" "ammo" 3 {max 8}{value 3}}

			{item "bullet75" "gerlg" "fg" "ammo" 2 {max 7}{value 3}}

			{item "bullet75" "gers" "apc" "ammo" 2 {max 7}{value 3}}
			{item "bullet75" "gers" "fg" "ammo" 2 {max 7}{value 3}}

			{item "bullet75" "ger" "apcbc" "ammo" 2 {max 7}{value 4}}
			{item "bullet75" "ger" "fg" "ammo" 2 {max 7}{value 4}}

			{item "bullet75" "gerp" "apcbc" "ammo" 2 {max 7}{value 5}}
			{item "bullet75" "gerp" "fg" "ammo" 2 {max 7}{value 5}}

			{item "bullet75" "gerl" "apcbc" "ammo" 2 {max 7}{value 5}}
			{item "bullet75" "gerl" "fg" "ammo" 2 {max 7}{value 5}}

			{item "bullet88" "ger" "apcbc" "ammo" 2 {max 7}{value 5}}
			{item "bullet88" "ger" "fg" "ammo" 2 {max 7}{value 5}}

			{item "bullet88" "gerl" "apcbc" "ammo" 2 {max 7}{value 6}}
			{item "bullet88" "gerl" "fg" "ammo" 2 {max 7}{value 6}}

			{item "bullet105" "ger" "apc" "ammo" 1 {max 6}{value 6}}
			{item "bullet105" "ger" "fg" "ammo" 1 {max 6}{value 6}}
			{item "bullet105" "ger" "sm" "ammo" 1 {max 6}{value 6}}

			{item "bullet128" "ger" "apc" "ammo" 1 {max 6}{value 10}}
			{item "bullet128" "ger" "apcbc" "ammo" 1 {max 6}{value 10}}
			{item "bullet128" "ger" "fg" "ammo" 1 {max 6}{value 10}}
			;
			{item "bullet150" "ger" "fg" "ammo" 1 {max 5}{value 15}}
			{item "bullet150" "ger" "sm" "ammo" 1 {max 5}{value 15}}
			{item "bullet150" "gers" "fg" "ammo" 1 {max 5}{value 15}}
			{item "bullet150" "gers" "sm" "ammo" 1 {max 5}{value 15}}
			{item "bullet210" "ammo" 1 {max 3}{value 40}}

			{item "nebel41" "fg" "ammo" 1 {max 20}{value 10}}
			{item "nebel41" "sm" "ammo" 1 {max 20}{value 10}}
			{item "nebel42" "ammo" 1 {max 20}{value 15}}
			{item "nebel" "fg" "ammo" 1 {max 20}{value 25}}
			{item "nebel" "incendiary" "ammo" 1 {max 20}{value 25}}
		}
		{radius 			6}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				80}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "truck_ammo_ger_inf"
	{extender "supply_zone"
		{resupply
			{item "mauser_clip" "mauser" "ammo" 20 {max 60}}
			{item "g43_mag" "mauser" "ammo" 20 {max 80}}
			{item "fg42_mag" "ammo" 20 {max 160}}
			{item "walther_mag" "ammo" 32 {max 32}}
			{item "mp28_mag" "ammo" 90 {max 180}}
			{item "mp28_50_mag" "ammo" 50 {max 150}}
			{item "mp40_mag" "ammo" 96 {max 192}}
			{item "stg44_mag" "ammo" 90 {max 180}}
			{item "mg_mauser" "drum" "ammo" 100 {max 300}}
			{item "mg_mauser" "belt" "ammo" 100 {max 1000}}
			{item "zb30_mag" "ammo" 60 {max 300}}
			{item "k98_grenade" "fg" 1 {max 10}{value 2}}
			{item "k98_grenade" "ap" 1 {max 5}{value 2}}

			{item "rifle" "ammo" 20 {max 60}}
			{item "pistol" "ammo" 96 {max 192}}
			{item "stg" "ammo" 90 {max 180}}
			{item "mgun" "ammo" 100	{max 300}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "panzershreck" "ammo" 1 {max 6}}
			{item "mortar50" "ger" "fg" "ammo" 2 {max 100}{value 2}}
			{item "mortar81" "ger" "fg" "ammo" 2 {max 100}{value 3}}
			{item "mortar81" "ger" "sm" "ammo" 2 {max 100}{value 3}}
			{item "bullet37" "ger" "ap" "ammo" 3 {max 100}{value 3}}
			{item "bullet37" "ger" "fg" "ammo" 3 {max 100}{value 3}}
		}
		{radius 			10}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				300}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "halftrack_ammo_ger_inf"
	{extender "supply_zone"
		{resupply
			{item "mauser_clip" "mauser" "ammo" 20 {max 60}}
			{item "g43_mag" "mauser" "ammo" 20 {max 80}}
			{item "fg42_mag" "ammo" 20 {max 160}}
			{item "walther_mag" "ammo" 32 {max 32}}
			{item "mp28_mag" "ammo" 90 {max 180}}
			{item "mp28_50_mag" "ammo" 50 {max 150}}
			{item "mp40_mag" "ammo" 96 {max 192}}
			{item "stg44_mag" "ammo" 90 {max 180}}
			{item "mg_mauser" "drum" "ammo" 50 {max 300}}
			{item "mg_mauser" "belt" "ammo" 50 {max 300}}
			{item "zb30_mag" "ammo" 60 {max 300}}
			{item "k98_grenade" "fg" 1 {max 10}{value 2}}
			{item "k98_grenade" "ap" 1 {max 5}{value 2}}

			{item "rifle" "ammo" 20 {max 60}}
			{item "pistol" "ammo" 96 {max 192}}
			{item "stg" "ammo" 90 {max 180}}
			{item "mgun" "ammo" 100	{max 300}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "panzershreck" "ammo" 1 {max 6}}
			{item "mortar50" "ger" "fg" "ammo" 2 {max 10}{value 2}}
			{item "mortar81" "ger" "fg" "ammo" 2 {max 10}{value 3}}
			{item "mortar81" "ger" "sm" "ammo" 2 {max 10}{value 3}}
			{item "bullet37" "ger" "ap" "ammo" 3 {max 10}{value 3}}
			{item "bullet37" "ger" "fg" "ammo" 3 {max 10}{value 3}}
		}
		{radius 			8}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				150}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_small_ger"
	{extender "supply_zone"
		{resupply
			{item "mauser_clip" "mauser" "ammo" 20 {max 60}}
			{item "g43_mag" "mauser" "ammo" 20 {max 80}}
			{item "fg42_mag" "ammo" 20 {max 160}}
			{item "walther_mag" "ammo" 32 {max 32}}
			{item "mp28_mag" "ammo" 90 {max 180}}
			{item "mp28_50_mag" "ammo" 50 {max 150}}
			{item "mp40_mag" "ammo" 96 {max 192}}
			{item "stg44_mag" "ammo" 90 {max 180}}
			{item "mg_mauser" "drum" "ammo" 50 {max 300}}
			{item "mg_mauser" "belt" "ammo" 50 {max 300}}
			{item "zb30_mag" "ammo" 60 {max 300}}
			{item "k98_grenade" "fg" 1 {max 10}{value 5}}
			{item "k98_grenade" "ap" 1 {max 5}{value 5}}

			{item "rifle" "ammo" 20 {max 60}}
			{item "pistol" "ammo" 96 {max 192}}
			{item "stg" "ammo" 90 {max 180}}
			{item "mgun" "ammo" 100	{max 300}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "panzershreck" "ammo" 1 {max 6}}
			{item "mortar50" "ger" "fg" "ammo" 2 {max 10}{value 2}}
			{item "mortar81" "ger" "fg" "ammo" 2 {max 10}{value 3}}
			{item "mortar81" "ger" "sm" "ammo" 2 {max 10}{value 3}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				30}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_ger_inf"
	{extender "supply_zone"
		{resupply
			{item "mauser_clip" "mauser" "ammo" 20 {max 60}}
			{item "g43_mag" "mauser" "ammo" 20 {max 80}}
			{item "fg42_mag" "ammo" 20 {max 160}}
			{item "walther_mag" "ammo" 32 {max 32}}
			{item "mp28_mag" "ammo" 90 {max 180}}
			{item "mp28_50_mag" "ammo" 50 {max 150}}
			{item "mp40_mag" "ammo" 96 {max 192}}
			{item "stg44_mag" "ammo" 90 {max 180}}
			{item "mg_mauser" "drum" "ammo" 50 {max 300}}
			{item "mg_mauser" "belt" "ammo" 50 {max 300}}
			{item "zb30_mag" "ammo" 60 {max 300}}
			{item "k98_grenade" "fg" 1 {max 10}{value 5}}
			{item "k98_grenade" "ap" 1 {max 5}{value 5}}

			{item "rifle" "ammo" 20 {max 60}}
			{item "pistol" "ammo" 96 {max 192}}
			{item "stg" "ammo" 90 {max 180}}
			{item "mgun" "ammo" 100	{max 300}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "panzershreck" "ammo" 1 {max 6}}
			{item "mortar50" "ger" "fg" "ammo" 2 {max 10}{value 2}}
			{item "mortar81" "ger" "fg" "ammo" 2 {max 10}{value 3}}
			{item "mortar81" "ger" "sm" "ammo" 2 {max 10}{value 3}}
			{item "bullet37" "ger" "ap" "ammo" 3 {max 10}{value 3}}
			{item "bullet37" "ger" "fg" "ammo" 3 {max 10}{value 3}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				75}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

;###############################################################################
;¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤	JAPAN		¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤
(define "truck_ammo_jap_art"
	{extender "supply_zone"
		{resupply
			{item "arisaka6-5_clip" "ammo" 20 {max 60}}
			{item "arisaka7-7_clip" "ammo" 20 {max 60}}
			{item "nambu_mag" "ammo" 32 {max 32}}
			{item "type2_mag" "ammo" 50 {max 150}}
			{item "type100_mag" "ammo" 90 {max 180}}
			{item "type92_strip" "ammo" 120 {max 1500}}
			{item "type96_mag" "ammo" 120 {max 1500}}
			{item "type97_mag" "ammo" 120 {max 1500}}
			{item "type99_mag" "ammo" 120 {max 1500}}

			{item "rifle" "ammo" 20 {max 60}}
			{item "6_5rifle" "ammo" 20 {max 60}}
			{item "pistol" "ammo" 90 {max 180}}
			{item "mgun" "ammo" 90	{max 180}}
			{item "6_5mgun" "ammo" 90 {max 180}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "type_4" "ammo" 1	{max 6}}
			{item "rifle_grenade_at" "ammo" 1 {max 5}{value 2}}
			{item "5cm_grenade" "fg" "ammo" 2 {max 8}{value 2}}
			{item "mortar90" "fg" "ammo" 2 {max 100}{value 3}}
			{item "mortar150" "fg" "ammo" 1 {max 100}{value 7}}
			;
			{item "bullet20" "jap" "zenite" "ap" "ammo" 10 {max 1000}{value 2}}
			{item "bullet20" "jap" "zenite" "fg" "ammo" 10 {max 1000}{value 2}}

			{item "bullet37" "jap" "aphe" "ammo" 3 {max 100}{value 3}}
			{item "bullet37" "jap" "fg" "ammo" 3 {max 100}{value 3}}

			;{item "bullet47" "jap" "ap" "ammo" 3 {max 100}{value 3}}
			{item "bullet47" "jap" "aphe" "ammo" 3 {max 100}{value 3}}
			{item "bullet47" "jap" "fg" "ammo" 3 {max 100}{value 3}}

			{item "bullet57" "jap" "aphe" "ammo" 3 {max 100}{value 3}}
			{item "bullet57" "jap" "fg" "ammo" 3 {max 100}{value 3}}

			{item "bullet75" "japs" "aphe" "ammo" 2 {max 50}{value 3}}
			{item "bullet75" "japs" "fg" "ammo" 2 {max 50}{value 3}}

			;{item "bullet75" "jap" "ap" "ammo" 2 {max 50}{value 4}}
			{item "bullet75" "jap" "aphe" "ammo" 2 {max 50}{value 4}}
			{item "bullet75" "jap" "aphe2" "ammo" 2 {max 50}{value 4}}
			{item "bullet75" "jap" "fg" "ammo" 2 {max 50}{value 4}}

			;{item "bullet75" "japl" "ap" "ammo" 2 {max 50}{value 5}}
			{item "bullet75" "japl" "aphe" "ammo" 2 {max 50}{value 5}}
			{item "bullet75" "japl" "aphe2" "ammo" 2 {max 50}{value 5}}
			{item "bullet75" "japl" "fg" "ammo" 2 {max 50}{value 5}}

			;{item "bullet88" "jap" "ap" "ammo" 2 {max 50}{value 5}}
			{item "bullet88" "jap" "aphe" "ammo" 2 {max 50}{value 5}}
			{item "bullet88" "jap" "fg" "ammo" 2 {max 50}{value 5}}

			{item "bullet105" "jap" "fg" "ammo" 1 {max 10}{value 6}}

			{item "bullet105" "japl" "aphe" "ammo" 1 {max 30}{value 6}}
			{item "bullet105" "japl" "fg" "ammo" 1 {max 30}{value 6}}
			;
			{item "bullet120" "jap" "fg" "ammo" 1 {max 30}{value 10}}

			{item "bullet150" "jap" "fg" "ammo" 1 {max 30}{value 15}}

			{item "20cm_rocket" "ammo" 1 {max 10}{value 20}}
			;
			{item "30cm_rocket" "ammo" 1 {max 10}{value 30}}
		}
		{radius 			10}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				500}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_jap_special"
	{extender "supply_zone"
		{resupply
			{item "bullet57" "jap" "heat" "ammo" 1 {max 10}{value 3}}

			{item "bullet75" "japs" "heat" "ammo" 1 {max 10}{value 5}}
			{item "bullet75" "japs" "wp" "ammo" 1 {max 10}{value 5}}
			
			{item "bullet75" "japl" "aphe3" "ammo" 1 {max 10}{value 5}}

			{item "bullet105" "jap" "heat" "ammo" 1 {max 6}{value 8}}
			
			{item "bullet120" "jap" "heat" "ammo" 1 {max 6}{value 10}}

			{item "bullet150" "jap" "wp" "ammo" 1 {max 5}{value 15}}
		}
		{radius 			6}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				75}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_jap_art"
	{extender "supply_zone"
		{resupply
			{item "5cm_grenade" "fg" "ammo" 2 {max 16}{value 2}}
			{item "mortar90" "fg" "ammo" 2 {max 30}{value 3}}
			{item "mortar150" "fg" "ammo" 1 {max 10}{value 7}}
			;
			{item "bullet20" "jap" "zenite" "ap" "ammo" 10 {max 100}{value 2}}
			{item "bullet20" "jap" "zenite" "fg" "ammo" 10 {max 100}{value 2}}

			{item "bullet37" "jap" "aphe" "ammo" 3 {max 10}{value 3}}
			{item "bullet37" "jap" "fg" "ammo" 3 {max 10}{value 3}}

			;{item "bullet47" "jap" "ap" "ammo" 3 {max 10}{value 3}}
			{item "bullet47" "jap" "aphe" "ammo" 3 {max 10}{value 3}}
			{item "bullet47" "jap" "fg" "ammo" 3 {max 10}{value 3}}

			{item "bullet57" "jap" "aphe" "ammo" 3 {max 8}{value 3}}
			{item "bullet57" "jap" "fg" "ammo" 3 {max 8}{value 3}}

			{item "bullet75" "japs" "aphe" "ammo" 2 {max 7}{value 3}}
			{item "bullet75" "japs" "fg" "ammo" 2 {max 7}{value 3}}

			;{item "bullet75" "jap" "ap" "ammo" 2 {max 7}{value 4}}
			{item "bullet75" "jap" "aphe" "ammo" 2 {max 7}{value 4}}
			{item "bullet75" "jap" "aphe2" "ammo" 2 {max 7}{value 4}}
			{item "bullet75" "jap" "fg" "ammo" 2 {max 7}{value 4}}

			;{item "bullet75" "japl" "ap" "ammo" 2 {max 7}{value 5}}
			{item "bullet75" "japl" "aphe" "ammo" 2 {max 7}{value 5}}
			{item "bullet75" "japl" "aphe2" "ammo" 2 {max 7}{value 5}}
			{item "bullet75" "japl" "fg" "ammo" 2 {max 7}{value 5}}

			;{item "bullet88" "jap" "ap" "ammo" 2 {max 7}{value 5}}
			{item "bullet88" "jap" "aphe" "ammo" 2 {max 7}{value 5}}
			{item "bullet88" "jap" "fg" "ammo" 2 {max 7}{value 5}}

			{item "bullet105" "jap" "fg" "ammo" 1 {max 6}{value 6}}

			{item "bullet105" "japl" "aphe" "ammo" 1 {max 6}{value 6}}
			{item "bullet105" "japl" "fg" "ammo" 1 {max 6}{value 6}}
			;
			{item "bullet120" "jap" "fg" "ammo" 1 {max 6}{value 10}}

			{item "bullet150" "jap" "fg" "ammo" 1 {max 5}{value 15}}

			{item "20cm_rocket" "ammo" 1 {max 3}{value 20}}
			;
			{item "30cm_rocket" "ammo" 1 {max 3}{value 30}}
		}
		{radius 			6}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				80}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "truck_ammo_jap_inf"
	{extender "supply_zone"
		{resupply
			{item "arisaka6-5_clip" "ammo" 20 {max 60}}
			{item "arisaka7-7_clip" "ammo" 20 {max 60}}
			{item "nambu_mag" "ammo" 32 {max 32}}
			{item "type2_mag" "ammo" 50 {max 150}}
			{item "type100_mag" "ammo" 90 {max 180}}
			{item "type92_strip" "ammo" 120 {max 1020}}
			{item "type96_mag" "ammo" 120 {max 1020}}
			{item "type97_mag" "ammo" 120 {max 1020}}
			{item "type99_mag" "ammo" 120 {max 1020}}

			{item "rifle" "ammo" 20 {max 60}}
			{item "6_5rifle" "ammo" 20 {max 60}}
			{item "pistol" "ammo" 90 {max 180}}
			{item "mgun" "ammo" 90	{max 180}}
			{item "6_5mgun" "ammo" 90 {max 180}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "type_4" "ammo" 1	{max 6}}
			{item "rifle_grenade_at" "ammo" 1 {max 5}{value 2}}
			{item "5cm_grenade" "fg" "ammo" 2 {max 16}{value 2}}
			{item "mortar90" "fg" "ammo" 2 {max 100}{value 3}}
			{item "bullet37" "jap" "aphe" "ammo" 3 {max 100}{value 3}}
			{item "bullet37" "jap" "fg" "ammo" 3 {max 100}{value 3}}
		}
		{radius 			10}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				300}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "halftrack_ammo_jap_inf"
	{extender "supply_zone"
		{resupply
			{item "arisaka6-5_clip" "ammo" 20 {max 60}}
			{item "arisaka7-7_clip" "ammo" 20 {max 60}}
			{item "nambu_mag" "ammo" 32 {max 32}}
			{item "type2_mag" "ammo" 50 {max 150}}
			{item "type100_mag" "ammo" 90 {max 180}}
			{item "type92_strip" "ammo" 60 {max 300}}
			{item "type96_mag" "ammo" 60 {max 300}}
			{item "type97_mag" "ammo" 60 {max 300}}
			{item "type99_mag" "ammo" 60 {max 300}}

			{item "rifle" "ammo" 20 {max 60}}
			{item "6_5rifle" "ammo" 20 {max 60}}
			{item "pistol" "ammo" 90 {max 180}}
			{item "mgun" "ammo" 90	{max 180}}
			{item "6_5mgun" "ammo" 90 {max 180}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "type_4" "ammo" 1	{max 6}}
			{item "rifle_grenade_at" "ammo" 1 {max 5}{value 2}}
			{item "5cm_grenade" "fg" "ammo" 2 {max 16}{value 2}}
			{item "mortar90" "fg" "ammo" 2 {max 10}{value 3}}
			{item "bullet37" "jap" "aphe" "ammo" 3 {max 10}{value 3}}
			{item "bullet37" "jap" "fg" "ammo" 3 {max 10}{value 3}}
		}
		{radius 			8}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				150}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_small_jap"
	{extender "supply_zone"
		{resupply
			{item "arisaka6-5_clip" "ammo" 20 {max 60}}
			{item "arisaka7-7_clip" "ammo" 20 {max 60}}
			{item "nambu_mag" "ammo" 32 {max 32}}
			{item "type2_mag" "ammo" 50 {max 150}}
			{item "type100_mag" "ammo" 90 {max 180}}
			{item "type92_strip" "ammo" 60 {max 300}}
			{item "type96_mag" "ammo" 60 {max 300}}
			{item "type97_mag" "ammo" 60 {max 300}}
			{item "type99_mag" "ammo" 60 {max 300}}

			{item "rifle" "ammo" 20 {max 60}}
			{item "6_5rifle" "ammo" 20 {max 60}}
			{item "pistol" "ammo" 90 {max 180}}
			{item "mgun" "ammo" 90	{max 180}}
			{item "6_5mgun" "ammo" 90 {max 180}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "type_4" "ammo" 1	{max 6}}
			{item "rifle_grenade_at" "ammo" 1 {max 5}{value 5}}
			{item "5cm_grenade" "fg" "ammo" 2 {max 16}{value 2}}
			{item "mortar90" "fg" "ammo" 2 {max 10}{value 3}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				30}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_jap_inf"
	{extender "supply_zone"
		{resupply
			{item "arisaka6-5_clip" "ammo" 20 {max 60}}
			{item "arisaka7-7_clip" "ammo" 20 {max 60}}
			{item "nambu_mag" "ammo" 32 {max 32}}
			{item "type2_mag" "ammo" 50 {max 150}}
			{item "type100_mag" "ammo" 90 {max 180}}
			{item "type92_strip" "ammo" 60 {max 300}}
			{item "type96_mag" "ammo" 60 {max 300}}
			{item "type97_mag" "ammo" 60 {max 300}}
			{item "type99_mag" "ammo" 60 {max 300}}

			{item "rifle" "ammo" 20 {max 60}}
			{item "6_5rifle" "ammo" 20 {max 60}}
			{item "pistol" "ammo" 90 {max 180}}
			{item "mgun" "ammo" 90	{max 180}}
			{item "6_5mgun" "ammo" 90 {max 180}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "type_4" "ammo" 1	{max 6}}
			{item "rifle_grenade_at" "ammo" 1 {max 5}{value 5}}
			{item "5cm_grenade" "fg" "ammo" 2 {max 16}{value 2}}
			{item "mortar90" "fg" "ammo" 2 {max 10}{value 3}}
			{item "bullet37" "jap" "aphe" "ammo" 3 {max 10}{value 3}}
			{item "bullet37" "jap" "fg" "ammo" 3 {max 10}{value 3}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				75}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

;###############################################################################
;¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤	USA		¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

(define "truck_ammo_us_art"
	{extender "supply_zone"
		{resupply
			{item "garand_clip" "ammo" 20 {max 80}}
			{item "springfield_clip" "ammo" 20 {max 60}}
			{item "bar_mag" "ammo" 40 {max 240}}
			{item "m1941lmg_mag" "ammo" 40 {max 240}}
			{item "m1carbine_mag" "ammo" 30 {max 90}}
			{item "m2carbine_mag" "ammo" 30 {max 90}}
			{item "colt_mag" "ammo" 28 {max 28}}
			{item "hdm_mag" "ammo" 30 {max 30}}
			{item "m3a_mag" "ammo" 75 {max 150}}
			{item "thompson_drum" "ammo" 75 {max 150}}
			{item "thompson_m1a1_mag" "ammo" 75 {max 150}}
			{item "m50reising_mag" "ammo" 75 {max 150}}
			{item "springfield_belt" "ammo" 100 {max 1500}}
			{item "m1garand_grenade" "fg" 1 {max 10}{value 2}}
			{item "m1garand_grenade" "ap" 1 {max 5}{value 2}}
			;{item "m1garand_grenade" "wp" 1 {max 3}{value 5}}
			{item "mortar_flaer" "ammo" 1 {max 5}{value 15}}
			{item "artillery_105_flare" "ammo" 1 {max 5}{value 50}}
			{item "artillery_155_flare" "ammo" 1 {max 5}{value 75}}
			{item "artillery_240_flare" "ammo" 1 {max 5}{value 150}}

			{item "rifle" "ammo" 20 {max 80}}
			{item "pistol" "ammo" 75 {max 150}}
			{item "carbine" "ammo" 30 {max 90}}
			{item "mgun" "red" "ammo" 100	{max 250}}
			{item "bandage"	1 {max 3}}
			{item "bazooka" "ammo" 1 {max 6}}
			{item "m18recoilless" "ammo" 1 {max 6}}
			{item "m18recoilless" "fg" "ammo" 1 {max 6}}
			{item "shotgun" "ammo" 3 {max 20}}
			{item "hmgun" "ammo" 30 {max 400}{value 2}}
			{item "hmgun" "ap" "ammo" 30 {max 400}{value 2}}
			{item "hmgun" "inc" "ammo" 30 {max 800}{value 2}}
			{item "mortar60" "us" "fg" "ammo" 2 {max 100}{value 2}}
			{item "mortar81" "us" "fg" "light" "ammo" 2 {max 100}{value 3}}
			{item "mortar81" "us" "fg" "heavy" "ammo" 1 {max 100}{value 2}}
			{item "mortar81" "us" "sm" "ammo" 2 {max 100}{value 3}}
			{item "mortar107" "us" "sm" "ammo" 1 {max 100}{value 5}}
			{item "mortar107" "us" "fg" "ammo" 1 {max 100}{value 5}}
			;
			{item "bullet37" "us" "zenite" "ap" "ammo" 10 {max 1000}{value 2}}
			{item "bullet37" "us" "zenite" "fg" "ammo" 10 {max 1000}{value 2}}

			{item "bullet40" "us" "zenite" "ap" "ammo" 10 {max 1000}{value 2}}
			{item "bullet40" "us" "zenite" "fg" "ammo" 10 {max 1000}{value 2}}

			{item "bullet37" "us" "ap" "ammo" 3 {max 100}{value 3}}
			{item "bullet37" "us" "fg" "ammo" 3 {max 100}{value 3}}

			{item "bullet57" "us-eng" "us" "ap" "ammo" 3 {max 100}{value 3}}
			{item "bullet57" "us-eng" "us" "apcbc" "ammo" 3 {max 100}{value 3}}
			{item "bullet57" "us-eng" "us" "fg" "ammo" 3 {max 100}{value 3}}

			{item "bullet75" "usm8" "fg" "ammo" 2 {max 30}{value 3}}

			{item "bullet75" "us" "ap" "ammo" 2 {max 50}{value 4}}
			{item "bullet75" "us" "apcbc" "ammo" 2 {max 50}{value 4}}
			{item "bullet75" "us" "fg" "ammo" 2 {max 50}{value 4}}

			{item "bullet76" "us3inch" "ap" "ammo" 2 {max 50}{value 4}}
			{item "bullet76" "us3inch" "apcbc" "ammo" 2 {max 50}{value 4}}
			{item "bullet76" "us3inch" "fg" "ammo" 2 {max 14}{value 4}}

			{item "bullet76" "us" "ap" "ammo" 2 {max 50}{value 4}}
			{item "bullet76" "us" "apcbc" "ammo" 2 {max 50}{value 4}}
			{item "bullet76" "us" "fg" "ammo" 2 {max 40}{value 4}}

			{item "bullet90" "us" "apcbc" "ammo" 2 {max 50}{value 5}}
			{item "bullet90" "us" "fg" "ammo" 2 {max 25}{value 5}}

			{item "bullet90" "usl" "apcbc" "ammo" 2 {max 40}{value 6}}
			{item "bullet90" "usl" "fg" "ammo" 2 {max 40}{value 6}}
			;
			{item "bullet105" "us" "fg" "ammo" 1 {max 45}{value 10}}
			{item "bullet105" "us" "sm" "ammo" 1 {max 9}{value 10}}
			{item "bullet155" "us" "fg" "ammo" 1 {max 7}{value 15}}
			{item "bullet155" "us" "aphe" "ammo" 1 {max 3}{value 15}}
			{item "bullet155" "us" "sm" "ammo" 1 {max 6}{value 15}}
			{item "bullet203" "us" "ammo" 1 {max 3}{value 40}}
			;
			{item "calliope" "ammo" 4 {max 120}{value 10}}
		}
		{radius 			10}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				500}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_us_special"
	{extender "supply_zone"
		{resupply
			{item "m1garand_grenade" "wp" 1 {max 3}{value 4}}
			{item "m18recoilless" "wp" "ammo" 1 {max 3}}
			{item "mortar60" "us" "wp" "ammo" 1 {max 10}{value 4}}
			{item "mortar81" "us" "wp" "ammo" 1 {max 10}{value 6}}
			{item "mortar107" "us" "wp" "ammo" 1 {max 10}{value 8}}

			{item "bullet57" "eng" "apcr" "ammo" 1 {max 10}{value 4}}
			{item "bullet57" "eng" "apds" "ammo" 1 {max 10}{value 4}}

			{item "bullet75" "usm8" "heat" "ammo" 1 {max 10}{value 5}}
			{item "bullet75" "usm8" "wp" "ammo" 1 {max 10}{value 6}}

			{item "bullet75" "us" "wp" "ammo" 1 {max 10}{value 7}}

			{item "bullet76" "us3inch" "hvap" "ammo" 1 {max 10}{value 6}}

			{item "bullet76" "us" "hvap" "ammo" 1 {max 10}{value 6}}

			{item "bullet90" "us" "hvap" "ammo" 1 {max 10}{value 7}}

			{item "bullet90" "usl" "hvap" "ammo" 1 {max 10}{value 8}}

			{item "bullet105" "us" "heat" "ammo" 1 {max 6}{value 8}}
			{item "bullet105" "us" "wp" "ammo" 1 {max 6}{value 10}}

			{item "bullet155" "us" "wp" "ammo" 1 {max 4}{value 16}}
		}
		{radius 			6}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				75}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_us_art"
	{extender "supply_zone"
		{resupply
			{item "mortar60" "us" "fg" "ammo" 2 {max 30}{value 2}}
			{item "mortar81" "us" "fg" "light" "ammo" 2 {max 30}{value 3}}
			{item "mortar81" "us" "fg" "heavy" "ammo" 1 {max 30}{value 2}}
			{item "mortar81" "us" "sm" "ammo" 2 {max 30}{value 3}}
			{item "mortar107" "us" "sm" "ammo" 1 {max 10}{value 5}}
			{item "mortar107" "us" "fg" "ammo" 1 {max 10}{value 5}}
			{item "mortar_flaer" "ammo" 1 {max 5}{value 15}}
			{item "artillery_105_flare" "ammo" 1 {max 5}{value 50}}
			{item "artillery_155_flare" "ammo" 1 {max 5}{value 75}}
			{item "artillery_240_flare" "ammo" 1 {max 5}{value 150}}
			;
			{item "bullet37" "us" "zenite" "ap" "ammo" 10 {max 100}{value 2}}
			{item "bullet37" "us" "zenite" "fg" "ammo" 10 {max 100}{value 2}}

			{item "bullet40" "us" "zenite" "ap" "ammo" 10 {max 100}{value 2}}
			{item "bullet40" "us" "zenite" "fg" "ammo" 10 {max 100}{value 2}}

			{item "bullet37" "us" "ap" "ammo" 3 {max 10}{value 3}}
			{item "bullet37" "us" "fg" "ammo" 3 {max 10}{value 3}}

			{item "bullet57" "us" "ap" "ammo" 3 {max 8}{value 3}}
			{item "bullet57" "us" "apcbc" "ammo" 3 {max 8}{value 3}}
			{item "bullet57" "us" "fg" "ammo" 3 {max 8}{value 3}}

			{item "bullet75" "usm8" "fg" "ammo" 2 {max 7}{value 3}}

			{item "bullet75" "us" "ap" "ammo" 2 {max 7}{value 4}}
			{item "bullet75" "us" "apcbc" "ammo" 2 {max 7}{value 4}}
			{item "bullet75" "us" "fg" "ammo" 2 {max 7}{value 4}}

			{item "bullet76" "us3inch" "ap" "ammo" 2 {max 7}{value 4}}
			{item "bullet76" "us3inch" "apcbc" "ammo" 2 {max 7}{value 4}}
			{item "bullet76" "us3inch" "fg" "ammo" 2 {max 7}{value 4}}

			{item "bullet76" "us" "ap" "ammo" 2 {max 7}{value 4}}
			{item "bullet76" "us" "apcbc" "ammo" 2 {max 7}{value 4}}
			{item "bullet76" "us" "fg" "ammo" 2 {max 7}{value 4}}

			{item "bullet90" "us" "apcbc" "ammo" 2 {max 7}{value 5}}
			{item "bullet90" "us" "fg" "ammo" 2 {max 7}{value 5}}

			{item "bullet90" "usl" "apcbc" "ammo" 2 {max 7}{value 6}}
			{item "bullet90" "usl" "fg" "ammo" 2 {max 7}{value 6}}
			;
			{item "bullet105" "us" "fg" "ammo" 1 {max 6}{value 8}}
			{item "bullet105" "us" "sm" "ammo" 1 {max 6}{value 8}}
			{item "bullet155" "us" "fg" "ammo" 1 {max 5}{value 15}}
			{item "bullet155" "us" "aphe" "ammo" 1 {max 3}{value 15}}
			{item "bullet155" "us" "sm" "ammo" 1 {max 5}{value 15}}
			{item "bullet203" "us" "ammo" 1 {max 3}{value 40}}
			;
			{item "calliope" "ammo" 4 {max 120}{value 10}}
		}
		{radius 			6}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				80}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "truck_ammo_us_inf"
	{extender "supply_zone"
		{resupply
			{item "garand_clip" "ammo" 20 {max 80}}
			{item "springfield_clip" "ammo" 20 {max 60}}
			{item "bar_mag" "ammo" 40 {max 240}}
			{item "m1941lmg_mag" "ammo" 40 {max 240}}
			{item "m1carbine_mag" "ammo" 30 {max 90}}
			{item "m2carbine_mag" "ammo" 30 {max 90}}
			{item "colt_mag" "ammo" 28 {max 28}}
			{item "hdm_mag" "ammo" 30 {max 30}}
			{item "m3a_mag" "ammo" 75 {max 150}}
			{item "thompson_drum" "ammo" 75 {max 150}}
			{item "thompson_m1a1_mag" "ammo" 75 {max 150}}
			{item "m50reising_mag" "ammo" 75 {max 150}}
			{item "springfield_belt" "ammo" 100 {max 1000}}
			{item "m1garand_grenade" "fg" 1 {max 10}{value 2}}
			{item "m1garand_grenade" "ap" 1 {max 5}{value 2}}
			;{item "m1garand_grenade" "wp" 1 {max 3}{value 5}}

			{item "rifle" "ammo" 20 {max 80}}
			{item "pistol" "ammo" 75 {max 150}}
			{item "carbine" "ammo" 30 {max 90}}
			{item "mgun" "red" "ammo" 100	{max 250}}
			{item "bandage"	1 {max 3}}
			{item "bazooka" "ammo" 1 {max 6}}
			{item "m18recoilless" "ammo" 1 {max 6}}
			{item "m18recoilless" "fg" "ammo" 1 {max 6}}
			{item "shotgun" "ammo" 3 {max 20}}
			{item "mortar60" "us" "fg" "ammo" 2 {max 100}{value 2}}
			{item "mortar81" "us" "fg" "light" "ammo" 2 {max 100}{value 3}}
			{item "mortar81" "us" "sm" "ammo" 2 {max 100}{value 3}}
			{item "hmgun" "ammo" 30 {max 400}{value 2}}
			{item "hmgun" "ap" "ammo" 30 {max 400}{value 2}}
			{item "hmgun" "inc" "ammo" 30 {max 800}{value 2}}
			{item "bullet37" "us" "ap" "ammo" 3 {max 100}{value 3}}
			{item "bullet37" "us" "fg" "ammo" 3 {max 100}{value 3}}
		}
		{radius 			10}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				300}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "halftrack_ammo_us_inf"
	{extender "supply_zone"
		{resupply
			{item "garand_clip" "ammo" 20 {max 80}}
			{item "springfield_clip" "ammo" 20 {max 60}}
			{item "bar_mag" "ammo" 40 {max 240}}
			{item "m1941lmg_mag" "ammo" 40 {max 240}}
			{item "m1carbine_mag" "ammo" 30 {max 90}}
			{item "m2carbine_mag" "ammo" 30 {max 90}}
			{item "colt_mag" "ammo" 28 {max 28}}
			{item "hdm_mag" "ammo" 30 {max 30}}
			{item "m3a_mag" "ammo" 75 {max 150}}
			{item "thompson_drum" "ammo" 75 {max 150}}
			{item "thompson_m1a1_mag" "ammo" 75 {max 150}}
			{item "m50reising_mag" "ammo" 75 {max 150}}
			{item "springfield_belt" "ammo" 50 {max 250}}
			{item "m1garand_grenade" "fg" 1 {max 10}{value 2}}
			{item "m1garand_grenade" "ap" 1 {max 5}{value 2}}
			;{item "m1garand_grenade" "wp" 1 {max 3}{value 5}}

			{item "rifle" "ammo" 20 {max 80}}
			{item "pistol" "ammo" 75 {max 150}}
			{item "carbine" "ammo" 30 {max 90}}
			{item "mgun" "red" "ammo" 100	{max 250}}
			{item "bandage"	1 {max 3}}
			{item "bazooka" "ammo" 1 {max 6}}
			{item "m18recoilless" "ammo" 1 {max 6}}
			{item "m18recoilless" "fg" "ammo" 1 {max 6}}
			{item "shotgun" "ammo" 3 {max 20}}
			{item "mortar60" "us" "fg" "ammo" 2 {max 10}{value 2}}
			{item "mortar81" "us" "fg" "light" "ammo" 2 {max 10}{value 3}}
			{item "mortar81" "us" "sm" "ammo" 2 {max 10}{value 3}}
			{item "hmgun" "ammo" 30 {max 400}{value 2}}
			{item "hmgun" "ap" "ammo" 30 {max 400}{value 2}}
			{item "hmgun" "inc" "ammo" 30 {max 800}{value 2}}
			{item "bullet37" "us" "ap" "ammo" 3 {max 10}{value 3}}
			{item "bullet37" "us" "fg" "ammo" 3 {max 10}{value 3}}
		}
		{radius 			8}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				150}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_small_us"
	{extender "supply_zone"
		{resupply
			{item "garand_clip" "ammo" 20 {max 80}}
			{item "springfield_clip" "ammo" 20 {max 60}}
			{item "bar_mag" "ammo" 40 {max 240}}
			{item "m1941lmg_mag" "ammo" 40 {max 240}}
			{item "m1carbine_mag" "ammo" 30 {max 90}}
			{item "m2carbine_mag" "ammo" 30 {max 90}}
			{item "colt_mag" "ammo" 28 {max 28}}
			{item "hdm_mag" "ammo" 30 {max 30}}
			{item "m3a_mag" "ammo" 75 {max 150}}
			{item "thompson_drum" "ammo" 75 {max 150}}
			{item "thompson_m1a1_mag" "ammo" 75 {max 150}}
			{item "m50reising_mag" "ammo" 75 {max 150}}
			{item "springfield_belt" "ammo" 50 {max 250}}
			{item "m1garand_grenade" "fg" 1 {max 10}{value 5}}
			{item "m1garand_grenade" "ap" 1 {max 5}{value 5}}
			;{item "m1garand_grenade" "wp" 1 {max 3}{value 5}}

			{item "rifle" "ammo" 20 {max 80}}
			{item "pistol" "ammo" 75 {max 150}}
			{item "carbine" "ammo" 30 {max 90}}
			{item "mgun" "red" "ammo" 100	{max 250}}
			{item "bandage"	1 {max 3}}
			{item "bazooka" "ammo" 1 {max 6}}
			{item "m18recoilless" "ammo" 1 {max 6}}
			{item "m18recoilless" "fg" "ammo" 1 {max 6}}
			{item "shotgun" "ammo" 3 {max 20}}
			{item "mortar60" "us" "fg" "ammo" 2 {max 10}{value 2}}
			{item "mortar81" "us" "fg" "light" "ammo" 2 {max 10}{value 3}}
			{item "mortar81" "us" "sm" "ammo" 2 {max 10}{value 3}}
			{item "hmgun" "ammo" 30 {max 400}{value 2}}
			{item "hmgun" "ap" "ammo" 30 {max 400}{value 2}}
			{item "hmgun" "inc" "ammo" 30 {max 800}{value 2}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				30}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_small_us_57mm"
	{extender "supply_zone"
		{resupply
			{item "bullet57" "us" "ap" "ammo" 1 {max 8}{value 1}}
			{item "bullet57" "us" "apcbc" "ammo" 1 {max 8}{value 1}}
			{item "bullet57" "us" "fg" "ammo" 1 {max 8}{value 1}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				10}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_small_us_76mm"
	{extender "supply_zone"
		{resupply
			{item "bullet76" "us" "ap" "ammo" 1 {max 7}{value 1}}
			{item "bullet76" "us" "apcbc" "ammo" 1 {max 7}{value 1}}
			{item "bullet76" "us" "fg" "ammo" 1 {max 7}{value 1}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				8}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_us_inf"
	{extender "supply_zone"
		{resupply
			{item "garand_clip" "ammo" 20 {max 80}}
			{item "springfield_clip" "ammo" 20 {max 60}}
			{item "bar_mag" "ammo" 40 {max 240}}
			{item "m1941lmg_mag" "ammo" 40 {max 240}}
			{item "m1carbine_mag" "ammo" 30 {max 90}}
			{item "m2carbine_mag" "ammo" 30 {max 90}}
			{item "colt_mag" "ammo" 28 {max 28}}
			{item "hdm_mag" "ammo" 30 {max 30}}
			{item "m3a_mag" "ammo" 75 {max 150}}
			{item "thompson_drum" "ammo" 75 {max 150}}
			{item "thompson_m1a1_mag" "ammo" 75 {max 150}}
			{item "m50reising_mag" "ammo" 75 {max 150}}
			{item "springfield_belt" "ammo" 50 {max 250}}
			{item "m1garand_grenade" "fg" 1 {max 10}{value 5}}
			{item "m1garand_grenade" "ap" 1 {max 5}{value 5}}
			;{item "m1garand_grenade" "wp" 1 {max 3}{value 5}}

			{item "rifle" "ammo" 20 {max 80}}
			{item "pistol" "ammo" 75 {max 150}}
			{item "carbine" "ammo" 30 {max 90}}
			{item "mgun" "red" "ammo" 100	{max 250}}
			{item "bandage"	1 {max 3}}
			{item "bazooka" "ammo" 1 {max 6}}
			{item "m18recoilless" "ammo" 1 {max 6}}
			{item "m18recoilless" "fg" "ammo" 1 {max 6}}
			{item "shotgun" "ammo" 3 {max 20}}
			{item "mortar60" "us" "fg" "ammo" 2 {max 10}{value 2}}
			{item "mortar81" "us" "fg" "light" "ammo" 2 {max 10}{value 3}}
			{item "mortar81" "us" "sm" "ammo" 2 {max 10}{value 3}}
			{item "hmgun" "ammo" 30 {max 400}{value 2}}
			{item "hmgun" "ap" "ammo" 30 {max 400}{value 2}}
			{item "hmgun" "inc" "ammo" 30 {max 800}{value 2}}
			{item "bullet37" "us" "ap" "ammo" 3 {max 10}{value 3}}
			{item "bullet37" "us" "fg" "ammo" 3 {max 10}{value 3}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				75}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

;###############################################################################
;¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤	ENGLAND	is my city	¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

(define "truck_ammo_eng_art"
	{extender "supply_zone"
		{resupply
			{item "thompson_drum" "ammo" 75 {max 150}}
			{item "thompson_m1a1_mag" "ammo" 75 {max 150}}
			{item "m50reising_mag" "ammo" 75 {max 150}}
			{item "springfield_belt" "ammo" 100 {max 1500}}
			{item "mg_mauser" "belt" "red" "ammo" 100 {max 1500}}
			{item "bren_mag" "ammo" 112 {max 1456}}
			{item "british303_belt" "ammo" 100 {max 1500}}
			{item "british303_clip" "ammo" 20 {max 60}}
			{item "lewis_mag" "ammo" 47 {max 235}}
			{item "vickersk_mag" "ammo" 96 {max 288}}
			{item "webley_clip" "ammo" 30 {max 30}}
			{item "welrod_mag" "ammo" 30 {max 30}}
			{item "sten_mag" "ammo" 64 {max 128}}
			{item "owen_mag" "ammo" 64 {max 128}}
			{item "airstrike_rp3_flare" "ammo" 1 {max 5}{value 50}}

			{item "rifle" "ammo" 20 {max 50}}
			{item "pistol" "ammo" 75 {max 128}}
			{item "mgun" "red" "ammo" 100	{max 250}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 25}}
			{item "piatrocket" "ammo" 1 {max 6}}
			{item "rifle_grenade" "ammo" 1 {max 10}{value 2}}
			{item "hmgun" "ammo" 30 {max 300}{value 2}}
			{item "bullet15" "ammo" 25 {max 200}{value 2}}
			{item "mortar50" "eng" "fg" "ammo" 2 {max 100}{value 2}}
			{item "mortar50" "eng" "sm" "ammo" 2 {max 100}{value 2}}
			{item "mortar81" "eng" "fg" "ammo" 2 {max 100}{value 3}}
			{item "mortar81" "eng" "sm" "ammo" 2 {max 100}{value 3}}
			{item "mortar107" "eng" "sm" "ammo" 1 {max 100}{value 5}}
			{item "mortar107" "eng" "fg" "ammo" 1 {max 100}{value 5}}

			;
			{item "bullet20" "eng" "zenite" "ap" "ammo" 10 {max 1000}{value 2}}
			{item "bullet20" "eng" "zenite" "fg" "ammo" 10 {max 1000}{value 2}}

			{item "bullet37" "us" "ap" "ammo" 3 {max 100}{value 3}}
			{item "bullet37" "us" "fg" "ammo" 3 {max 100}{value 3}}

			{item "bullet40" "us" "zenite" "ap" "ammo" 10 {max 1000}{value 2}}
			{item "bullet40" "us" "zenite" "fg" "ammo" 10 {max 1000}{value 2}}

			{item "bullet40" "eng" "ap" "ammo" 3 {max 100}{value 3}}
			{item "bullet40" "eng" "apcbc" "ammo" 3 {max 100}{value 3}}

			{item "bullet57" "us-eng" "eng" "ap" "ammo" 3 {max 100}{value 3}}
			{item "bullet57" "us-eng" "eng" "apc" "ammo" 3 {max 100}{value 3}}
			{item "bullet57" "us-eng" "eng" "apcbc" "ammo" 3 {max 100}{value 3}}
			{item "bullet57" "us-eng" "eng" "fg" "ammo" 3 {max 100}{value 3}}

			{item "bullet75" "us" "ap" "ammo" 2 {max 50}{value 4}}
			{item "bullet75" "us" "eng" "apcbc" "ammo" 2 {max 50}{value 4}}
			{item "bullet75" "us" "fg" "ammo" 2 {max 50}{value 4}}

			{item "bullet76" "us3inch" "ap" "ammo" 2 {max 50}{value 4}}
			{item "bullet76" "us3inch" "apcbc" "ammo" 2 {max 50}{value 4}}
			{item "bullet76" "us3inch" "fg" "ammo" 2 {max 14}{value 4}}

			{item "bullet76" "us" "ap" "ammo" 2 {max 50}{value 4}}
			{item "bullet76" "us" "apcbc" "ammo" 2 {max 50}{value 4}}
			{item "bullet76" "us" "fg" "ammo" 2 {max 40}{value 4}}

			{item "bullet76" "engs" "fg" "ammo" 2 {max 50}{value 4}}

			{item "bullet76" "eng" "ap" "ammo" 2 {max 50}{value 5}}
			{item "bullet76" "eng" "apc" "ammo" 2 {max 50}{value 5}}
			{item "bullet76" "eng" "apcbc" "ammo" 2 {max 50}{value 5}}
			{item "bullet76" "eng" "fg" "ammo" 2 {max 50}{value 5}}

			{item "bullet77" "eng" "apcbc" "ammo" 2 {max 50}{value 5}}
			{item "bullet77" "eng" "fg" "ammo" 2 {max 50}{value 5}}

			{item "bullet88" "eng" "ap" "ammo" 2 {max 30}{value 5}}
			{item "bullet88" "eng" "fg" "ammo" 2 {max 30}{value 5}}

			{item "bullet94" "eng" "apcbc" "ammo" 2 {max 40}{value 6}}
			{item "bullet94" "eng" "fg" "ammo" 2 {max 40}{value 6}}

			{item "bullet95" "eng" "fg" "ammo" 2 {max 40}{value 6}}
			;
			{item "bullet105" "us" "fg" "ammo" 1 {max 45}{value 6}}
			{item "bullet114" "eng" "fg" "ammo" 1 {max 8}{value 10}}
			{item "bullet152" "eng" "fg" "ammo" 1 {max 6}{value 15}}
			{item "bullet155" "us" "fg" "ammo" 1 {max 5}{value 15}}
			{item "bullet155" "us" "aphe" "ammo" 1 {max 5}{value 15}}
			{item "bullet155" "us" "sm" "ammo" 1 {max 5}{value 15}}
			{item "bullet183" "ammo" 1 {max 3}{value 35}}
			;
			{item "lm_ammo" "ammo" 4 {max 64}{value 15}}
			{item "bullet290" "ammo" 1 {max 20}{value 15}}
			{item "tulip" "ammo" 1 {max 6}{value 10}}
		}
		{radius 			10}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				500}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_eng_special"
	{extender "supply_zone"
		{resupply
			{item "mortar50" "eng" "wp" "ammo" 1 {max 10}{value 4}}
			{item "mortar81" "eng" "wp" "ammo" 1 {max 10}{value 6}}
			{item "mortar107" "eng" "wp" "ammo" 1 {max 10}{value 8}}

			{item "bullet57" "us-eng" "eng" "apcr" "ammo" 1 {max 10}{value 4}}
			{item "bullet57" "us-eng" "eng" "apds" "ammo" 1 {max 10}{value 4}}

			{item "bullet76" "eng" "apds" "ammo" 1 {max 10}{value 6}}

			{item "bullet77" "eng" "apds" "ammo" 1 {max 10}{value 6}}

			{item "bullet94" "eng" "apds" "ammo" 1 {max 10}{value 7}}

			{item "bullet95" "eng" "heat" "ammo" 1 {max 10}{value 7}}
			{item "bullet105" "us" "wp" "ammo" 1 {max 4}{value 10}}
			{item "bullet155" "us" "wp" "ammo" 1 {max 4}{value 16}}
		}
		{radius 			6}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				75}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_eng_art"
	{extender "supply_zone"
		{resupply
			{item "mortar50" "eng" "fg" "ammo" 2 {max 30}{value 2}}
			{item "mortar50" "eng" "sm" "ammo" 2 {max 30}{value 2}}
			{item "mortar81" "eng" "fg" "ammo" 2 {max 30}{value 3}}
			{item "mortar81" "eng" "sm" "ammo" 2 {max 30}{value 3}}
			{item "mortar107" "eng" "sm" "ammo" 1 {max 10}{value 5}}
			{item "mortar107" "eng" "fg" "ammo" 1 {max 10}{value 5}}
			;
			{item "bullet20" "eng" "zenite" "ap" "ammo" 10 {max 100}{value 2}}
			{item "bullet20" "eng" "zenite" "fg" "ammo" 10 {max 100}{value 2}}

			{item "bullet37" "us" "ap" "ammo" 3 {max 10}{value 3}}
			{item "bullet37" "us" "fg" "ammo" 3 {max 10}{value 3}}

			{item "bullet40" "us" "zenite" "ap" "ammo" 10 {max 100}{value 2}}
			{item "bullet40" "us" "zenite" "fg" "ammo" 10 {max 100}{value 2}}

			{item "bullet40" "eng" "ap" "ammo" 3 {max 10}{value 3}}
			{item "bullet40" "eng" "apcbc" "ammo" 3 {max 10}{value 3}}

			{item "bullet57" "us-eng" "eng" "ap" "ammo" 3 {max 8}{value 3}}
			{item "bullet57" "us-eng" "eng" "apc" "ammo" 3 {max 8}{value 3}}
			{item "bullet57" "us-eng" "eng" "apcbc" "ammo" 3 {max 8}{value 3}}
			{item "bullet57" "us-eng" "eng" "fg" "ammo" 3 {max 8}{value 3}}

			{item "bullet75" "us" "ap" "ammo" 2 {max 7}{value 4}}
			{item "bullet75" "us" "eng" "apcbc" "ammo" 2 {max 7}{value 4}}
			{item "bullet75" "us" "fg" "ammo" 2 {max 7}{value 4}}

			{item "bullet76" "us3inch" "ap" "ammo" 2 {max 7}{value 4}}
			{item "bullet76" "us3inch" "apcbc" "ammo" 2 {max 7}{value 4}}
			{item "bullet76" "us3inch" "fg" "ammo" 2 {max 7}{value 4}}

			{item "bullet76" "us" "ap" "ammo" 2 {max 7}{value 4}}
			{item "bullet76" "us" "apcbc" "ammo" 2 {max 7}{value 4}}
			{item "bullet76" "us" "fg" "ammo" 2 {max 7}{value 4}}

			{item "bullet76" "engs" "fg" "ammo" 2 {max 7}{value 4}}

			{item "bullet76" "eng" "ap" "ammo" 2 {max 7}{value 5}}
			{item "bullet76" "eng" "apc" "ammo" 2 {max 7}{value 5}}
			{item "bullet76" "eng" "apcbc" "ammo" 2 {max 7}{value 5}}
			{item "bullet76" "eng" "fg" "ammo" 2 {max 7}{value 5}}

			{item "bullet77" "eng" "apcbc" "ammo" 2 {max 7}{value 5}}
			{item "bullet77" "eng" "fg" "ammo" 2 {max 7}{value 5}}

			{item "bullet88" "eng" "ap" "ammo" 2 {max 7}{value 5}}
			{item "bullet88" "eng" "fg" "ammo" 2 {max 7}{value 5}}

			{item "bullet94" "eng" "apcbc" "ammo" 2 {max 7}{value 6}}
			{item "bullet94" "eng" "fg" "ammo" 2 {max 7}{value 6}}

			{item "bullet95" "eng" "fg" "ammo" 2 {max 7}{value 6}}
			;
			{item "bullet105" "us" "fg" "ammo" 1 {max 6}{value 6}}
			{item "bullet114" "eng" "fg" "ammo" 1 {max 6}{value 10}}
			{item "bullet152" "eng" "fg" "ammo" 1 {max 5}{value 15}}
			{item "bullet155" "us" "fg" "ammo" 1 {max 5}{value 15}}
			{item "bullet155" "us" "aphe" "ammo" 1 {max 5}{value 15}}
			{item "bullet155" "us" "sm" "ammo" 1 {max 5}{value 15}}
			{item "bullet183" "ammo" 1 {max 3}{value 35}}
			;
			{item "lm_ammo" "ammo" 4 {max 64}{value 15}}
			{item "bullet290" "ammo" 1 {max 20}{value 15}}
			{item "tulip" "ammo" 1 {max 6}{value 10}}
		}
		{radius 			6}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				80}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "truck_ammo_eng_inf"
	{extender "supply_zone"
		{resupply
			{item "thompson_drum" "ammo" 75 {max 150}}
			{item "thompson_m1a1_mag" "ammo" 75 {max 150}}
			{item "m50reising_mag" "ammo" 75 {max 150}}
			{item "springfield_belt" "ammo" 100 {max 1000}}
			{item "mg_mauser" "belt" "red" "ammo" 100 {max 1000}}
			{item "bren_mag" "ammo" 112 {max 1008}}
			{item "british303_belt" "ammo" 100 {max 1000}}
			{item "british303_clip" "ammo" 20 {max 60}}
			{item "lewis_mag" "ammo" 47 {max 235}}
			{item "vickersk_mag" "ammo" 96 {max 288}}
			{item "webley_clip" "ammo" 30 {max 30}}
			{item "welrod_mag" "ammo" 30 {max 30}}
			{item "sten_mag" "ammo" 64 {max 128}}
			{item "owen_mag" "ammo" 64 {max 128}}

			{item "rifle" "ammo" 20 {max 50}}
			{item "pistol" "ammo" 75 {max 128}}
			{item "mgun" "red" "ammo" 100	{max 250}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 25}}
			{item "piatrocket" "ammo" 1 {max 6}}
			{item "rifle_grenade" "ammo" 1 {max 10}{value 2}}
			{item "hmgun" "ammo" 30 {max 300}{value 2}}
			{item "bullet15" "ammo" 25 {max 200}{value 2}}
			{item "mortar50" "eng" "fg" "ammo" 2 {max 100}{value 2}}
			{item "mortar50" "eng" "sm" "ammo" 2 {max 100}{value 2}}
			{item "mortar81" "eng" "fg" "ammo" 2 {max 100}{value 3}}
			{item "mortar81" "eng" "sm" "ammo" 2 {max 100}{value 3}}
			{item "bullet40" "eng" "ap" "ammo" 3 {max 100}{value 3}}
			{item "bullet40" "eng" "apcbc" "ammo" 3 {max 100}{value 3}}
		}
		{radius 			10}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				300}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "halftrack_ammo_eng_inf"
	{extender "supply_zone"
		{resupply
			{item "thompson_drum" "ammo" 75 {max 150}}
			{item "thompson_m1a1_mag" "ammo" 75 {max 150}}
			{item "m50reising_mag" "ammo" 75 {max 150}}
			{item "springfield_belt" "ammo" 50 {max 250}}
			{item "mg_mauser" "belt" "red" "ammo" 50 {max 225}}
			{item "bren_mag" "ammo" 56 {max 224}}
			{item "british303_belt" "ammo" 50 {max 250}}
			{item "british303_clip" "ammo" 20 {max 60}}
			{item "lewis_mag" "ammo" 47 {max 235}}
			{item "vickersk_mag" "ammo" 96 {max 288}}
			{item "webley_clip" "ammo" 30 {max 30}}
			{item "welrod_mag" "ammo" 30 {max 30}}
			{item "sten_mag" "ammo" 64 {max 128}}
			{item "owen_mag" "ammo" 64 {max 128}}

			{item "rifle" "ammo" 20 {max 50}}
			{item "pistol" "ammo" 75 {max 128}}
			{item "mgun" "red" "ammo" 100	{max 250}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 25}}
			{item "piatrocket" "ammo" 1 {max 6}}
			{item "rifle_grenade" "ammo" 1 {max 10}{value 2}}
			{item "hmgun" "ammo" 30 {max 300}{value 2}}
			{item "bullet15" "ammo" 25 {max 200}{value 2}}
			{item "mortar50" "eng" "fg" "ammo" 2 {max 10}{value 2}}
			{item "mortar50" "eng" "sm" "ammo" 2 {max 10}{value 2}}
			{item "mortar81" "eng" "fg" "ammo" 2 {max 10}{value 3}}
			{item "mortar81" "eng" "sm" "ammo" 2 {max 10}{value 3}}
			{item "bullet40" "eng" "ap" "ammo" 3 {max 10}{value 3}}
			{item "bullet40" "eng" "apcbc" "ammo" 3 {max 10}{value 3}}
		}
		{radius 			8}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				150}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "kangaroo_eng"
	{extender "supply_zone"
		{resupply
			{item "thompson_drum" "ammo" 75 {max 150}}
			{item "thompson_m1a1_mag" "ammo" 75 {max 150}}
			{item "m50reising_mag" "ammo" 75 {max 150}}
			{item "springfield_belt" "ammo" 50 {max 250}}
			{item "mg_mauser" "belt" "red" "ammo" 50 {max 225}}
			{item "bren_mag" "ammo" 56 {max 224}}
			{item "british303_belt" "ammo" 50 {max 250}}
			{item "british303_clip" "ammo" 20 {max 60}}
			{item "lewis_mag" "ammo" 47 {max 235}}
			{item "vickersk_mag" "ammo" 96 {max 288}}
			{item "webley_clip" "ammo" 30 {max 30}}
			{item "welrod_mag" "ammo" 30 {max 30}}
			{item "sten_mag" "ammo" 64 {max 128}}
			{item "owen_mag" "ammo" 64 {max 128}}

			{item "rifle" "ammo" 20 {max 50}}
			{item "pistol" "ammo" 75 {max 128}}
			{item "mgun" "red" "ammo" 100	{max 250}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 25}}
			{item "piatrocket" "ammo" 1 {max 6}}
			{item "rifle_grenade" "ammo" 1 {max 10}{value 2}}
			{item "hmgun" "ammo" 30 {max 300}{value 2}}
			{item "bullet15" "ammo" 25 {max 200}{value 2}}
			{item "mortar50" "eng" "fg" "ammo" 2 {max 10}{value 2}}
			{item "mortar50" "eng" "sm" "ammo" 2 {max 10}{value 2}}
			{item "mortar81" "eng" "fg" "ammo" 2 {max 10}{value 3}}
			{item "mortar81" "eng" "sm" "ammo" 2 {max 10}{value 3}}
		}
		{radius 			8}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				100}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_small_eng"
	{extender "supply_zone"
		{resupply
			{item "thompson_drum" "ammo" 75 {max 150}}
			{item "thompson_m1a1_mag" "ammo" 75 {max 150}}
			{item "m50reising_mag" "ammo" 75 {max 150}}
			{item "springfield_belt" "ammo" 50 {max 250}}
			{item "mg_mauser" "belt" "red" "ammo" 50 {max 225}}
			{item "bren_mag" "ammo" 56 {max 224}}
			{item "british303_belt" "ammo" 50 {max 250}}
			{item "british303_clip" "ammo" 20 {max 60}}
			{item "lewis_mag" "ammo" 47 {max 235}}
			{item "vickersk_mag" "ammo" 96 {max 288}}
			{item "webley_clip" "ammo" 30 {max 30}}
			{item "welrod_mag" "ammo" 30 {max 30}}
			{item "sten_mag" "ammo" 64 {max 128}}
			{item "owen_mag" "ammo" 64 {max 128}}

			{item "rifle" "ammo" 20 {max 50}}
			{item "pistol" "ammo" 75 {max 128}}
			{item "mgun" "red" "ammo" 100 {max 250}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 25}}
			{item "piatrocket" "ammo" 1 {max 6}}
			{item "rifle_grenade" "ammo" 1 {max 10}{value 5}}
			{item "hmgun" "ammo" 30 {max 300}{value 2}}
			{item "bullet15" "ammo" 25 {max 200}{value 2}}
			{item "mortar50" "eng" "fg" "ammo" 2 {max 10}{value 2}}
			{item "mortar50" "eng" "sm" "ammo" 2 {max 10}{value 2}}
			{item "mortar81" "eng" "fg" "ammo" 2 {max 10}{value 3}}
			{item "mortar81" "eng" "sm" "ammo" 2 {max 10}{value 3}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				30}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_eng_inf"
	{extender "supply_zone"
		{resupply
			{item "thompson_drum" "ammo" 75 {max 150}}
			{item "thompson_m1a1_mag" "ammo" 75 {max 150}}
			{item "m50reising_mag" "ammo" 75 {max 150}}
			{item "springfield_belt" "ammo" 50 {max 250}}
			{item "mg_mauser" "belt" "red" "ammo" 50 {max 225}}
			{item "bren_mag" "ammo" 56 {max 224}}
			{item "british303_belt" "ammo" 50 {max 250}}
			{item "british303_clip" "ammo" 20 {max 60}}
			{item "lewis_mag" "ammo" 47 {max 235}}
			{item "vickersk_mag" "ammo" 96 {max 288}}
			{item "webley_clip" "ammo" 30 {max 30}}
			{item "welrod_mag" "ammo" 30 {max 30}}
			{item "sten_mag" "ammo" 64 {max 128}}
			{item "owen_mag" "ammo" 64 {max 128}}

			{item "rifle" "ammo" 20 {max 50}}
			{item "pistol" "ammo" 75 {max 128}}
			{item "mgun" "red" "ammo" 100	{max 250}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 25}}
			{item "piatrocket" "ammo" 1 {max 6}}
			{item "rifle_grenade" "ammo" 1 {max 10}{value 5}}
			{item "hmgun" "ammo" 30 {max 300}{value 2}}
			{item "bullet15" "ammo" 25 {max 200}{value 2}}
			{item "mortar50" "eng" "fg" "ammo" 2 {max 10}{value 2}}
			{item "mortar50" "eng" "sm" "ammo" 2 {max 10}{value 2}}
			{item "mortar81" "eng" "fg" "ammo" 2 {max 10}{value 3}}
			{item "mortar81" "eng" "sm" "ammo" 2 {max 10}{value 3}}
			{item "bullet40" "eng" "ap" "ammo" 3 {max 10}{value 3}}
			{item "bullet40" "eng" "apcbc" "ammo" 3 {max 10}{value 3}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				75}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
;###############################################################################
;¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤	SOVIET		¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

(define "truck_ammo_rus_art"
	{extender "supply_zone"
		{resupply
			{item "mosin_clip" "ammo" 20 {max 40}}
			{item "dp27_mag" "ammo" 94 {max 1504}}
			{item "dt29_mag" "ammo" 120 {max 1560}}
			{item "nagant_clip" "ammo" 28 {max 28}}
			{item "tt_mag" "ammo" 32 {max 32}}
			{item "ppd40_mag" "ammo" 71 {max 213}}
			{item "ppsh_mag" "ammo" 71 {max 213}}
			{item "ppsh41_mag" "ammo" 70 {max 210}}
			{item "pps43_mag" "ammo" 70 {max 210}}
			{item "rus_mg_belt" "ammo" 100 {max 1500}}
			{item "sks_clip" "ammo" 20 {max 40}}
			{item "svt40_mag" "ammo" 20 {max 40}}

			{item "rifle" "ammo" 20 {max 40}}
			{item "pistol" "ammo" 71 {max 210}}
			{item "mgun" "green" "ammo" 100	{max 240}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "hmgun" "ammo" 30 {max 300}{value 2}}
			{item "dshk_belt" "ammo" 30 {max 300}{value 2}}
			{item "dshk_belt" "ap" "ammo" 30 {max 300}{value 2}}
			{item "mortar82" "rus" "fg" "ammo" 2 {max 100}{value 3}}
			{item "mortar120" "rus" "fg" "ammo" 1 {max 100}{value 6}}
			{item "mortar120" "rus" "hefg" "ammo" 1 {max 100}{value 6}}
			{item "mortar_flaer" "ammo" 1 {max 5}{value 15}}
			;
			{item "bullet20" "rus" "zenite" "ap" "ammo" 10 {max 1000}{value 2}}
			{item "bullet20" "rus" "zenite" "fg" "ammo" 10 {max 1000}{value 2}}

			{item "bullet37" "rus" "zenite" "ap" "ammo" 10 {max 1000}{value 2}}
			{item "bullet37" "rus" "zenite" "fg" "ammo" 10 {max 1000}{value 2}}

			{item "bullet45" "rus" "aphebc" "ammo" 3 {max 100}{value 3}}
			{item "bullet45" "rus" "fg" "ammo" 3 {max 100}{value 3}}

			{item "bullet57" "rus" "aphebc" "ammo" 3 {max 100}{value 3}}
			{item "bullet57" "rus" "fg" "ammo" 3 {max 100}{value 3}}

			{item "bullet76" "rus" "br350a" "ammo" 2 {max 50}{value 4}}
			{item "bullet76" "rus" "br350b" "ammo" 2 {max 50}{value 4}}
			{item "bullet76" "rus" "br350sp" "ammo" 2 {max 50}{value 4}}
			{item "bullet76" "rus" "fg" "ammo" 2 {max 64}{value 4}}

			{item "bullet85" "rus" "aphe" "ammo" 2 {max 50}{value 5}}
			{item "bullet85" "rus" "aphebc" "ammo" 2 {max 50}{value 5}}
			{item "bullet85" "rus" "fg" "ammo" 2 {max 50}{value 5}}

			{item "bullet100" "rus" "aphe" "ammo" 1 {max 30}{value 6}}
			{item "bullet100" "rus" "aphebc" "ammo" 1 {max 30}{value 6}}
			{item "bullet100" "rus" "fg" "ammo" 1 {max 30}{value 6}}

			{item "bullet122" "rus" "fg" "ammo" 1 {max 28}{value 10}}

			{item "bullet122" "rusl" "aphe" "ammo" 1 {max 20}{value 10}}
			{item "bullet122" "rusl" "aphebc" "ammo" 1 {max 20}{value 10}}
			{item "bullet122" "rusl" "fg" "ammo" 1 {max 12}{value 10}}

			{item "bullet152" "rusd" "fg" "ammo" 1 {max 6}{value 15}}

			{item "bullet152" "rus" "ap" "ammo" 1 {max 12}{value 15}}
			{item "bullet152" "rus" "fg" "ammo" 1 {max 24}{value 15}}

			{item "bullet152" "rusl" "aphebc" "ammo" 1 {max 5}{value 15}}
			{item "bullet152" "rusl" "fg" "ammo" 1 {max 14}{value 15}}
			;
			{item "bullet203" "ammo" 1 {max 3}{value 40}}

			{item "bullet280" "f674k" "ammo" 1 {max 3}{value 50}}
			{item "bullet280" "f674" "ammo" 1 {max 3}{value 50}}
			;
			{item "bm8" "ammo" 4 {max 48}{value 10}}
			{item "katusha" "ammo" 2 {max 32}{value 20}}
			{item "m31" "ammo" 1 {max 24}{value 20}}
		}
		{radius 			10}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				500}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_rus_special"
	{extender "supply_zone"
		{resupply
			{item "mortar82" "rus" "wp" "ammo" 1 {max 10}{value 4}}
			{item "mortar120" "rus" "wp" "ammo" 1 {max 10}{value 10}}
			{item "mortar120" "rus" "inc" "ammo" 1 {max 10}{value 10}}

			{item "bullet45" "rus" "apcr" "ammo" 1 {max 10}{value 3}}

			{item "bullet57" "rus" "apcr" "ammo" 1 {max 10}{value 4}}

			{item "bullet76" "rus" "wp" "ammo" 1 {max 10}{value 7}}
			{item "bullet76" "rus" "apcr" "ammo" 1 {max 10}{value 6}}
			{item "bullet76" "rus" "heat" "ammo" 1 {max 10}{value 6}}

			{item "bullet85" "rus" "apcr" "ammo" 1 {max 10}{value 7}}

			{item "bullet122" "rus" "wp" "ammo" 1 {max 6}{value 12}}
			{item "bullet122" "rus" "heat" "ammo" 1 {max 6}{value 10}}

			;{item "bullet152" "rusl" "heat" "ammo" 1 {max 100}{value 7}};not used ww2
		}
		{radius 			6}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				75}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_rus_art"
	{extender "supply_zone"
		{resupply
			{item "mortar82" "rus" "fg" "ammo" 2 {max 30}{value 3}}
			{item "mortar120" "rus" "fg" "ammo" 1 {max 10}{value 6}}
			{item "mortar120" "rus" "hefg" "ammo" 1 {max 10}{value 6}}
			{item "mortar_flaer" "ammo" 1 {max 5}{value 15}}
			;
			{item "bullet20" "rus" "zenite" "ap" "ammo" 10 {max 100}{value 2}}
			{item "bullet20" "rus" "zenite" "fg" "ammo" 10 {max 100}{value 2}}

			{item "bullet37" "rus" "zenite" "ap" "ammo" 10 {max 100}{value 2}}
			{item "bullet37" "rus" "zenite" "fg" "ammo" 10 {max 100}{value 2}}

			{item "bullet45" "rus" "aphebc" "ammo" 3 {max 10}{value 3}}
			{item "bullet45" "rus" "fg" "ammo" 3 {max 10}{value 3}}

			{item "bullet57" "rus" "aphebc" "ammo" 3 {max 8}{value 3}}
			{item "bullet57" "rus" "fg" "ammo" 3 {max 8}{value 3}}

			{item "bullet76" "rus" "br350a" "ammo" 2 {max 7}{value 4}}
			{item "bullet76" "rus" "br350b" "ammo" 2 {max 7}{value 4}}
			{item "bullet76" "rus" "br350sp" "ammo" 2 {max 7}{value 4}}
			{item "bullet76" "rus" "fg" "ammo" 2 {max 7}{value 4}}

			{item "bullet85" "rus" "aphe" "ammo" 2 {max 7}{value 5}}
			{item "bullet85" "rus" "aphebc" "ammo" 2 {max 7}{value 5}}
			{item "bullet85" "rus" "fg" "ammo" 2 {max 7}{value 5}}

			{item "bullet100" "rus" "aphe" "ammo" 1 {max 6}{value 6}}
			{item "bullet100" "rus" "aphebc" "ammo" 1 {max 6}{value 6}}
			{item "bullet100" "rus" "fg" "ammo" 1 {max 6}{value 6}}

			{item "bullet122" "rus" "fg" "ammo" 1 {max 6}{value 10}}

			{item "bullet122" "rusl" "aphe" "ammo" 1 {max 6}{value 10}}
			{item "bullet122" "rusl" "aphebc" "ammo" 1 {max 6}{value 10}}
			{item "bullet122" "rusl" "fg" "ammo" 1 {max 6}{value 10}}

			{item "bullet152" "rusd" "fg" "ammo" 1 {max 5}{value 15}}

			{item "bullet152" "rus" "ap" "ammo" 1 {max 5}{value 15}}
			{item "bullet152" "rus" "fg" "ammo" 1 {max 5}{value 15}}

			{item "bullet152" "rusl" "aphebc" "ammo" 1 {max 5}{value 15}}
			{item "bullet152" "rusl" "fg" "ammo" 1 {max 5}{value 15}}
			;
			{item "bullet203" "ammo" 1 {max 3}{value 40}}

			{item "bullet280" "f674k" "ammo" 1 {max 3}{value 50}}
			{item "bullet280" "f674" "ammo" 1 {max 3}{value 50}}
			;
			{item "bm8" "ammo" 4 {max 48}{value 10}}
			{item "katusha" "ammo" 2 {max 32}{value 20}}
			{item "m31" "ammo" 1 {max 24}{value 20}}
		}
		{radius 			6}
		{resupplyPeriod 	5}
		{regenerationPeriod 0}
		{limit 				80}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "truck_ammo_rus_inf"
	{extender "supply_zone"
		{resupply
			{item "mosin_clip" "ammo" 20 {max 40}}
			{item "dp27_mag" "ammo" 94 {max 1034}}
			{item "dt29_mag" "ammo" 120 {max 1080}}
			{item "nagant_clip" "ammo" 28 {max 28}}
			{item "tt_mag" "ammo" 32 {max 32}}
			{item "ppd40_mag" "ammo" 71 {max 213}}
			{item "ppsh_mag" "ammo" 71 {max 213}}
			{item "ppsh41_mag" "ammo" 70 {max 210}}
			{item "pps43_mag" "ammo" 70 {max 210}}
			{item "rus_mg_belt" "ammo" 100 {max 1000}}
			{item "sks_clip" "ammo" 20 {max 40}}
			{item "svt40_mag" "ammo" 20 {max 40}}

			{item "rifle" "ammo" 20 {max 40}}
			{item "pistol" "ammo" 71 {max 210}}
			{item "mgun" "green" "ammo" 100	{max 240}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "mortar82" "rus" "fg" "ammo" 2 {max 100}{value 3}}
			{item "hmgun" "ammo" 30 {max 300}{value 2}}
			{item "dshk_belt" "ammo" 30 {max 300}{value 2}}
			{item "dshk_belt" "ap" "ammo" 30 {max 300}{value 2}}
			{item "bullet45" "rus" "aphebc" "ammo" 3 {max 100}{value 3}}
			{item "bullet45" "rus" "fg" "ammo" 3 {max 100}{value 3}}
		}
		{radius 			10}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				300}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "halftrack_ammo_rus_inf"
	{extender "supply_zone"
		{resupply
			{item "mosin_clip" "ammo" 20 {max 40}}
			{item "dp27_mag" "ammo" 47 {max 141}}
			{item "dt29_mag" "ammo" 60 {max 240}}
			{item "nagant_clip" "ammo" 28 {max 28}}
			{item "tt_mag" "ammo" 32 {max 32}}
			{item "ppd40_mag" "ammo" 71 {max 213}}
			{item "ppsh_mag" "ammo" 71 {max 213}}
			{item "ppsh41_mag" "ammo" 70 {max 210}}
			{item "pps43_mag" "ammo" 70 {max 210}}
			{item "rus_mg_belt" "ammo" 50 {max 250}}
			{item "sks_clip" "ammo" 20 {max 40}}
			{item "svt40_mag" "ammo" 20 {max 40}}

			{item "rifle" "ammo" 20 {max 40}}
			{item "pistol" "ammo" 71 {max 210}}
			{item "mgun" "green" "ammo" 100	{max 240}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "mortar82" "rus" "fg" "ammo" 2 {max 30}{value 3}}
			{item "hmgun" "ammo" 30 {max 300}{value 2}}
			{item "dshk_belt" "ammo" 30 {max 300}{value 2}}
			{item "dshk_belt" "ap" "ammo" 30 {max 300}{value 2}}
			{item "bullet45" "rus" "aphebc" "ammo" 3 {max 10}{value 3}}
			{item "bullet45" "rus" "fg" "ammo" 3 {max 10}{value 3}}
		}
		{radius 			8}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				150}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_small_rus"
	{extender "supply_zone"
		{resupply
			{item "mosin_clip" "ammo" 20 {max 40}}
			{item "dp27_mag" "ammo" 47 {max 141}}
			{item "dt29_mag" "ammo" 60 {max 240}}
			{item "nagant_clip" "ammo" 28 {max 28}}
			{item "tt_mag" "ammo" 32 {max 32}}
			{item "ppd40_mag" "ammo" 71 {max 213}}
			{item "ppsh_mag" "ammo" 71 {max 213}}
			{item "ppsh41_mag" "ammo" 70 {max 210}}
			{item "pps43_mag" "ammo" 70 {max 210}}
			{item "rus_mg_belt" "ammo" 50 {max 250}}
			{item "sks_clip" "ammo" 20 {max 40}}
			{item "svt40_mag" "ammo" 20 {max 40}}

			{item "rifle" "ammo" 20 {max 40}}
			{item "pistol" "ammo" 71 {max 210}}
			{item "mgun" "green" "ammo" 100	{max 240}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "mortar82" "rus" "fg" "ammo" 2 {max 30}{value 3}}
			{item "hmgun" "ammo" 30 {max 300}{value 2}}
			{item "dshk_belt" "ammo" 30 {max 300}{value 2}}
			{item "dshk_belt" "ap" "ammo" 30 {max 300}{value 2}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				30}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "box_ammo_rus_inf"
	{extender "supply_zone"
		{resupply
			{item "mosin_clip" "ammo" 20 {max 40}}
			{item "dp27_mag" "ammo" 47 {max 141}}
			{item "dt29_mag" "ammo" 60 {max 240}}
			{item "nagant_clip" "ammo" 28 {max 28}}
			{item "tt_mag" "ammo" 32 {max 32}}
			{item "ppd40_mag" "ammo" 71 {max 213}}
			{item "ppsh_mag" "ammo" 71 {max 213}}
			{item "ppsh41_mag" "ammo" 70 {max 210}}
			{item "pps43_mag" "ammo" 70 {max 210}}
			{item "rus_mg_belt" "ammo" 50 {max 250}}
			{item "sks_clip" "ammo" 20 {max 40}}
			{item "svt40_mag" "ammo" 20 {max 40}}

			{item "rifle" "ammo" 20 {max 40}}
			{item "pistol" "ammo" 71 {max 210}}
			{item "mgun" "green" "ammo" 100	{max 240}}
			{item "bandage"	1 {max 3}}
			{item "ptr" "ammo" 5 {max 20}}
			{item "mortar82" "rus" "fg" "ammo" 2 {max 30}{value 3}}
			{item "hmgun" "ammo" 30 {max 300}{value 2}}
			{item "dshk_belt" "ammo" 30 {max 300}{value 2}}
			{item "dshk_belt" "ap" "ammo" 30 {max 300}{value 2}}
			{item "bullet45" "rus" "aphebc" "ammo" 3 {max 10}{value 3}}
			{item "bullet45" "rus" "fg" "ammo" 3 {max 10}{value 3}}
		}
		{radius 			6}		;resupply radius in meter
		{resupplyPeriod 	5}		;resupply period in seconds
		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				75}		;max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
