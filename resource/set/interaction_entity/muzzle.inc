{"muzzle_zenite"
	{on spawn
		{add_view	"flash_cannon_small"		"flashbarrel1"			"Foresight1"}
	}
	{on fire "gun"
        {spawn "tank_canon_fire_verysmall" 		"Foresight1" x}
	}
}

{"muzzle_minimum"
	{on spawn
		{add_view	"flash_cannon_small"		"flashbarrel1"			"Foresight1"}
	}
	{on fire "gun"
       	;{spawn "dust_shot_small" 				"basis"}
        {spawn "tank_canon_fire_verysmall" 		"Foresight1" x}
	}
}	

{"muzzle_small"
	{on spawn
		{add_view	"flash_cannon_small"		"flashbarrel1"			"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_small/"}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell/"}
	}
       	;{spawn "dust_shot_small" 				"basis"}
        {spawn "tank_canon_fire_small" 			"Foresight1" x}
	}

}	
	
{"muzzle_medium"
	{on spawn                                                                                            
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
		{add_view	"tank_canon_fire_smoke"		"flashbarrel1smoke"		"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_cannon_medium/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot/"}
        {spawn "volume_sphere_6m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell/"}
	}
       	;{spawn "dust_shot_norm" 				"basis"}
        {spawn "tank_canon_fire_medium" 		"Foresight1" x}
		;{blastwave c4 0.5 r0 0.5 r1 1 offset 0 0 -05 bone	"Foresight1"}
	}

	{on fire "gun1_2"
	{start_sound "weapon/shot/distant_cannon_medium/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot/"}
        {spawn "volume_sphere_6m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell/"}
	}
       	;{spawn "dust_shot_norm" 				"basis"}
        {spawn "tank_canon_fire_medium" 		"Foresight1" x}
		;{blastwave c4 0.5 r0 0.5 r1 1 offset 0 0 -05 bone	"Foresight1"}
	}
}

{"muzzle_medium_no_blast"
	{on spawn                                                                                            
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
		{add_view	"tank_canon_fire_smoke"		"flashbarrel1smoke"		"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_cannon_medium/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot/"}
        {spawn "volume_sphere_6m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell/"}
	}
       	;{spawn "dust_shot_norm" 				"basis"}
        {spawn "tank_canon_fire_medium" 		"Foresight1" x}
	}

	{on fire "gun1_2"
	{start_sound "weapon/shot/distant_cannon_medium/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot/"}
        {spawn "volume_sphere_6m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell/"}
	}
       	;{spawn "dust_shot_norm" 				"basis"}
        {spawn "tank_canon_fire_medium" 		"Foresight1" x}
	}
}
{"muzzle_medium_reduced"
	{on spawn                                                                                            
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
		{add_view	"tank_canon_fire_smoke"		"flashbarrel1smoke"		"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_cannon_medium/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot/"}
        {spawn "volume_sphere_6m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell/"}
	}
       	;{spawn "dust_shot_norm" 				"basis"}
        {spawn "tank_canon_fire_medium" 		"Foresight1" x}
		;{blastwave c4 0.5 r0 0.5 r1 1 offset 0 0 -05 bone	"Foresight1"}
	}

	{on fire "gun1_2"
	{start_sound "weapon/shot/distant_cannon_medium/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot/"}
        {spawn "volume_sphere_6m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell/"}
	}
       	;{spawn "dust_shot_norm" 				"basis"}
        {spawn "tank_canon_fire_medium" 		"Foresight1" x}
		;{blastwave c4 0.5 r0 0.5 r1 1 offset 0 0 -05 bone	"Foresight1"}
	}
}

{"muzzle_medium_sides"
	{on spawn                                                                                            
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
		{add_view	"tank_canon_fire_smoke_sides"		"flashbarrel1smoke"		"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_cannon_medium/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot/"}
        {spawn "volume_sphere_6m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell/"}
	}
       	;{spawn "dust_shot_norm" 				"basis"}
        {spawn "tank_canon_fire_medium_sides" 		"Foresight1" x}
		;{blastwave c4 0.5 r0 0.5 r1 1 offset 0 0 -05 bone	"Foresight1"}
	}

	{on fire "gun1_2"
	{start_sound "weapon/shot/distant_cannon_medium/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot/"}
        {spawn "volume_sphere_6m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell/"}
	}
       	;{spawn "dust_shot_norm" 				"basis"}
        {spawn "tank_canon_fire_medium" 		"Foresight1" x}
		;{blastwave c4 0.5 r0 0.5 r1 1 offset 0 0 -05 bone	"Foresight1"}
	}
}
{"muzzle_medium_sides_no_blast"
	{on spawn                                                                                            
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
		{add_view	"tank_canon_fire_smoke_sides"		"flashbarrel1smoke"		"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_cannon_medium/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot/"}
        {spawn "volume_sphere_6m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell/"}
	}
       	;{spawn "dust_shot_norm" 				"basis"}
        {spawn "tank_canon_fire_medium_sides" 		"Foresight1" x}
	}

	{on fire "gun1_2"
	{start_sound "weapon/shot/distant_cannon_medium/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot/"}
        {spawn "volume_sphere_6m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell/"}
	}
       	;{spawn "dust_shot_norm" 				"basis"}
        {spawn "tank_canon_fire_medium" 		"Foresight1" x}
	}
}
	
