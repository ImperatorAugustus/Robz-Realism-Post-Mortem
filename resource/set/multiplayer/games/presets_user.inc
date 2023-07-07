(define "custom_user"
	{common
		{unitset
			{value "all"}
			{available "all artillery heavyart cannon mediumcan heavycan arcade light medium heavy sheavy hero inf_only sniper_only supply 39 40 41 42 43 44 45 postwar"}
		}
		{commandPoints "*=%cp"}
		{unitLimits "flamer=3;officer=3;heavyaa=2"}
		{balancingFactorBonus {cp 1.0} {mp 1.0} }
		{chargeFactors
			{value "*=1"}
			{available "*=0 *=0.5 *=1.0 *=1.5 *=2.0 *=2.5 *=5.0 *=10.0"}
		}
		{budgets
			{vehicle
				{mode "custom"}
				{resource 
					{start 		%start}
					{finish 	%finish}
					{growTime	2300}		; in seconds
					{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}  
						{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
					}
					{limitmin	1000}
					{limitmax	50000}
					{speedset 	"2500 3000 3500 4000 4500 5000 8000 10000 20000 50000"}
				} 
				{buttons "squad1 squad2 v1 v2 v22 v3 v4 v5 v6"}
			}
			{hero
				{resource 
					{start 		10}
				} 
				{buttons "hero"}
				{tag "special"}
			}
		} 
	}
	{bots
		(include "bots_generic.inc")
	}
)


{presets
	{"c:custom_50_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_50"}
		{apply "units_all"}
		("custom_user" 			start(200) finish(3000) cp(50)) 
	}
	{"c:custom_60_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_60"}
		{apply "units_all"}
		("custom_user" 			start(200) finish(3000) cp(60)) 
	}
	{"c:custom_80_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_80"}
		{apply "units_all"}
		("custom_user" 			start(200) finish(3000) cp(80)) 
	}
	{"c:custom_100_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_100"}
		{apply "units_all"}
		("custom_user" 			start(200) finish(3000) cp(100))
	}
	{"c:custom_120_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_120"}
		{apply "units_all"}
		("custom_user"  		start(200) finish(3000) cp(120))
	}
	{"c:custom_140_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_140"}
		{apply "units_all"}
		("custom_user"  		start(200) finish(3000) cp(140))
	}
	{"c:custom_160_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_160"}
		{apply "units_all"}
		("custom_user"  		start(200) finish(3000) cp(160))
	}
	{"c:custom_180_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_180"}
		{apply "units_all"}
		("custom_user"  		start(200) finish(3000) cp(180))
	}
	{"c:custom_200_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_200"}
		{apply "units_all"}
		("custom_user"  		start(200) finish(3000) cp(200))
	}
;------------------------------------------------------------------------------------------------------------
}
