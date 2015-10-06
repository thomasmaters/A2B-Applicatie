#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Place.hpp"

Place::Place():
	Location("",0,0),
	name("")
{
}

Place::Place(const Place& aPlace):
	Location(aPlace),
	name(aPlace.name)
{
}

Place::Place(std::string aName, double A, double B):
	Location(aName,A,B),
	name(aName)
{
}

Place& Place::operator=(const Place& aPlace)
{
	if(this != &aPlace){
		Location::operator=(aPlace);
		name = aPlace.name;
	}
	return *this;
}

Place::~Place()
{
}
