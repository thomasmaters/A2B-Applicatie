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
	Location(std::string aName,double A, double B );
	Location(const Location& aLocation);

	std::string getName(){return name;};

	void operator=(const Location& aLocation);
	bool operator==(Location& aLocation) const;

	virtual ~Location();
private:
	std::string name;
	double Longitude;
	double Latitude;

};
#endif