{"muzzle_large"
	{on spawn                                                                                            
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
		{add_view	"tank_canon_fire_smoke"		"flashbarrel1smoke"		"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_cannon_large/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot_large/"}
        {spawn "volume_sphere_10m" 		"Foresight1" x}
      	;{spawn "dust_shot_big" 					"basis"}
      	{spawn "tank_canon_fire_large" 			"Foresight1" x}
		;{blastwave c4 0.5 r0 1 r1 3 offset 0 0 -05 bone 	"Foresight1"}
	}

	{on fire "gun1_2"
	{start_sound "weapon/shot/distant_cannon_large/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot_large/"}
        {spawn "volume_sphere_10m" 		"Foresight1" x}
      	{spawn "dust_shot_big" 					"basis"}
      	{spawn "tank_canon_fire_large_nodust" 			"Foresight1" x}
		;{blastwave c4 0.5 r0 1 r1 3 offset 0 0 -05 bone 	"Foresight1"}
	}
}
{"muzzle_large_nodust"
	{on spawn                                                                                            
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
		{add_view	"tank_canon_fire_smoke"		"flashbarrel1smoke"		"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_cannon_large/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot_large/"}
        {spawn "volume_sphere_10m" 		"Foresight1" x}
      	{spawn "dust_shot_big" 					"basis"}
      	{spawn "tank_canon_fire_large_nodust" 			"Foresight1" x}
	}

	{on fire "gun1_2"
	{start_sound "weapon/shot/distant_cannon_large/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot_large/"}
        {spawn "volume_sphere_10m" 		"Foresight1" x}
      	;{spawn "dust_shot_big" 					"basis"}
      	{spawn "tank_canon_fire_large" 			"Foresight1" x}
	}
}
{"muzzle_large_sides"
	{on spawn                                                                                            
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
		{add_view	"tank_canon_fire_smoke_sides"	"flashbarrel1smoke"		"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_cannon_large/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot_large/"}
        {spawn "volume_sphere_10m" 		"Foresight1" x}
      	;{spawn "dust_shot_big" 					"basis"}
      	{spawn "tank_canon_fire_large_sides" 			"Foresight1" x}
		;{blastwave c4 0.5 r0 1 r1 3 offset 0 0 -05 bone 	"Foresight1"}
	}

	{on fire "gun1_2"
	{start_sound "weapon/shot/distant_cannon_large/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot_large/"}
        {spawn "volume_sphere_10m" 		"Foresight1" x}
      	;{spawn "dust_shot_big" 					"basis"}
      	{spawn "tank_canon_fire_large_sides" 			"Foresight1" x}
		;{blastwave c4 0.5 r0 1 r1 3 offset 0 0 -05 bone 	"Foresight1"}
	}
}
{"muzzle_large_sides_reduced"
	{on spawn                                                                                            
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
		{add_view	"tank_canon_fire_smoke_sides"	"flashbarrel1smoke"		"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_cannon_large/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot_large/"}
        {spawn "volume_sphere_10m" 		"Foresight1" x}
      	;{spawn "dust_shot_big" 					"basis"}
      	{spawn "tank_canon_fire_large_sides" 			"Foresight1" x}
		;{blastwave c4 0.5 r0 1 r1 3 offset 0 0 -05 bone 	"Foresight1"}
	}

	{on fire "gun1_2"
	{start_sound "weapon/shot/distant_cannon_large/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot_large/"}
        {spawn "volume_sphere_10m" 		"Foresight1" x}
      	;{spawn "dust_shot_big" 					"basis"}
      	{spawn "tank_canon_fire_large_sides" 			"Foresight1" x}
		;{blastwave c4 0.5 r0 1 r1 3 offset 0 0 -05 bone 	"Foresight1"}
	}
}
	
