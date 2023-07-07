;{levelofdetail
;	{"test"
;		{distance 700}		; LOD1
;		{distance 1000		; LOD2
;			{NoFog}
;			{NoGetShadow}
;			{NoCastShadow}
;			{off}
;		}
;	}
	(define "scale"
		(* 1.0 %d)
	)
	(mod "mp"
		(define "scale"
			(* 0.75 %d)
		)
	)
	(mod "coop"
		(define "scale"
			(* 0.70 %d)
		)
	)
	{"human"
		{distance ("scale" d(750))
			; LOD1
		}
		{distance ("scale" d(1000))
			; LOD2
		}
		{distance ("scale" d(1500))
			; LOD3
		}
		{distance ("scale" d(2000))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(4000))
			("off")
		}
	}
	{"vehicle_civilian"
		{distance ("scale" d(1500))
			; LOD1
		}
		{distance ("scale" d(2500))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(4000))
			("off")
		}
	}
	{"vehicle_small"
		{distance ("scale" d(1500))
			; LOD1
		}
		{distance ("scale" d(2500))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(5000))
			("off")
		}
	}
	{"vehicle_big"
		{distance ("scale" d(2000))
			; LOD1
		}
		{distance ("scale" d(3000))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(6000))
			("off")
		}
	}
	{"stuff_small"
		{distance ("scale" d(750))
			; LOD1
		}
		{distance ("scale" d(1000))
			; LOD2
		}
		{distance ("scale" d(1250))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(2250))
			("off_small")
		}
	}
	{"part_small"
		{distance ("scale" d(750))
			; LOD1
		}
		{distance ("scale" d(1000))
			; LOD2
		}
		{distance ("scale" d(1500))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(2500))
			("off_small")
		}
	}
	{"part_big"
		{distance ("scale" d(1000))
			; LOD1
		}
		{distance ("scale" d(1500))
			; LOD2
		}
		{distance ("scale" d(2000))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(3000))
			("off")
		}
	}
	{"decor_tiny"
		{distance ("scale" d(750))
			; LOD1
		}
		{distance ("scale" d(1000))
			; LOD2
		}
		{distance ("scale" d(1250))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(2500))
			("off_small")
		}
	}
	{"decor_small"
		{distance ("scale" d(1000))
			; LOD1
		}
		{distance ("scale" d(1500))
			; LOD2
		}
		{distance ("scale" d(2000))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(3000))
			("off_small")
		}
	}
	{"decor_medium"
		{distance ("scale" d(1000))
			; LOD1
		}
		{distance ("scale" d(2000))
			; LOD2
		}
		{distance ("scale" d(2500))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(4500))
			("off")
		}
	}
	{"decor_big"
		{distance ("scale" d(1000))
			; LOD1
		}
		{distance ("scale" d(2500))
			; LOD2
		}
		{distance ("scale" d(3000))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
	}
	{"decor_tree"
		{distance ("scale" d(1000))
			; LOD1
		}
		{distance ("scale" d(1500))
			; LOD2
		}
		{distance ("scale" d(2000))
			; LOD3
		}
		{distance ("scale" d(3000))
			{NoGetShadow}
			{NoFog}
			{NoCastShadow}
		}
		{distance ("scale" d(4000))
			; LOD5
		}
	}
	{GrassDistance ("scale" d(3000))}
	{GrassFadeDepth ("scale" d(1500))}
;}