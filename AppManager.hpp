#ifndef APP_MANAGER_H
#define APP_MANAGER_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Location.hpp"

class AppManager
{
public:
	/**
	 *  
	 */
	void showRouteView();

	/**
	 *  
	 */
	void startRoute();

	/**
	 *  
	 */
	void inputRoute(Location A, Location B);

};
#endif
