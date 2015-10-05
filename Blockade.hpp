#ifndef BLOCKADE_H
#define BLOCKADE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "TrafficData.hpp"

class Blockade : public TrafficData
{
public:
	Blockade():TrafficData(),startTime(0),endTime(0){};
	Blockade(const Blockade& aBlockade):TrafficData(),startTime(0),endTime(0){};
	virtual ~Blockade();
private:
	long startTime;

	long endTime;

};
#endif
