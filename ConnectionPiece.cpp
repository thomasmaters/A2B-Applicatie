#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "ConnectionPiece.hpp"

ConnectionPiece::ConnectionPiece():
	travelTime(0),
	length(0)
{
}

ConnectionPiece::ConnectionPiece(const ConnectionPiece& aConnectionPiece):
		travelTime(aConnectionPiece.travelTime),
		length(aConnectionPiece.length),
		startPoint(aConnectionPiece.startPoint),
		endPoint(aConnectionPiece.endPoint)
{
}

ConnectionPiece::ConnectionPiece(long length, Location A, Location B):
		travelTime(length * 4),
		length(length),
		startPoint(A),
		endPoint(B)
{
}

ConnectionPiece::~ConnectionPiece()
{
}

long ConnectionPiece::getTravelTime()
{
	return travelTime;
}
