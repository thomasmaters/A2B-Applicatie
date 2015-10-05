#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "RoadNetwork.hpp"
#include "ConnectionPiece.hpp"

RoadNetwork* RoadNetwork::m_pInstance = nullptr;
std::vector<Location*> RoadNetwork::network = std::vector<Location*>();

RoadNetwork* RoadNetwork::Instance(){
	if(m_pInstance){
		m_pInstance = new RoadNetwork;

		Location * a = new Place("Huissen", 5, 6);
		Location * b = new Place("Arnhem", 15, 7);
		Location * c = new Place("Duiven", 9, 12);
		Location * d = new Place("Westervoort", 9, 20);
		Location * e = new Junction("Velperbroek", 10, 10);
		Location * f = new Junction("Ede", 15, 15);
		network.push_back(a);
		network.push_back(b);
		network.push_back(c);
		network.push_back(d);
		network.push_back(e);
		network.push_back(f);

		ConnectionPiece * g = new ConnectionPiece(8,*e,*a);
		ConnectionPiece * h = new ConnectionPiece(4,*e,*b);
		ConnectionPiece * i = new ConnectionPiece(4,*e,*c);
		ConnectionPiece * j = new ConnectionPiece(7,*e,*d);
		ConnectionPiece * k = new ConnectionPiece(3,*e,*f);
	}
	return m_pInstance;
}

Location RoadNetwork::getLocationFromName(const std::string& A)
{
	for (auto locatie : RoadNetwork::network)
	{
		if (Place* V = dynamic_cast<Place*>(locatie))
		{
			if (V->getName() == A)
			{
				return *locatie;
			}
		}
		else if (Junction* V = dynamic_cast<Junction*>(locatie))
		{
			if (V->getName() == A)
			{
				return *locatie;
			}
		}
	}
	return Location();
}
