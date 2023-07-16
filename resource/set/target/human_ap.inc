{selector
	{unit "human" "ap"}

	{group
		{ignore {class airborne}}
		{sort {in_range 12}}
		{sort {class tank} {weapon "flame"}}
		{sort {class tank} {weapon "fuel"}}
		{sort {class light_tank} {weapon "flame"}}
		{sort {class light_tank} {weapon "fuel"}}
		{sort {class armoredcar} {weapon "flame"}}
		{sort {class armoredcar} {weapon "fuel"}}
		{sort {class car} {weapon "flame"}}
		{sort {class car} {weapon "fuel"}}
		{sort {class tank}}
		{sort {class light_tank}}
		{sort {class armoredcar}}
		{sort {class car}}
		{sort {attacking}}
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
		{ignore {class airborne}}
		{sort {in_range 12}}
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
		{sort distance}
    }
}