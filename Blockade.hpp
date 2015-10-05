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
private:
	int startTIme;

	int endTime;

};
#endif
