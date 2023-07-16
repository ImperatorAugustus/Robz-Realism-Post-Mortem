{selector
	{type "moto"}
	{group
		{select {class airborne}}
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
		{select {class car}}
		{sort {weapon}}
		{sort {attacking}}
		{sort distance}
	}
	{group
		{sort {class cannon}}
		{sort distance}
	}
	{group
		{sort {class human} {weapon "flame"}}
		{sort {class human} {weapon "fuel"}}
		{sort {class human} {weapon "rocketlauncher"}}
		{sort {class human} {weapon "ptr"}}
		{sort {class human} {weapon "ap"}}
		{sort {class human} {weapon "mgun"}}
		{sort {class human} {weapon "grenade"}}
		{sort {class human} {weapon "bullet"}}
		{sort {class human} {weapon}}
		{sort {class human}}
		{sort distance}
	}
}