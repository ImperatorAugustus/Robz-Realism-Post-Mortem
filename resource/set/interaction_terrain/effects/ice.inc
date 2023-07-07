{"ice"
  {on hit
    {if min_mass 100
      {if effector "tree"
        {spawn "tree_crush"}
      else
        {spawn "spheredust_small"}
      }
    else min_mass 10
      {spawn "spheredust_small_short"}
    }
  }
  {on detonate
    {if stuff "molotov_coctail"
      {spawn "ex_molot"}
      {spawn "fire_molot_ground"}
      {spawn "fire_shellhole"}
    else stuff "big smoke"
	{spawn "ex_arm_big"}
	{spawn "smoke_shell"}
				else stuff "medium_smoke"
                    {spawn "ex_arm_big"}
                    {spawn "smoke_shell_medium"}
				else stuff "big_smoke"
                    {spawn "ex_arm_big"}
                    {spawn "smoke_shell_big"}
;------------------ Normand Pack
    else stuff "big sm"		;for smoke shell
	{spawn "ex_arm_big"}
	{spawn "smoke_shell"}
    else stuff "sm"		;for smoke shell
	{spawn "smoke_shell"}
    else stuff "nbk"
	{spawn "smoke_shell"}
    else stuff "mortar_ab_light"
	{spawn "mortar_ab_light_ground"}
;------------------ Normand Pack
;------------------ HEAT FX
		else stuff "heat_small"
			{spawn "ex_heat_small_w"}
      			{spawn "crater_small_land" terrain_texmod}
		else stuff "heat_medium"
			{spawn "ex_heat_medium_w"}
      			{spawn "crater_small_land" terrain_texmod}
		else stuff "heat_big"
			{spawn "ex_heat_big_w"}
      			{spawn "crater_small" terrain_texmod}
;------------------ HEAT FX
;------------------ radioman arty call-in -------------------

    else stuff "mortar_flaer"
	  {spawn "mortar_explosion_flaer"}
    else stuff "mortar_explosion"
      {spawn "ex_fg_mortar_medium_w"}
      {spawn "grenade_at_shellhole" terrain_texmod} 

    else stuff "artillery_105_flare"
      {spawn "artillery_explosion_105"}
    else stuff "artillery_155_flare"
      {spawn "artillery_explosion_155"}
    else stuff "artillery_240_flare"
      {spawn "artillery_explosion_240"}
	else stuff "airstrike_rp3_flare"
      {spawn "airstrike_rp3"}
    else stuff "artillery_explosion_240"
      {spawn "ex_fg_maximum_w"}
      {spawn "crater_big" terrain_texmod}

;------------------ radioman arty call-in -------------------
    else stuff "ap2 shell"
      {spawn "ex_fg_minimum_w"}
	else stuff "ap3 shell"
      {spawn "ex_fg_minimum_w"}
    else stuff "wp grenade"
      {spawn "ex_wp"}
    else stuff "artillery_explosion_mega"
      {spawn "ex_fg_mega"}
      {spawn "crater_norm_land_big" terrain_texmod}
    else stuff "sturmtiger ammo"
      {spawn "ex_fg_380"}
      {spawn "crater_big" terrain_texmod}
    else stuff "bullet600 ammo"
      {spawn "ex_fg_mega"}
      {spawn "crater_norm_land_big" terrain_texmod}
	else stuff "incendiary_med"
		{spawn "ex_incendiary_med"}
	else stuff "nebel incendiary"
		{spawn "ex_incendiary"}
    else stuff "mortar_fg_medium"
      {spawn "ex_fg_medium_mortar_w"}
      {spawn "grenade_at_shellhole" terrain_texmod}
    else stuff "wp_small"
      {spawn "ex_wp_small"}
    else stuff "wp_medium"
      {spawn "ex_wp_medium"}
    else stuff "wp ammo big"
      {spawn "ex_wp_big"}
    else stuff "wp ammo"
      {spawn "ex_wp"}
    else stuff "dynamite"
      {spawn "ex_bomb_big_snow"}
    else stuff "grenade big"
      {spawn "ex_grenade_big_snow"}
    else stuff "grenade"
      {spawn "ex_grenade_sm_snow"}
    else stuff "plasma"
      {spawn "ex_bul_plasma"}
    else stuff "small bullet"
      {spawn "ex_bul_sm_snow"}
    else stuff "zenite fg"
      {spawn "ex_fg_minimum"}
      {spawn "grenade_shellhole" terrain_texmod}
    else stuff "zenite"
      {spawn "ex_bul_zenit_snow"}
	else stuff "rifle_fg"
		{spawn "ex_bul_big_snow"}
		{spawn "ex_bul_heavy_inc"}
    else stuff "bullet"
      {spawn "ex_bul_big_snow"}
    else stuff "mortar"
      {spawn "ex_mort_big_snow"}
	else stuff "big mortar_smoke"
	  {spawn "mortar_smoke"}
    else stuff "shell_big_mortar"
      {spawn "ex_fg_big_mortar_w"}
      {spawn "crater_norm_land" terrain_texmod}
    else stuff "mortar"
      {spawn "ex_bomb_big_snow"}
    else stuff "shell size_minimum fg"
      {spawn "ex_fg_minimum_w"}
    else stuff "shell size_minimum"
      {spawn "ex_ap_minimum"}
	  {spawn "shellhole_small"}
    else stuff "shell size_small fg"
      {spawn "ex_fg_small_w"}
    else stuff "shell size_small"
      {spawn "ex_ap_small"}
	  {spawn "shellhole_small"}
    else stuff "shell size_medium fg"
      {spawn "ex_fg_medium_w"}
      {spawn "crater_norm_land" terrain_texmod}
    else stuff "shell size_medium"
      {spawn "ex_ap_medium"}
	  {spawn "shellhole_medium"}
    else stuff "shell size_big fg"
      {spawn "ex_fg_big_w"}
      {spawn "crater_norm" terrain_texmod}
    else stuff "shell size_big"
      {spawn "ex_ap_medium"}
	  {spawn "shellhole_medium"}
    else stuff "shell size_maximum"
      {spawn "ex_fg_maximum_w"}
    else stuff "big shell extra"
      {spawn "ex_bomb_big_snow" offset 0 0 20}
    else stuff "big shell fg bomb no_crater small"
      {spawn "shockwave"}
      {spawn "ex_mort_big_snow"}
    else stuff "big shell fg bomb no_crater"
      {spawn "ex_bomb_big_snow"}
    else stuff "big shell fg bomb"
      {spawn "ex_bomb_big_snow"}
    else stuff "big shell fg"
      {spawn "shockwave"}
      {spawn "ex_mort_big_snow"}
    else stuff "big shell ap"
      {spawn "ex_mort_sm_snow"}
    else stuff "small shell fg"
      {spawn "shockwave"}
      {spawn "ex_anti_small"}
      {spawn "snow_hit_big"}
    else stuff "shell fg"
      {spawn "shockwave"}
      {spawn "ex_mort_big_snow"}
    else stuff "shell ap"
      {spawn "ex_arm_sm"}
      {spawn "snow_hit_big"}
    else stuff "mine antipersonnel"
	  {spawn "ex_mort_sm_snow"}
    else stuff "mine antitank"
      {spawn "ex_mort_big_snow"}
	else stuff "mine clockwork"
		{spawn "ex_anti_big"}
    else stuff "dynamite_clockwork"
      {spawn "ex_bomb_big_snow"}
    else stuff "tnt_bag"
      {spawn "ex_bomb_big_snow"}
    else stuff "flaerammo"
	  {spawn "artillery_explosion_flaer"}
    }
  }
}
