;= HUMAN =====================================

{"human"
    ("uncover" u(30))
    ("h_fov" h(70))
    ("v_fov" v(200))
    ("vision_human")
}
{"mp_soldier"
    ("uncover" u(70))
    ("h_fov" h(120))
    ("v_fov" v(200))
    ("vision_human")
}
{"mp_officer"
    ("uncover" u(100))
    ("h_fov" h(180))
    ("v_fov" v(200))
    ("vision_human")
}
{"mp_sniper"
    ("uncover" u(100))
	("h_fov" h(150))
    ("v_fov" v(200))
    ("vision_human")
}

;= SPECIAL ===================================

{"soldier_focused"
    ("uncover" u(30))
    ("h_fov" h(30))
    ("v_fov" v(50))
    ("vision_human")
}
{"rifle_telescope"
    ("uncover" u(7))
    ("h_fov" h(360))
    ("v_fov" v(120))
    ("glass" args 7)
}
{"field_glass"
    ("uncover" u(5))
    ("h_fov" h(360))
    ("v_fov" v(120))
    ("glass" args 25)
}

;= CANNON ========================================

{"cannon_main"
    ("uncover" u(30))
    ("h_fov" h(15))
    ("v_fov" v(15))
    ("vision_optic")
}
{"cannon_mgun"
    ("uncover" u(30))
    ("h_fov" h(50))
    ("v_fov" v(140))
    ("vision_human")
}
{"cannon_mgun_ger_3x11"
    ("uncover" u(30))
    ("h_fov" h(11))
    ("v_fov" v(11))
    ("vision_optic_3x")
}
{"cannon_crew"
    ("uncover" u(30))
    ("h_fov" h(180))
    ("v_fov" v(140))
    ("vision_humancrew")
}

;= VEHICLE & MOTO ============================

{"vehicle_main"
    ("uncover" u(30))
    ("h_fov" h(50))
    ("v_fov" v(140))
    ("vision_human")
}
{"vehicle_top_mgun"
    ("h_fov" h(90))
    ("v_fov" v(140))
    ("vision_human")
}
{"vehicle_top_turret"
    ("uncover" u(30))
    ("h_fov" h(45))
    ("v_fov" v(20))
    ("vision_turret")
}
{"moto"
    ("uncover" u(50))
    ("h_fov" h(30))
    ("v_fov" v(140))
    ("vision_human")
}
{"moto_crew"
    ("uncover" u(50))
    ("h_fov" h(90))
    ("v_fov" v(60))
    ("vision_human")
}
{"moto_around"
    ("uncover" u(50))
    ("h_fov" h(360))
    ("v_fov" v(60))
    ("vision_human")
}

;= TANK ======================================

{"mg_hull"
    ("uncover" u(30))
    ("h_fov" h(5))
    ("v_fov" v(45))
    ("vision_gunner")
}
{"tank_main-l"
    ("uncover" u(30))
    ("h_fov" h(30))
    ("v_fov" v(30))
    ("vision_optic")
}
{"tank_main-m"
    ("uncover" u(30))
    ("h_fov" h(25))
    ("v_fov" v(25))
    ("vision_optic")
}
{"tank_main-h"
    ("uncover" u(30))
    ("h_fov" h(25))
    ("v_fov" v(25))
    ("vision_optic")
}
{"tank_main_us_3x"
    ("uncover" u(30))
    ("h_fov" h(13))
    ("v_fov" v(13))
    ("vision_optic_3x")
}
{"tank_main_us_5x"
    ("uncover" u(30))
    ("h_fov" h(13))
    ("v_fov" v(13))
    ("vision_optic_5x")
}
{"tank_main_eng_1-9x"
    ("uncover" u(30))
    ("h_fov" h(9))
    ("v_fov" v(9))
    ("vision_optic_1-9x")
}
{"tank_main_eng_6x"
    ("uncover" u(30))
    ("h_fov" h(9))
    ("v_fov" v(9))
    ("vision_optic_6x")
}
{"tank_main_ger_1x11"
    ("uncover" u(30))
    ("h_fov" h(11))
    ("v_fov" v(11))
    ("vision_optic_1x")
}
{"tank_main_ger_3x8"
    ("uncover" u(30))
    ("h_fov" h(8))
    ("v_fov" v(8))
    ("vision_optic_3x")
}
{"tank_main_ger_5x8"
    ("uncover" u(30))
    ("h_fov" h(8))
    ("v_fov" v(8))
    ("vision_optic_5x")
}
{"tank_main_ger_2-5x"
    ("uncover" u(30))
    ("h_fov" h(28))
    ("v_fov" v(28))
    ("vision_optic_2-5x")
}
{"tank_main_ger_5x"
    ("uncover" u(30))
    ("h_fov" h(14))
    ("v_fov" v(14))
    ("vision_optic_5x")
}
{"tank_main_rus_2-5x"
    ("uncover" u(30))
    ("h_fov" h(15))
    ("v_fov" v(15))
    ("vision_optic_2-5x")
}
{"tank_main_rus_4x"
    ("uncover" u(30))
    ("h_fov" h(16))
    ("v_fov" v(16))
    ("vision_optic_4x")
}
{"tank_driver"
    ("uncover" u(30))
    ("h_fov" h(50))
    ("v_fov" v(20))
    ("vision_gunner")
}
{"tank_back"
    ("uncover" u(30))
    ("h_fov" h(50))
    ("v_fov" v(120))
    ("vision_gunner")
}
{"none"
}

;= OTHER ======================================

{"cover-detector"
	{uncover 5}
	{h_fov 60}
	{v_fov 120}
	("vision_optic" args 50)
}
{"animal"
	{uncover 2}
	{h_fov 360}
	{v_fov 120}
}
{"searchlight"
	{h_fov 30}
	{v_fov 90}
	("vision_optic" args 60)
}
{"watchtower"
	{h_fov 90}
	{v_fov 90}
    ("vision_optic" args 50)
}
{"marine_main"
	{h_fov 50}
	{v_fov 120}
    ("vision_optic" args 24)
}