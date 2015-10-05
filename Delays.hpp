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
public:
	Delays():
		TrafficData(),
		delay(0),
		startTime(0)
	{};
	Delays(const Delays& aDelays):
		TrafficData(),
		delay(0),
		startTime(0)
	{};
	virtual ~Delays(){};
private:
	long delay;

	long startTime;

};
#endif
