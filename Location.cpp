#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Location.hpp"

#include "Place.hpp"
#include "Junction.hpp"

Location::Location():
	Longitude(0),
	Latitude(0)
{
}

Location::Location(const Location& aLocation):
	name(aLocation.name),
	Longitude(aLocation.Longitude),
	Latitude(aLocation.Latitude)
{
}

void Location::operator =(const Location& aLocation)
{
	name = aLocation.name,
	Longitude = aLocation.Longitude;
	Latitude = aLocation.Latitude;
}

Location::~Location()
{
}

Location::Location(std::string aName,double A, double B):
	name(aName),
	Longitude(A),
	Latitude(B)
{
}

bool Location::operator ==(Location& aLocation) const
{
	return (Longitude == aLocation.Longitude && Latitude == aLocation.Latitude);
}
