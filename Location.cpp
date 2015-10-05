#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Location.hpp"

Location::Location():
	Longitude(0),
	Latitude(0)
{
}

Location::Location(const Location& aLocation):
	Longitude(0),
	Latitude(0)
{
}

Location::~Location()
{
}

Location::Location(double A, double B):
		Longitude(A),
		Latitude(B)
{
}
