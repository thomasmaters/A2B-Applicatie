#ifndef ROAD_CONGESTION_H
#define ROAD_CONGESTION_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Delays.hpp"

class RoadCongestion : public Delays
{
public:
	RoadCongestion();
	RoadCongestion(const RoadCongestion& aRoadCongestion);
	virtual ~RoadCongestion();
};
#endif
