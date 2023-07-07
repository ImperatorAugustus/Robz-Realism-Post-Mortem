;SDL
game_entity
	{props "trench"}
	{collider "construction"}
	{extender "land_patch"

		{TerrainType "road" "bridge"}
	}
	(define "volume" 
		{Volume %0 {thickness 20} {tags "body"} {able {contact 0} {obstacle 1}}}
	)

