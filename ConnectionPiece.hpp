#ifndef CONNECTION_PIECE_H
#define CONNECTION_PIECE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Location.hpp"

class ConnectionPiece
{
private:
	long travelTime;
	long length;
	Location startPoint;
	Location endPoint;

public:
	ConnectionPiece();
	ConnectionPiece(long length,Location A, Location B);
	ConnectionPiece(const ConnectionPiece& aConnectionPiece);
	virtual ~ConnectionPiece();
	long getTravelTime();

	const Location& getEndPoint() const
	{
		return endPoint;
	}

	const Location& getStartPoint() const
	{
		return startPoint;
	}
};
#endif
