{selector
 	{type "cannon_shell"}
	{group
		{sort {class tank}}
		{sort {class light_tank}}
		{sort {attacking}}
		{sort {class tank} {weapon "flame"}}
		{sort {class tank} {weapon "fuel"}}
		{sort {class light_tank} {weapon "flame"}}
		{sort {class light_tank} {weapon "fuel"}}
		{sort {class armoredcar} {weapon "flame"}}
		{sort {class armoredcar} {weapon "fuel"}}
		{sort {class car} {weapon "flame"}}
		{sort {class car} {weapon "fuel"}}
		{sort {weapon "wp"}}
		{sort {weapon "fg"}}
		{sort {threating}}
		{sort distance}
	}

	{group
		{select {class armoredcar}}
		{sort {attacking}}
		{sort distance}
	}
	{group
		{sort {class cannon}}
		{sort {attacking}}
		{sort distance}
	}
	{group
		{select {class car}}
		{sort {attacking}}
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
		{sort {weapon "flame"} {attacking}}
		{sort {weapon "flame"} {threating}}
		{sort {weapon "fuel"} {attacking}}
		{sort {weapon "fuel"} {threating}}
		{sort distance}
	}
	{group
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
		{sort distance}
	}
	{group
		{sort {attacking}}
		{sort distance}
	}
}

