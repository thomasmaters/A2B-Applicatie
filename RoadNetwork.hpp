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
#include "ConnectionPiece.hpp"

class RoadNetwork
{
public:
	static RoadNetwork* Instance();
	static Location getLocationFromName(const std::string& A);
	static std::vector<Location*> locations;
	static std::vector<ConnectionPiece*> connectionpieces;
private:
	RoadNetwork(){};
	RoadNetwork(const RoadNetwork& aRoadNetwork){};
	static RoadNetwork* m_pInstance;


};
#endif
