#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "ConnectionPiece.hpp"

ConnectionPiece::ConnectionPiece():
	travelTime(21),
	length(21)
{
}

ConnectionPiece::ConnectionPiece(const ConnectionPiece& aConnectionPiece):
		travelTime(aConnectionPiece.travelTime),
		length(aConnectionPiece.length),
		startPoint(aConnectionPiece.startPoint),
		endPoint(aConnectionPiece.endPoint),
		trafficData(aConnectionPiece.trafficData)
{
}

ConnectionPiece::ConnectionPiece(long length, Location A, Location B, std::vector<TrafficData> aTrafficData):
		travelTime(length * 4),
		length(length),
		startPoint(A),
		endPoint(B),
		trafficData(aTrafficData)
{
}

ConnectionPiece::~ConnectionPiece()
{
}

long ConnectionPiece::getAmountDelays(){
	return trafficData.size();
}

long ConnectionPiece::getTravelTime()
{
	long delay = 0;
	for(auto a : trafficData){
		delay += a.getDelay();
	}
	return travelTime + delay;
}
