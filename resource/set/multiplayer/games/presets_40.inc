(define "custom_40"
	{common
		{unitset
			{value "40"}
		}
		{commandPoints "*=%cp"}
		{unitLimits "flamer=3;officer=3;heavyaa=2;only-one=1"}
		{chargeFactors
			{value "*=1"}
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
					{speedset 	"2500 3000 3500 4000 4500 5000 6000 8000 10000 20000 50000"}
				} 
				{buttons "squad1 squad2 v1 v2 v22 v3 v4 v5"}
			}
			;{hero
			;	{resource 
			;		{start 		20}
			;	} 
			;	{buttons "hero"}
			;	{tag "special"}
			;}
		} 
	}
	{bots
		(include "bots_generic.inc")
	}
)
(define "custom_define"
	{common
		{unitset
			{value "%value"}
		}
		{commandPoints "*=%cp"}
		{unitLimits "flamer=3;officer=3;heavyaa=2;only-one=1"}
		{chargeFactors
			{value "*=1"}
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
					{speedset 	"2500 3000 3500 4000 4500 5000 6000 8000 10000 20000 50000"}
				} 
				{buttons "squad1 squad2 v1 v2 v22 v3 v4 v5"}
			}
			;{hero
			;	{resource 
			;		{start 		20}
			;	} 
			;	{buttons "hero"}
			;	{tag "special"}
			;}
		} 
	}
	{bots
		(include "bots_generic.inc")
	}
)




{presets
	{"c:custom_80_40"
		{gameMode "custom"}
		{unitMode "40"}
		{specMode "cp_80"}
		{apply "units_40"}
		("custom_40" 			start(200) finish(6000) cp(80)) 
	}
	{"c:custom_100_40"
		{gameMode "custom"}
		{unitMode "40"}
		{specMode "cp_100"}
		{apply "units_40"}
		("custom_40" 			start(200) finish(6000) cp(100))
	}
	{"c:custom_120_40"
		{gameMode "custom"}
		{unitMode "40"}
		{specMode "cp_120"}
		{apply "units_40"}
		("custom_40"  			start(200) finish(6000) cp(120))
	}
	{"c:custom_140_40"
		{gameMode "custom"}
		{unitMode "40"}
		{specMode "cp_140"}
		{apply "units_40"}
		("custom_40"  			start(200) finish(6000) cp(140))
	}
	{"c:custom_160_40"
		{gameMode "custom"}
		{unitMode "40"}
		{specMode "cp_160"}
		{apply "units_40"}
		("custom_40"  			start(200) finish(6000) cp(160))
	}
	{"c:custom_180_40"
		{gameMode "custom"}
		{unitMode "40"}
		{specMode "cp_180"}
		{apply "units_40"}
		("custom_40"  			start(200) finish(6000) cp(180))
	}
	{"c:custom_200_40"
		{gameMode "custom"}
		{unitMode "40"}
		{specMode "cp_200"}
		{apply "units_40"}
		("custom_40"  			start(200) finish(6000) cp(200))
	}
	{"c:custom_300_40"
		{gameMode "custom"}
		{unitMode "40"}
		{specMode "cp_300"}
		{apply "units_40"}
		("custom_40"  			start(200) finish(6000) cp(300))
	}
	{"c:custom_400_40"
		{gameMode "custom"}
		{unitMode "40"}
		{specMode "cp_400"}
		{apply "units_40"}
		("custom_40"  			start(200) finish(6000) cp(400))
	}
	{"c:custom_600_40"
		{gameMode "custom"}
		{unitMode "40"}
		{specMode "cp_600"}
		{apply "units_40"}
		("custom_40"  			start(200) finish(6000) cp(600))
	}
;------------gamemode define
(define "custom_gamemode"
	{"c:custom_80_%mode_%year"
		{gameMode "custom"}
		{unitMode "%year_%mode"}
		{specMode "cp_80"}
		{apply "units_%year"}
		("custom_define" 		value(%value) start(200) finish(6000) cp(80)) 
	}
	{"c:custom_100_%mode_%year"
		{gameMode "custom"}
		{unitMode "%year_%mode"}
		{specMode "cp_100"}
		{apply "units_%year"}
		("custom_define" 		value(%value) start(200) finish(6000) cp(100))
	}
	{"c:custom_120_%mode_%year"
		{gameMode "custom"}
		{unitMode "%year_%mode"}
		{specMode "cp_120"}
		{apply "units_%year"}
		("custom_define" 		value(%value) start(200) finish(6000) cp(120))
	}
	{"c:custom_140_%mode_%year"
		{gameMode "custom"}
		{unitMode "%year_%mode"}
		{specMode "cp_140"}
		{apply "units_%year"}
		("custom_define" 		value(%value) start(200) finish(6000) cp(140))
	}
	{"c:custom_160_%mode_%year"
		{gameMode "custom"}
		{unitMode "%year_%mode"}
		{specMode "cp_160"}
		{apply "units_%year"}
		("custom_define" 		value(%value) start(200) finish(6000) cp(160))
	}
	{"c:custom_180_%mode_%year"
		{gameMode "custom"}
		{unitMode "%year_%mode"}
		{specMode "cp_180"}
		{apply "units_%year"}
		("custom_define" 		value(%value) start(200) finish(6000) cp(180))
	}
	{"c:custom_200_%mode_%year"
		{gameMode "custom"}
		{unitMode "%year_%mode"}
		{specMode "cp_200"}
		{apply "units_%year"}
		("custom_define" 		value(%value) start(200) finish(6000) cp(200))
	}
	{"c:custom_300_%mode_%year"
		{gameMode "custom"}
		{unitMode "%year_%mode"}
		{specMode "cp_300"}
		{apply "units_%year"}
		("custom_define" 		value(%value) start(200) finish(6000) cp(300))
	}
	{"c:custom_400_%mode_%year"
		{gameMode "custom"}
		{unitMode "%year_%mode"}
		{specMode "cp_400"}
		{apply "units_%year"}
		("custom_define" 		value(%value) start(200) finish(6000) cp(400))
	}
	{"c:custom_600_%mode_%year"
		{gameMode "custom"}
		{unitMode "%year_%mode"}
		{specMode "cp_600"}
		{apply "units_%year"}
		("custom_define" 		value(%value) start(200) finish(6000) cp(600))
	}
)
	;("custom_gamemode" mode(noart) year(40) value(40^artillery)) ;no art
	("custom_gamemode" mode(noartmort) year(40) value(40^artillery|mortar)) ;no art, no mortar
;-------------------------
}
