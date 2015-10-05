#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "AppManager.hpp"
#include "Route.hpp"
Route route;

void AppManager::showRouteView()
{
	std::cout<< "U bevind zig nu in het route invul scherm!" << std::endl;

}

void AppManager::startRoute()
{
	Route route;
	showRouteView();
}

AppManager::AppManager()
{
}

AppManager::AppManager(const AppManager& aAppManager)
{
}

AppManager::~AppManager()
{
}

void AppManager::inputRoute(Location A, Location B)
{
	Route route;
	route.inputRoute(A,B);
	route.calculateRoute();
}
