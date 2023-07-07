(define "custom_44-45"
	{common
		{unitset
			{value "44|45|sf"}
		}
		{commandPoints "*=%cp"}
		{unitLimits "flamethrower=3;officer=3;officer1=1;officer2=2;heavyaa=2;only-one=1"}
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
						{cp 		"0	25	50 	60	70	80	90"}  
						{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
					}
					{limitmin	1000}
					{limitmax	50000}
					{speedset 	"2500 3000 3500 4000 4500 5000 6000 8000 10000 20000 50000"}
				} 
				{buttons "squad1 squad2 v1 v2 v22 v3 v4 v5 v6 sf"}
			}
			{hero
				{resource 
					{start 		20}
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
(define "custom_doc"
	{common
		{unitset
			{value "doc"}
		}
		{commandPoints "*=%cp"}
		{unitLimits "flamer=3;officer=2;officer_armor=2;heavyaa=2;only-one=1"}
		{chargeFactors
			{value "*=1"}
		}
		{budgets
			{vehicle
				{mode "custom"}
				{resource 
					{start 		%start};    ht  lt  hlt    mt   mt        ht   sht
					{finish 	%finish};	5	10   15    20   25   30   35   40   45  min
					{growTime	2700};0    300  600  900  1200 1500 1800 2100 2400 2700 sec
					{growTable 	     "0.60 0.65 0.70 0.75 0.80 0.85 0.85 0.95 1.00"}
					{payback
						{cp 		"0	25	50 	60	70	80	90"}  
						{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
					}
					{limitmin	1000}
					{limitmax	50000}
					{speedset 	"2500 3000 3500 4000 4500 5000 6000 8000 10000 20000 50000"}
				} 
				{buttons "squad1 squad2 v1 v2 v22 v3 v4 v5 v6 sf"}
			}
			{hero
				{resource 
					{start 		20}
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
(define "custom_wavemode_44-45"
	{common
		{unitset
			{value "44|45|sf"}
		}
		{commandPoints "*=%cp"}
		{unitLimits "flamer=3;officer=3;heavyaa=2;only-one=1"}
		{chargeFactors
			{value "hero=1;*=0"}
		}
		{budgets
			{vehicle
				{mode "with_update"}
				{resource 
					{start 		%start}
					{finish 	10000}
					{speed 		500}
					{period 	%period}
					{limitmin	100}
					{limitmax	10000}
					{speedset 	"250 500 750 1000 1500 2000 2500 3000 4000 5000 7500 10000"}
				} 
				{buttons "squad1 squad2 v1 v2 v22 v3 v4 v5 v6 sf"}
			}
			{hero
				{resource 
					{start 		20}
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
	{"c:custom_100_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_100"}
		{apply "units_44-45"}
		("custom_44-45" 			start(200) finish(6000) cp(100))
	}
	{"c:custom_120_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_120"}
		{apply "units_44-45"}
		("custom_44-45"  			start(200) finish(6000) cp(120))
	}
	{"c:custom_140_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_140"}
		{apply "units_44-45"}
		("custom_44-45"  			start(200) finish(6000) cp(140))
	}
	{"c:custom_160_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_160"}
		{apply "units_44-45"}
		("custom_44-45"  			start(200) finish(6000) cp(160))
	}
	{"c:custom_180_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_180"}
		{apply "units_44-45"}
		("custom_44-45"  			start(200) finish(6000) cp(180))
	}
	{"c:custom_200_44-45"
		{gameMode "custom"}
		{unitMode "44-45"}
		{specMode "cp_200"}
		{apply "units_44-45"}
		("custom_44-45"  			start(200) finish(6000) cp(200))
	}
	{"c:custom_100_doc"
		{gameMode "custom"}
		{unitMode "doc"}
		{specMode "cp_100"}
		{apply "units_44-45"}
		("custom_doc" 			start(200) finish(6000) cp(100))
	}
	
;-------------------------
(define "wavemode_44-45"
	{"c:custom_500_%cp_wave_44-45%period"
		{gameMode "custom_wavemode_500"}
		{unitMode "44-45%period"}
		{specMode "cp_%cp"}
		{apply "units_44-45"}
		("custom_wavemode_44-45"  start(500) period(%period) cp(%cp)) 
	}
	{"c:custom_1000_%cp_wave_44-45%period"
		{gameMode "custom_wavemode_1000"}
		{unitMode "44-45%period"}
		{specMode "cp_%cp"}
		{apply "units_44-45"}
		("custom_wavemode_44-45"  start(1000) period(%period) cp(%cp)) 
	}
	{"c:custom_1500_%cp_wave_44-45%period"
		{gameMode "custom_wavemode_1500"}
		{unitMode "44-45%period"}
		{specMode "cp_%cp"}
		{apply "units_44-45"}
		("custom_wavemode_44-45"  start(1500) period(%period) cp(%cp)) 
	}
	{"c:custom_2000_%cp_wave_44-45%period"
		{gameMode "custom_wavemode_2000"}
		{unitMode "44-45%period"}
		{specMode "cp_%cp"}
		{apply "units_44-45"}
		("custom_wavemode_44-45"  start(2000) period(%period) cp(%cp))
	}
	{"c:custom_3000_%cp_wave_44-45%period"
		{gameMode "custom_wavemode_3000"}
		{unitMode "44-45%period"}
		{specMode "cp_%cp"}
		{apply "units_44-45"}
		("custom_wavemode_44-45"  start(3000) period(%period) cp(%cp))
	}
)
(define "wavemode_total44-45"
	("wavemode_44-45" period(%period) cp(100))
	("wavemode_44-45" period(%period) cp(200))
)
	("wavemode_total44-45" period(180))
	("wavemode_total44-45" period(300))
	("wavemode_total44-45" period(420))
	("wavemode_total44-45" period(600))
}
