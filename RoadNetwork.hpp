#ifndef ROAD_NETWORK_H
#define ROAD_NETWORK_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Location.hpp"
#include "Place.hpp"
#include "Junction.hpp"

class RoadNetwork
{
public:
	static RoadNetwork* Instance();
	static Location getLocationFromName(const std::string& A);
	static std::vector<Location*> network;
private:
	RoadNetwork(){};
	RoadNetwork(const RoadNetwork& aRoadNetwork){};
	static RoadNetwork* m_pInstance;


};
#endif
