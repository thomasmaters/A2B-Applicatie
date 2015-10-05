#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "RoadNetwork.hpp"

RoadNetwork::RoadNetwork():
	network(std::vector<Location*>())
{
	  Location parent;
	  Place* child;

	  child = new Place("Huissen",5,2);
	  // upcast - implicit type cast allowed
	  Location *pParent = &child;
	  Location* aL = new Place("Huissen",50,10);
	network.push_back(pParent);

}

RoadNetwork::RoadNetwork(const RoadNetwork& aRoadNetwork)
{
}

Location RoadNetwork::getLocationFromName(const std::string& A)
{
	for(auto locatie : network){
	}
	return Location();
}

RoadNetwork::~RoadNetwork()
{
}
