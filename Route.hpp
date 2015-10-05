#ifndef ROUTE_H
#define ROUTE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "ConnectionPiece.hpp"
#include "Location.hpp"


class Route
{
public:
	Route();
	Route(const Route& aRoute);
	virtual ~Route();

	void inputRoute(Location A, Location B);

	std::vector<ConnectionPiece> calculateRoute(Location A, Location B);
private:
	long travelTime;
	Location startPoint;
	Location endPoint;
	std::vector<ConnectionPiece> routes;
};
#endif
