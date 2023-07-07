;SDL
{"ground"
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

;------------------ HEAT FX-------
		else stuff "heat_small"
			{spawn "ex_heat_small"}
      			{spawn "crater_small_land" terrain_texmod}
		else stuff "heat_medium"
			{spawn "ex_heat_medium"}
      			{spawn "crater_small_land" terrain_texmod}
		else stuff "heat_big"
			{spawn "ex_heat_big"}
      			{spawn "crater_small" terrain_texmod}
;------------------ HEAT FX-------

;------------------ radioman arty call-in -------------------

    else stuff "mortar_flaer"
	  {spawn "mortar_explosion_flaer"}
    else stuff "mortar_explosion"
      {spawn "ex_fg_medium_mortar"}
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
      {spawn "ex_fg_maximum"}
      {spawn "crater_big" terrain_texmod}

;------------------ radioman arty call-in -------------------
    else stuff "ap2 shell"
      {spawn "ex_fg_minimum"}
	else stuff "ap3 shell"
      {spawn "ex_fg_minimum"}
    else stuff "wp grenade"
      {spawn "ex_wp"}
    		else stuff "bullet15"
      			{spawn "ex_bul_heavy"}
	else stuff "incendiary_med"
		{spawn "ex_incendiary_med"}
	else stuff "nebel incendiary"
		{spawn "ex_incendiary"}
    else stuff "mortar_fg_medium"
      {spawn "ex_fg_medium_mortar"}
      {spawn "grenade_at_shellhole" terrain_texmod}
    else stuff "small_deep_fx"
      {spawn "ex_fg_small_deep"}
      {spawn "crater_norm" terrain_texmod}
    else stuff "medium_deep_fx"
      {spawn "ex_fg_medium_deep"}
      {spawn "crater_norm" terrain_texmod}
    else stuff "artillery_explosion_mega"
      {spawn "ex_fg_mega"}
      {spawn "crater_norm_land_big" terrain_texmod}
    else stuff "sturmtiger ammo"
      {spawn "ex_fg_380"}
      {spawn "crater_big" terrain_texmod}
    else stuff "bullet600 ammo"
      {spawn "ex_fg_mega"}
      {spawn "crater_norm_land_big" terrain_texmod}
    else stuff "wp_small"
      {spawn "ex_wp_small"}
    else stuff "wp_medium"
      {spawn "ex_wp_medium"}
    else stuff "wp ammo big"
      {spawn "ex_wp_big"}
    else stuff "wp ammo"
      {spawn "ex_wp"}
    else stuff "dynamite"
      {spawn "ex_bomb_big"}
      {spawn "shellhole_big"}
    else stuff "grenade big"
      {spawn "ex_grenade_big"}
      {spawn "grenade_at_shellhole" terrain_texmod}
    else stuff "uber_bazooka"
      {spawn "ex_fg_minimum"}
    else stuff "grenade"
      {spawn "ex_grenade_sm"}
      {spawn "grenade_shellhole" terrain_texmod}
    else stuff "beam"
      {spawn "ex_bul_beam"}
    else stuff "plasma"
      {spawn "ex_bul_plasma"}
    else stuff "small bullet"
      {spawn "ex_bul_sm"}
    else stuff "zenite fg"
      {spawn "ex_fg_zenite"}
      {spawn "grenade_shellhole" terrain_texmod}
    else stuff "zenite"
      {spawn "ex_bul_zenit"}
      {spawn "shellhole_small"}
    else stuff "bullet hmgun inc"
	  {spawn "ex_bul_heavy"}
      {spawn "ex_bul_heavy_inc"}
    else stuff "bullet hmgun"
      {spawn "ex_bul_heavy"}
	else stuff "rifle_fg"
		{spawn "ex_bul_big"}
		{spawn "ex_bul_heavy_inc"}
    else stuff "bullet"
      {spawn "ex_bul_big"}
    else stuff "mortar"
      {spawn "ex_mort_big"}
      {spawn "shellhole_big"}   
    else stuff "shell_big_mortar"
      {spawn "ex_fg_big_mortar"}
      {spawn "crater_norm_land" terrain_texmod}
	else stuff "big mortar_smoke"
	  {spawn "mortar_smoke"}
	  {spawn "spheredust_small_short"}
    else stuff "mortar"
      {spawn "ex_bomb_big"}
      {spawn "shellhole_medium"}
    else stuff "shell size_minimum fg"
      {spawn "ex_fg_minimum"}
      {spawn "grenade_shellhole" terrain_texmod}
    else stuff "shell size_minimum"
      {spawn "ex_ap_minimum"}
	  {spawn "shellhole_small"}
    else stuff "shell big size_small fg"
      {spawn "ex_fg_small"}
      {spawn "crater_small" terrain_texmod}
    else stuff "shell size_small fg"
      {spawn "ex_fg_small"}
      {spawn "crater_small_road" terrain_texmod}
    else stuff "shell size_small"
      {spawn "ex_ap_small"}
	{spawn "shellhole_small"}
    else stuff "shell size_medium fg"
      {spawn "ex_fg_medium"}
      {spawn "crater_norm_land" terrain_texmod}
    else stuff "shell size_medium"
      {spawn "ex_ap_medium"}
	  {spawn "shellhole_medium"}
    else stuff "shell size_big fg"
      {spawn "ex_fg_big"}
      {spawn "crater_norm" terrain_texmod}
    else stuff "shell size_big"
      {spawn "ex_ap_medium"}
	  {spawn "shellhole_medium"}
    else stuff "shell size_maximum"
      {spawn "ex_fg_maximum"}
      {spawn "crater_big" terrain_texmod}
    else stuff "ap shell"
      {spawn "ex_fg_minimum"}
    else stuff "big shell extra"
      {spawn "ex_bomb_big" offset 0 0 20}
      {spawn "crater_norm" terrain_texmod}
    else stuff "big shell extra305"
      {spawn "ex_cannon400" offset 0 0 20}
      {spawn "crater_big" terrain_texmod}
    else stuff "big shell fg bomb no_crater small"
      {spawn "shockwave"}
      {spawn "ex_anti_big"}
      {spawn "shellhole4d3"}
    else stuff "big shell fg bomb no_crater"
      {spawn "ex_bomb_big"}
      {spawn "shellhole4d2"}
    else stuff "big shell fg bomb"
      {spawn "ex_bomb_big"}
      {spawn "crater_norm" terrain_texmod}
    else stuff "mine s_mine"
      {spawn "ex_mine_ap_air"}
    else stuff "mine antipersonnel"
      {spawn "ex_mine_ap"}
      {spawn "grenade_shellhole" terrain_texmod}
    else stuff "mine antitank"
     	 {spawn "ex_bomb_big"}
	 ;{spawn "ex_arm_big"}
      {spawn "shellhole_big"}
	else stuff "mine clockwork"
		{spawn "ex_anti_big"}
		{spawn "shellhole_big"}
    else stuff "dynamite_clockwork"
      {spawn "ex_bomb_big"}
      {spawn "shellhole_big"}
    else stuff "tnt_bag"
      {spawn "ex_bomb_big"}
      {spawn "shellhole_big"}
    else stuff "flaerammo"
	  {spawn "artillery_explosion_flaer"}
    }
  }
}
