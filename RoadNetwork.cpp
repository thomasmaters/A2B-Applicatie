#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "RoadNetwork.hpp"

RoadNetwork::RoadNetwork() :
		network(std::vector<Location*>())
{
	Location * a = new Place("Huissen", 5, 2);
	Location * b = new Place("Arnhem", 5, 2);
	Location * c = new Place("Duiven", 5, 2);
	network.push_back(a);
	network.push_back(b);
	network.push_back(c);

}

RoadNetwork::RoadNetwork(const RoadNetwork& aRoadNetwork)
{
}

Location RoadNetwork::getLocationFromName(const std::string& A)
{
	for (auto locatie : network)
	{
		if (Place* V = dynamic_cast<Place*>(locatie))
		{
			if (V->getName() == A)
			{
				return *locatie;
			}
		}
		else if (Junction* V = dynamic_cast<Junction*>(locatie))
		{
			if (V->getName() == A)
			{
				return *locatie;
			}
		}
	}
	return Location();
}

RoadNetwork::~RoadNetwork()
{
}
