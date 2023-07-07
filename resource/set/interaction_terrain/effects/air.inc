;SDL
{"air"
	{on detonate
	
		{if stuff "molotov_coctail"
			{spawn "ex_molot"}
	   else stuff "wp grenade"
			{spawn "ex_wp"}
		else stuff "dynamite"
			{spawn "ex_bomb_big"}
		else stuff "grenade"
			{spawn "ex_air_big"}
		else stuff "big shell fg bomb"
			{spawn "ex_bomb_big"}
		else stuff "size_maximum"
			{spawn "ex_air_big2"}
;------------------ Normand Pack
    		else stuff "big sm"		;for smoke shell
			{spawn "ex_arm_big"}
			{spawn "smoke_shell"}
		else stuff "sm"			;for smoke shell
			{spawn "smoke_shell"}
		else stuff "nbk"
			{spawn "smoke_shell"}
		else stuff "mortar_ab_light"
			{spawn "mortar_ab_light_ground"}
;------------------ Normand Pack
		}
	}
}
