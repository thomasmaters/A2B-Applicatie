#ifndef DELAYS_H
#define DELAYS_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "TrafficData.hpp"

class Delays : public TrafficData
{
private:
	int delay;

	int startTime;

};
#endif
