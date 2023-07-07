;= START =====================================


(define "vision_human"
    ("radius" r(110))
    {rules
        {human 1.5
            {firing 1.65
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_humancrew"
    ("radius" r(90))
    {rules
        {human 1.5
            {firing 1.60
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic"
    ("radius" r(120))
    {rules
        {human 1.25
            {firing 1.35
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_1x"
    ("radius" r(120)) ;110
    {rules
        {human 1.25
            {firing 1.35
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_1-9x"
    ("radius" r(122)) ;115
    {rules
        {human 1.25
            {firing 1.35
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_2-5x"
    ("radius" r(125)) ;125
    {rules
        {human 1.25
            {firing 1.35
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_3x"
    ("radius" r(127)) ;135
    {rules
        {human 1.25 ;1.20
            {firing 1.35 ;1.30
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic_4x"
    ("radius" r(130)) ;150
    {rules
        {human 1.25 ;1.10
            {firing 1.35 ;1.20
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic_5x"
    ("radius" r(135)) ;170
    {rules
        {human 1.25 ;1.00
            {firing 1.35 ;1.10
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic_6x"
    ("radius" r(140)) ;190
    {rules
        {human 1.25 ;0.90
            {firing 1.35 ;1.00
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_gunner"
    ("radius" r(90))
    {rules
        {human 1.25
            {firing 1.35
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_turret"
    ("radius" r(90))
    {rules
        {human 1.25
            {firing 1.35
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "glass"
		("radius" r(%0))
        {rules
            {zero 0}
        }
)

;= MAP HELPER ====================================

(define "ultra_vision"
	{radius 20}
	{h_fov 360}
   	{v_fov 180}
	{uncover %range}
)
{"start_point"  ("ultra_vision" range(20))}
{"map_point"    ("ultra_vision" range(20))}
{"flag_point"   ("ultra_vision" range(20))}
