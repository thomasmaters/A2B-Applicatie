#ifndef SPEED_CAMERA_H
#define SPEED_CAMERA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "SpeedTrap.hpp"

class SpeedCamera : public SpeedTrap
{
public:
	SpeedCamera();
	SpeedCamera(const SpeedCamera& aSpeedCamera);
	virtual ~SpeedCamera();
};
#endif
