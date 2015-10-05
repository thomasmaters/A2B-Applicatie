#ifndef ROUTE_H
#define ROUTE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Location.hpp"
#include "java/util/Vector.hpp"

class Route
{
private:
	long / travelTime;

	java::util::Vector routes;


public:
	/**
	 *  
	 */
	void inputRoute(Location A, Location B);

	/**
	 *  
	 */
	java::util::Vector calculateRoute(Location A, Location B);

};
#endif
