#ifndef CONNECTION_PIECE_H
#define CONNECTION_PIECE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

class ConnectionPiece
{
private:
	long travelTime;

	long length;

public:
	ConnectionPiece();
	ConnectionPiece(const ConnectionPiece& aConnectionPiece);
	virtual ~ConnectionPiece();
	long getTravelTIme();

};
#endif
