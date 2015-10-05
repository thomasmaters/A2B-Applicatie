#ifndef ROAD_NETWORK_H
#define ROAD_NETWORK_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Location.hpp"
#include "Place.hpp"

class RoadNetwork
{
public:
	RoadNetwork();
	RoadNetwork(const RoadNetwork& aRoadNetwork);

	Location getLocationFromName(const std::string& A);

	virtual ~RoadNetwork();
private:
	std::vector<Location*> network;
};
#endif
