#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "AppManager.hpp"
#include "Route.hpp"


void AppManager::showRouteView()
{
	std::cout<< "U bevind zig nu in het route invul scherm!" << std::endl;

}

void AppManager::startRoute()
{
	Route route();
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

void AppManager::inputRoute(std::string A, std::string B)
{
}
