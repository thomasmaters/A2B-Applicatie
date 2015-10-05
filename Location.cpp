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
	Longitude(aLocation.Longitude),
	Latitude(aLocation.Latitude)
{
}

void Location::operator =(const Location& aLocation)
{
	Longitude = aLocation.Longitude;
	Latitude = aLocation.Latitude;
}

Location::~Location()
{
}

Location::Location(double A, double B):
	Longitude(A),
	Latitude(B)
{
}

bool Location::operator ==(Location& aLocation) const
{
	return (Longitude == aLocation.Longitude && Latitude == aLocation.Latitude);
}
