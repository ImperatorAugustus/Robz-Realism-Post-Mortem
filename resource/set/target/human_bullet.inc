{selector
	{unit "human" "bullet"}
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
		{sort {class car}}
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
}