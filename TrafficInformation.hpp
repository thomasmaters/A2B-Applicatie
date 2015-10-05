#ifndef TRAFFIC_INFORMATION_H
#define TRAFFIC_INFORMATION_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

class TrafficInformation
{
public:
	TrafficInformation();
	TrafficInformation(const TrafficInformation& aTrafficInformation);
	virtual ~TrafficInformation();
};
#endif
