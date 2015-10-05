#ifndef PLACE_H
#define PLACE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

class Place
{
public:
	Place();
	Place(const Place& aPlace);
	virtual ~Place();
private:
	std::string name;

};
#endif
