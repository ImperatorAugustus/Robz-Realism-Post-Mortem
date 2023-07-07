	{any
		{translate_damage 7}		; damage multiplier for landmines
		{cover_hitchance 1}   		; the probability of hitting a soldier behind cover
		{crawl_hitchance 1}  		; the probabiltiy of hitting a soldier in crawl position
		{cover_damage 0.7}  		; damage when protected by cover

		{vehicle_burst 1.5}			; increase timeout between bursts for all vehicles
		{cover_mgun_burst 1}		; increase bullet count in 1 burst of soldier with mgun in horizontal cover
		{cover_mgun_delay 1}		; decrease timeout between bursts of soldier with mgun in horizontal cover

		{cover_efficiency			; how cover efficiency will drop with distance
			0		0
			5		0.15
			15		0.75
			25		1.00
		}
		{blast_crawl 1.25}			; simply lying on the ground
		{blast_cover 1.50}          ; in cover from protected side
		{blast_crawl_prepared 1.75}	; lying on the ground & waiting for explosion
		{blast_cover_prepared 2.00}	; in cover not from protected side, but waiting for explosion
		{blast_squat 1.15}			; on the knees
		
		;{mounted_mgun 3}
		{death_delay_min 280}		; min bleeding out time in seconds
		{death_delay_max 300}		; max bleeding out time in seconds
	}