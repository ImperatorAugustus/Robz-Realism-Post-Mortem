(define "custom_45"
	{common
		{unitset
			{value "45"}
		}
		{commandPoints "*=%cp"}
		{unitLimits "flamer=3;officer=3;officer1=1;officer2=2;heavyaa=2;maus=1;only-one=1"}
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
				{buttons "squad1 squad2 v1 v2 v22 v3 v4 v5 v6"}
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
		{unitLimits "flamer=3;officer=3;officer1=1;officer2=2;heavyaa=2;maus=1;only-one=1"}
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
				{buttons "squad1 squad2 v1 v2 v22 v3 v4 v5 v6"}
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
	{"c:custom_100_45"
		{gameMode "custom"}
		{unitMode "45"}
		{specMode "cp_100"}
		{apply "units_45"}
		("custom_45" 			start(200) finish(6000) cp(100))
	}
	{"c:custom_200_45"
		{gameMode "custom"}
		{unitMode "45"}
		{specMode "cp_200"}
		{apply "units_45"}
		("custom_45"  			start(200) finish(6000) cp(200))
	}
;------------gamemode define
(define "custom_gamemode"
	{"c:custom_100_%mode_%year"
		{gameMode "custom"}
		{unitMode "%year_%mode"}
		{specMode "cp_100"}
		{apply "units_%year"}
		("custom_define" 		value(%value) start(200) finish(6000) cp(100))
	}
	{"c:custom_200_%mode_%year"
		{gameMode "custom"}
		{unitMode "%year_%mode"}
		{specMode "cp_200"}
		{apply "units_%year"}
		("custom_define" 		value(%value) start(200) finish(6000) cp(200))
	}
)
	;("custom_gamemode" mode(noart) year(45) value(45^artillery)) ;no art
	("custom_gamemode" mode(noartmort) year(45) value(45^artillery|mortar)) ;no art, no mortar
;-------------------------
}
