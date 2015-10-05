#ifndef ROUTE_H
#define ROUTE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "RoadNetwork.hpp"
#include "ConnectionPiece.hpp"
#include "Location.hpp"


class Route
{
public:
	Route();
	Route(const Route& aRoute);
	virtual ~Route();

	void inputRoute(Location A, Location B);

	void calculateRoute();
private:
	long travelTime;
	std::vector<ConnectionPiece> routes;
	Location startPoint;
	Location endPoint;

};
#endif