{"muzzle_maximum"
	{on spawn
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
		{add_view	"tank_canon_fire_smoke"		"flashbarrel1smoke"		"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_cannon_verylarge/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot_heavy/"}
        {spawn "volume_sphere_15m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell_heavy/"}
	}
	;{spawn "dust_shot_big" 						"basis"}
        {spawn "tank_canon_fire_verylarge" 		"Foresight1" x}
		{blastwave c4 0.5 r0 2 r1 4 offset 0 0 -05 bone 	"Foresight1"}
	}

	{on fire "gun1_2" ;this is for multirole vehicles
	{start_sound "weapon/shot/distant_cannon_verylarge/"}
	{start_sound "weapon/shot/aftersounds/aftershot_heavy/"}
        {spawn "volume_sphere_15m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell_heavy/"}
	}
	{spawn "dust_shot_big" 						"basis"}
        {spawn "tank_canon_fire_verylarge_nodust" 		"Foresight1" x}
		{blastwave c4 0.5 r0 2 r1 4 offset 0 0 -05 bone 	"Foresight1"}
	}	
}
{"muzzle_maximum_nodmg"
	{on spawn
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
		{add_view	"tank_canon_fire_smoke"		"flashbarrel1smoke"		"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_cannon_verylarge/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot_heavy/"}
        {spawn "volume_sphere_15m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell_heavy/"}
	}
	;{spawn "dust_shot_big" 						"basis"}
        {spawn "tank_canon_fire_verylarge" 		"Foresight1" x}
	}	

	{on fire "gun1_2" ;this is for multirole vehicles
	{start_sound "weapon/shot/distant_cannon_verylarge/"}
	{start_sound "weapon/shot/aftersounds/aftershot_heavy/"}
        {spawn "volume_sphere_15m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell_heavy/"}
	}
	{spawn "dust_shot_big" 						"basis"}
        {spawn "tank_canon_fire_verylarge_nodust" 		"Foresight1" x}
	}
}
{"muzzle_maximum_nodust"
	{on spawn
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
		{add_view	"tank_canon_fire_smoke"		"flashbarrel1smoke"		"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_cannon_verylarge/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot_heavy/"}
        {spawn "volume_sphere_15m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell_heavy/"}
	}
	{spawn "dust_shot_big" 						"basis"}
        {spawn "tank_canon_fire_verylarge_nodust" 		"Foresight1" x}
	}

	{on fire "gun1_2" ;this is for multirole vehicles
	{start_sound "weapon/shot/distant_cannon_verylarge/"}
	{start_sound "weapon/shot/aftersounds/aftershot_heavy/"}
        {spawn "volume_sphere_15m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell_heavy/"}
	}
	;{spawn "dust_shot_big" 						"basis"}
        {spawn "tank_canon_fire_verylarge" 		"Foresight1" x}
	}
}
{"muzzle_maximum_sides"
	{on spawn
		{add_view	"flash_cannon_medium"		"flashbarrel1"			"Foresight1"}
		{add_view	"flash_cannon_medium"		"flashbarrel2"			"Foresight2"}
		{add_view	"tank_canon_fire_smoke_sides"	"flashbarrel1smoke"		"Foresight1"}
	}
	{on fire "gun"
	{start_sound "weapon/shot/distant_cannon_verylarge/"}
	{start_sound "weapon/shot/tracer/"}
	{start_sound "weapon/shot/aftersounds/aftershot_heavy/"}
        {spawn "volume_sphere_15m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell_heavy/"}
	}
	;{spawn "dust_shot_big" 						"basis"}
        {spawn "tank_canon_fire_verylarge_sides" 		"Foresight1" x}
		{blastwave c4 0.5 r0 2 r1 4 offset 0 0 -05 bone 	"Foresight1"}
	}

	{on fire "gun1_2" ;this is for multirole vehicles
	{start_sound "weapon/shot/distant_cannon_verylarge/"}
	{start_sound "weapon/shot/aftersounds/aftershot_heavy/"}
        {spawn "volume_sphere_15m" 		"Foresight1" x}
	{delay 1
		{start_sound "weapon/shot/aftersounds/aftershell_heavy/"}
	}
	{spawn "dust_shot_big" 						"basis"}
        {spawn "tank_canon_fire_verylarge_nodust" 		"Foresight1" x}
		{blastwave c4 0.5 r0 2 r1 4 offset 0 0 -05 bone 	"Foresight1"}
	}	
}