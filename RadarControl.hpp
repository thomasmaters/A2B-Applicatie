#ifndef RADAR_CONTROL_H
#define RADAR_CONTROL_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "SpeedTrap.hpp"

class RadarControl : public SpeedTrap
{
public:
	RadarControl();
	RadarControl(const RadarControl& aRadarControl);
	virtual ~RadarControl();
};
#endif
