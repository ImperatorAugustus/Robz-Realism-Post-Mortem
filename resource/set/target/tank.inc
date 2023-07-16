{selector
	{type "tank"}
	{group
		{ignore {class airborne}}
		{sort {class tank}}
		{sort {attacking}}
		{sort {threating}}
		{select {weapon "shell_maximum fg"}}
		{select {weapon "shell_verybig fg"}}
		{select {weapon "shell_maximum hvap"}}
		{select {weapon "shell_maximum apcr"}}
		{select {weapon "shell_maximum apds"}}
		{select {weapon "shell_maximum ap"}}
		{select {weapon "shell_verybig hvap"}}
		{select {weapon "shell_verybig apcr"}}
		{select {weapon "shell_verybig apds"}}
		{select {weapon "shell_verybig ap"}}
		{select {weapon "shell_big fg"}}
		{select {weapon "shell_big hvap"}}
		{select {weapon "shell_big apcr"}}
		{select {weapon "shell_big apds"}}
		{select {weapon "shell_big ap"}}
		{select {weapon "shell_medium hvap"}}
		{select {weapon "shell_medium apcr"}}
		{select {weapon "shell_medium apds"}}
		{select {weapon "shell_medium ap"}}
		{select {weapon "hvap"}}
		{select {weapon "apcr"}}
		{select {weapon "apds"}}
		{select {weapon "ap"}}
		{sort distance}
	}
	{group
		{sort {weapon "rocketlauncher"} {attacking}}
		{sort {weapon "rocketlauncher"} {threating}}
		{sort distance}
	}
	{group
		{sort {weapon "at_rifle"} {attacking}}
		{sort {weapon "at_rifle"} {threating}}
		{sort distance}
	}
	{group
		{ignore {class airborne}}
		{sort {class cannon}}
		{sort {class light_tank}}
		{sort {class armoredcar}}
		{sort {attacking}}
		{sort {threating}}
		{select {weapon "shell_maximum fg"}}
		{select {weapon "shell_verybig fg"}}
		{select {weapon "hvap"}}
		{select {weapon "apcr"}}
		{select {weapon "apds"}}
		{select {weapon "ap"}}
		{sort distance}
	}
	{group
		{sort {weapon "ap"} {attacking}}
		{sort {weapon "ap"} {threating}}
		{sort distance}
	}
	{group
		{select {class car}}
		{sort time_to_aim}
	}
	{group
		{ignore {class airborne}}
		{sort {attacking}}
		{sort {class human} {weapon "flame"}}
		{sort {class human} {weapon "fuel"}}
		{sort {class human} {weapon "rocketlauncher"}}
		{sort {class human} {weapon "at_rifle"}}
		{sort {class human} {weapon "ap"}}
		{sort {class human} {weapon "mgun"}}
		{sort {class human} {weapon "grenade"}}
		{sort {class human} {weapon "bullet"}}
		{sort {class human} {weapon}}
		{sort {class human}}
		{sort {threating}}
		{sort distance}
	}
	{group
		{sort {attacking}}
		{sort distance}
	}
}