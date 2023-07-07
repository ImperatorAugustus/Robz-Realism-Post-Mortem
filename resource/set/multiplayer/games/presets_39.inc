(define "custom_39"
	{common
		{unitset
			{value "39"}
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
			{value "%value"} ;39^artillery
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
(define "custom_instant_39"
	{common
		{unitset
			{value "39"}
		}
		{commandPoints "*=%cp"}
		{unitLimits "flamer=3;officer=3;heavyaa=2;maus=1;only-one=1"}
		{chargeFactors
			{value "*=1.0"}
			{available "*=0 *=0.5 *=1.0 *=1.5 *=2.0 *=2.5 *=5.0 *=10.0"}
		}
		{budgets
			{vehicle
				{mode "custom"}
				{resource 
					{start 		1000}
					{finish 	8000}
					{growTime	1}		; in seconds
					{growTable 	"1.00"}
					{payback
						{cp 		"0	25	50 	60	70	80	90"}  
						{restore 	"0	0	0	0	0	0	0"}
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
	{"c:custom_80_39"
		{gameMode "custom"}
		{unitMode "39"}
		{specMode "cp_80"}
		{apply "units_39"}
		("custom_39" 			start(200) finish(6000) cp(80)) 
	}
	{"c:custom_100_39"
		{gameMode "custom"}
		{unitMode "39"}
		{specMode "cp_100"}
		{apply "units_39"}
		("custom_39" 			start(200) finish(6000) cp(100))
	}
	{"c:custom_120_39"
		{gameMode "custom"}
		{unitMode "39"}
		{specMode "cp_120"}
		{apply "units_39"}
		("custom_39"  			start(200) finish(6000) cp(120))
	}
	{"c:custom_140_39"
		{gameMode "custom"}
		{unitMode "39"}
		{specMode "cp_140"}
		{apply "units_39"}
		("custom_39"  			start(200) finish(6000) cp(140))
	}
	{"c:custom_160_39"
		{gameMode "custom"}
		{unitMode "39"}
		{specMode "cp_160"}
		{apply "units_39"}
		("custom_39"  			start(200) finish(6000) cp(160))
	}
	{"c:custom_180_39"
		{gameMode "custom"}
		{unitMode "39"}
		{specMode "cp_180"}
		{apply "units_39"}
		("custom_39"  			start(200) finish(6000) cp(180))
	}
	{"c:custom_200_39"
		{gameMode "custom"}
		{unitMode "39"}
		{specMode "cp_200"}
		{apply "units_39"}
		("custom_39"  			start(200) finish(6000) cp(200))
	}
	{"c:custom_300_39"
		{gameMode "custom"}
		{unitMode "39"}
		{specMode "cp_300"}
		{apply "units_39"}
		("custom_39"  			start(200) finish(6000) cp(300))
	}
	{"c:custom_400_39"
		{gameMode "custom"}
		{unitMode "39"}
		{specMode "cp_400"}
		{apply "units_39"}
		("custom_39"  			start(200) finish(6000) cp(400))
	}
	{"c:custom_600_39"
		{gameMode "custom"}
		{unitMode "39"}
		{specMode "cp_600"}
		{apply "units_39"}
		("custom_39"  			start(200) finish(6000) cp(600))
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
	;("custom_gamemode" mode(noart) year(39) value(39^artillery)) ;no art
	("custom_gamemode" mode(noartmort) year(39) value(39^artillery|mortar)) ;no art, no mortar
;-------------------------
	{"c:custom_80_instant_39"
		{gameMode "custom_instant"}
		{unitMode "39"}
		{specMode "cp_80"}
		{apply "units_39"}
		("custom_instant_39" 	cp(80)) 
	}
	{"c:custom_100_instant_39"
		{gameMode "custom_instant"}
		{unitMode "39"}
		{specMode "cp_100"}
		{apply "units_39"}
		("custom_instant_39" 	cp(100)) 
	}
	{"c:custom_120_instant_39"
		{gameMode "custom_instant"}
		{unitMode "39"}
		{specMode "cp_120"}
		{apply "units_39"}
		("custom_instant_39" 	cp(120)) 
	}
	{"c:custom_140_instant_39"
		{gameMode "custom_instant"}
		{unitMode "39"}
		{specMode "cp_140"}
		{apply "units_39"}
		("custom_instant_39" 	cp(140)) 
	}
	{"c:custom_160_instant_39"
		{gameMode "custom_instant"}
		{unitMode "39"}
		{specMode "cp_160"}
		{apply "units_39"}
		("custom_instant_39" 	cp(160)) 
	}
	{"c:custom_180_instant_39"
		{gameMode "custom_instant"}
		{unitMode "39"}
		{specMode "cp_180"}
		{apply "units_39"}
		("custom_instant_39" 	cp(180)) 
	}
	{"c:custom_200_instant_39"
		{gameMode "custom_instant"}
		{unitMode "39"}
		{specMode "cp_200"}
		{apply "units_39"}
		("custom_instant_39" 	cp(200))
	}
	{"c:custom_300_instant_39"
		{gameMode "custom_instant"}
		{unitMode "39"}
		{specMode "cp_300"}
		{apply "units_39"}
		("custom_instant_39" 	cp(300))
	}
	{"c:custom_400_instant_39"
		{gameMode "custom_instant"}
		{unitMode "39"}
		{specMode "cp_400"}
		{apply "units_39"}
		("custom_instant_39" 	cp(400))
	}
	{"c:custom_600_instant_39"
		{gameMode "custom_instant"}
		{unitMode "39"}
		{specMode "cp_600"}
		{apply "units_39"}
		("custom_instant_39" 	cp(600))
	}
;------------------------------------------------------------------------------------------------------------
}
