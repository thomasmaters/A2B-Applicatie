#ifndef TRAFFIC_DATA_H
#define TRAFFIC_DATA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

class TrafficData
{
public:
	TrafficData();
	TrafficData(const TrafficData& aTrafficData);
	virtual ~TrafficData();

	long getDelay();
};
#endif
