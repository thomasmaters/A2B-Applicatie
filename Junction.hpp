#ifndef JUNCTION_H
#define JUNCTION_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

class Junction
{
public:
	Junction();
	Junction(std::string aName);
	Junction(const Junction& aJunction);
	virtual ~Junction();
private:
	std::string name;

};
#endif
