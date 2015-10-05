#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "RoadNetwork.hpp"

RoadNetwork* RoadNetwork::m_pInstance = nullptr;
std::vector<Location*> RoadNetwork::locations = std::vector<Location*>();
std::vector<ConnectionPiece*> RoadNetwork::connectionpieces = std::vector<ConnectionPiece*>();

RoadNetwork* RoadNetwork::Instance(){
	if(!m_pInstance){
		m_pInstance = new RoadNetwork;

		Location * a = new Place("Huissen", 5, 6);
				Location * b = new Place("Arnhem", 15, 7);
				Location * c = new Place("Duiven", 9, 12);
				Location * d = new Place("Westervoort", 9, 20);
				Location * e = new Junction("Velperbroek", 10, 10);
				Location * f = new Junction("Ede", 15, 15);
				m_pInstance->locations.push_back(a);
				m_pInstance->locations.push_back(b);
				m_pInstance->locations.push_back(c);
				m_pInstance->locations.push_back(d);
				m_pInstance->locations.push_back(e);
				m_pInstance->locations.push_back(f);

				ConnectionPiece * g = new ConnectionPiece(8,*e,*a);
				ConnectionPiece * h = new ConnectionPiece(4,*e,*b);
				ConnectionPiece * i = new ConnectionPiece(4,*e,*c);
				ConnectionPiece * j = new ConnectionPiece(7,*e,*d);
				ConnectionPiece * k = new ConnectionPiece(3,*e,*f);

				ConnectionPiece * l = new ConnectionPiece(8,*a,*e);
				ConnectionPiece * m = new ConnectionPiece(4,*b,*e);
				ConnectionPiece * n = new ConnectionPiece(4,*c,*e);
				ConnectionPiece * o = new ConnectionPiece(7,*d,*e);
				ConnectionPiece * p = new ConnectionPiece(3,*f,*e);

				m_pInstance->connectionpieces.push_back(g);
				m_pInstance->connectionpieces.push_back(h);
				m_pInstance->connectionpieces.push_back(i);
				m_pInstance->connectionpieces.push_back(j);
				m_pInstance->connectionpieces.push_back(k);

				m_pInstance->connectionpieces.push_back(l);
				m_pInstance->connectionpieces.push_back(m);
				m_pInstance->connectionpieces.push_back(n);
				m_pInstance->connectionpieces.push_back(o);
				m_pInstance->connectionpieces.push_back(p);
				std::cout << locations.size() << std::endl;
	}
	return m_pInstance;
}

Location RoadNetwork::getLocationFromName(const std::string& A)
{
	std::cout << "Controleren Locaties" << std::endl;
	for (auto locatie : locations)
	{
		if (Place* V = dynamic_cast<Place*>(locatie))
		{
			if (V->getName() == A)
			{
				std::cout<< "Plaats gevonden :" << V->getName() << std::endl;
				return *locatie;
			}
		}
			else if (Junction* V = dynamic_cast<Junction*>(locatie))
		{
			if (V->getName() == A)
			{
				std::cout<< "Knooppunt gevonden :" << V->getName() << std::endl;
				return *locatie;
			}
		}
	}
	return Location();
}
