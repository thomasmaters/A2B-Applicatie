#ifndef SPEED_TRAP_H
#define SPEED_TRAP_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "TrafficData.hpp"

class SpeedTrap : public TrafficData
{
public:
	SpeedTrap(): TrafficData(){};
	SpeedTrap(const SpeedTrap& aSpeedTrap): TrafficData(){};
	virtual ~SpeedTrap() {};
};
#endif
