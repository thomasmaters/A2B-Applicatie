#ifndef PLACE_H
#define PLACE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Location.hpp"

class Place : Location
{
public:
	Place();
	Place(std::string aName, double A, double B);
	Place(const Place& aPlace);

	Place& operator=(const Place& aPlace);
	virtual ~Place();
private:
	std::string name;

};
#endif
