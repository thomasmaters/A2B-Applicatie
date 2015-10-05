#ifndef ROAD_MAINTENANCE_H
#define ROAD_MAINTENANCE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Delays.hpp"

class RoadMaintenance : public Delays
{
public:
	RoadMaintenance();
	RoadMaintenance(const RoadMaintenance& aRoadMaintenance);
	virtual ~RoadMaintenance();
};
#endif
