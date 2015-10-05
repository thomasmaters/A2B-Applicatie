#ifndef ROUTE_H
#define ROUTE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Location.hpp"
#include "ConnectionPiece.hpp"


class Route
{
private:
	long travelTime;

	std::vector<Route> routes;


public:
public:
	Route();
	Route(const Route& aRoute);
	virtual ~Route();

	void inputRoute(Location A, Location B);

	std::vector<ConnectionPiece> calculateRoute(Location A, Location B);

};
#endif
