#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Route.hpp"

void Route::inputRoute(Location A, Location B)
{
}

std::vector<ConnectionPiece> Route::calculateRoute(Location A, Location B)
{
	return std::vector<ConnectionPiece>();
}

Route::Route():
		travelTime(0),
		routes(std::vector<ConnectionPiece>())
{
}

Route::Route(const Route& aRoute):
		travelTime(0),
		routes(std::vector<ConnectionPiece>())
{
}

Route::~Route()
{
}
