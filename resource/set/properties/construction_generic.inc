(define "declare_fire_volume"
	{Volume "fire%0"
		{able clear}
		{tags "fire"}
	}
	{Volume "smoke%0"
		{able clear}
		{tags "fire"}
	}
)
(define "declare_fire_volumes"
	{props "burning_old"}
	("declare_fire_volume" args 0)	("declare_fire_volume" args 1)
	("declare_fire_volume" args 2)	("declare_fire_volume" args 3)
	("declare_fire_volume" args 4)	("declare_fire_volume" args 5)
	("declare_fire_volume" args 6)	("declare_fire_volume" args 7)
	("declare_fire_volume" args 8)	("declare_fire_volume" args 9)
)
(define "armor_construction"
	{armor
		{setting "body"
			{threshold {pierce {calibre %calibre}}}
			{ray_cast_thickness}
			{volumes "body*"}
		}
		{setting "roof"
			{threshold {pierce {calibre %calibre}}}
			{ray_cast_thickness}
			{volumes "roof*"}
		}
	}
)

(define "blast_protection"
	{armor
		{setting "body"
			{threshold {blast {value %dmg}}}
		}
		{setting "roof"
			{threshold {blast {value %dmg}}}
		}
	}
)

(define "frag_grenade_protection"
	("blast_protection" dmg(6))
)

(define "armor_light"
	("armor_construction" calibre(5))   ; rifles+
)
(define "armor_medium"
	("armor_construction" calibre(12))	; at rifles+
	{armor
		{setting "body"
			{threshold  
				{blast {value 2.5}}	; 57mm fg protection
			}
			{durability 
				{blast {value 15}}	; will broke down after 2-3 hits by 75mm fg
				{pierce {value 350}}			
			}
		}		
		{setting "roof"
			{threshold 
				{blast {value 2.5}}
			}
			{durability 
				{blast {value 10}}	; will broke down after 1 hit by 75mm fg
				{pierce {value 50}}			
			}
		}	
	}
)
(define "armor_heavy"
	("armor_construction" calibre(30))	; guns only
	{armor
		{setting "body"
			{threshold  
				{blast {value 6}}	; 57mm fg protection
			}
			{durability 
				{blast {value 20}}	; will broke down after 3-4 hits by 75mm fg
				{pierce {value 800}}			
			}
		}
		{setting "roof"
			{threshold 
				{blast {value 6}}
			}
			{durability 
				{blast {value 10}}	; will broke down after 1 hit by mortar
				{pierce {value 100}}			
			}
		}
	}
)

(define "light_concrete"
	{armor
		{setting "body"
			{durability {pierce {koef 5}}}
		}
		{setting "roof"
			{durability {pierce {koef 5}}}
		}
	}
)

(define "armor_adjustable"
	{armor
		{setting "body"
			{threshold  {blast 	{value %thresh_fg}}
						{pierce {value %thresh_ap} {calibre %calibre}}}	
						
			{durability {blast 	{value %dur_fg}}
				 		{pierce {value %dur_ap}}}	
		}	
		{setting "roof"
			{threshold {blast {value 6}}}
			{durability {blast {value 10}}}	
		}
	}
)

(define "armor_house_wood"
	("armor_medium")
	("frag_grenade_protection")
)

(define "armor_house_concrete"
	("armor_medium")
	("frag_grenade_protection")
	("light_concrete")
)

(define "armor_house_concrete_light"
	("armor_medium")
	("frag_grenade_protection")
	("light_concrete")
)

(define "armor_house_wood_heavy"
	("armor_heavy")
	("frag_grenade_protection")
)


(define "armor_hedgehog_big"
	("armor_adjustable" thresh_fg(40) thresh_ap(100) dur_fg(60) dur_ap(300) calibre(85))
)
(define "armor_hedgehog"
	("armor_adjustable" thresh_fg(20) thresh_ap(60) dur_fg(30) dur_ap(150) calibre(50))
)

(define "armor_fabric"
	("armor_adjustable" thresh_fg(2) thresh_ap(0.5) dur_fg(5) dur_ap(10) calibre(0))
)

(define "armor_stack"
	("armor_adjustable" thresh_fg(2) thresh_ap(0.5) dur_fg(8) dur_ap(30) calibre(0))
)

(define "armor_glass"
	("armor_adjustable" thresh_fg(1) thresh_ap(0.2) dur_fg(4) dur_ap(30) calibre(0))
)

(define "armor_sandbag"
	("armor_adjustable" thresh_fg(4) thresh_ap(5) dur_fg(15) dur_ap(90) calibre(5))
)
(define "armor_sandbag_woodbeam"
	("armor_adjustable" thresh_fg(4) thresh_ap(5) dur_fg(15) dur_ap(100) calibre(5))
)
(define "armor_post"
	("armor_adjustable" thresh_fg(4) thresh_ap(5) dur_fg(20) dur_ap(20) calibre(10))
)
(define "armor_wires"
	("armor_adjustable" thresh_fg(4) thresh_ap(5) dur_fg(12) dur_ap(20) calibre(0))
)
(define "armor_fence_wood"
	("armor_adjustable" thresh_fg(5) thresh_ap(3) dur_fg(8) dur_ap(15) calibre(0))
)

(define "armor_use_volume_thickness"
	{armor
		{setting "body"
			{ray_cast_thickness 0}
		}
		{setting "roof"
			{ray_cast_thickness 0}
		}
	}
)

(define "armor_disable_damage_acc"
	{armor
		{setting "body"
			{disable_damage_acc}
		}
		{setting "roof"
			{disable_damage_acc}
		}
	}
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(include "texmod.inc")

("armor_medium" args(1.0))
