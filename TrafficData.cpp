#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "TrafficData.hpp"


long TrafficData::getDelay()
{
	srand (time(0));
	return rand() % 25 + 3;
}

TrafficData::TrafficData()
{
}

TrafficData::TrafficData(const TrafficData& aTrafficData)
{
}

TrafficData::~TrafficData()
{
}
