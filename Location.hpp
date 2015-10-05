#ifndef LOCATION_H
#define LOCATION_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

class Location
{
public:
	Location();
	Location(const Location& aLocation);
	virtual ~Location();
private:
	double Longitude;

	double Latitude;

};
#endif
