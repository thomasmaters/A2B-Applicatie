#ifndef JUNCTION_H
#define JUNCTION_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Location.hpp"

class Junction : public Location
{
public:
	Junction();
	Junction(std::string aName);
	Junction(const Junction& aJunction);

	std::string getName();

	virtual ~Junction();
private:
	std::string name;

};
#endif
