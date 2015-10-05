#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Junction.hpp"

Junction::Junction():
	name("")
{
}

Junction::Junction(const Junction& aJunction):
	name(aJunction.name)
{
}

Junction::Junction(std::string aName, double A, double B):
	Location(A,B),
	name(aName)
{
}

std::string Junction::getName()
{
	return name;
}

Junction::~Junction()
{
}
