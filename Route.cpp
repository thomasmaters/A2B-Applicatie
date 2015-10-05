#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Route.hpp"

void Route::inputRoute(Location A, Location B)
{
	startPoint = A;
	endPoint = B;
}

void Route::calculateRoute()
{
	for(auto connectie : RoadNetwork::connectionpieces){
		if(connectie->getStartPoint() == startPoint){
			routes.push_back(*connectie);
			break;
		}
	}
	for(auto connectie : RoadNetwork::connectionpieces){
		if(connectie->getEndPoint() == endPoint){
			routes.push_back(*connectie);
			break;
		}
	}
	std::cout << routes.size() << std::endl;
	for(auto route : routes){
		std::cout << "Verbindingsstukken reistijd :" << route.getTravelTime() << std::endl;
	}
}

Route::Route():
		travelTime(0),
		routes(std::vector<ConnectionPiece>()),
		startPoint(),
		endPoint()
{
}

Route::Route(const Route& aRoute):
		travelTime(aRoute.travelTime),
		routes(aRoute.routes),
		startPoint(aRoute.startPoint),
		endPoint(aRoute.endPoint)
{
}

Route::~Route()
{
}
