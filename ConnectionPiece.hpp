#ifndef CONNECTION_PIECE_H
#define CONNECTION_PIECE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Location.hpp"
#include "TrafficData.hpp"

class ConnectionPiece
{
private:
	long travelTime;
	long length;
	Location startPoint;
	Location endPoint;

	std::vector<TrafficData> trafficData;

public:
	ConnectionPiece();
	ConnectionPiece(long length,Location A, Location B,std::vector<TrafficData> aTrafficData = std::vector<TrafficData>());
	ConnectionPiece(const ConnectionPiece& aConnectionPiece);
	virtual ~ConnectionPiece();

	long getTravelTime();
	long getAmountDelays();

	Location getEndPoint()
	{
		return endPoint;
	}

	Location getStartPoint()
	{
		return startPoint;
	}
};
#endif
