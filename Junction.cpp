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

Junction::Junction(std::string aName):
	name(aName)
{
}

Junction::~Junction()
{
}
