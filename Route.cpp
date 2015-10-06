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

	std::cout << "Uw route van " << startPoint.getName() <<  " naar " << endPoint.getName() << ":" << std::endl;
	for(auto route : routes){
		travelTime += route.getTravelTime();
		std::cout << "U pakt het verbindingsstuk :" << route.getStartPoint().getName() << " - " << route.getEndPoint().getName() << " Met een totale reistijd van:" << route.getTravelTime() << " minuten met " << route.getAmountDelays() << " vertragingen." << std::endl ;
	}
	std::cout << "U bereikt uw bestemming in " << travelTime << " minuten." << std::endl;
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
