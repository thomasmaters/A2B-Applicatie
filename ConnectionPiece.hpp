#ifndef CONNECTION_PIECE_H
#define CONNECTION_PIECE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "java/lang/Long.hpp"

class ConnectionPiece
{
private:
	java::lang::Long travelTime;

	java::lang::Long Length;


public:
	java::lang::Long getTravelTIme();

};
#endif
