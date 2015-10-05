/*
 * main.cpp
 *
 *  Created on: 5 okt. 2015
 *      Author: thomas
 */
#include "AppManager.hpp"
#include "RoadNetwork.hpp"
#include <string>

int main(int argc, char **argv)
{
	RoadNetwork roadNetwork;
	AppManager app;
	std::string input;
	std::cin >> input;

	if (input == "registeren")
	{
		//app.
	}
	else if (input == "route")
	{
		app.startRoute();

		std::cout<< "Voer uw beginpunt in!" << std::endl;
		std::string A;
		std::string B;
		std::cin>>A;
		std::cout<< "Voer uw eindpunt in!" << std::endl;
		std::cin>>B;

		app.inputRoute(A,B);
	}
}

