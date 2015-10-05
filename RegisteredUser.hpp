#ifndef REGISTERED_USER_H
#define REGISTERED_USER_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

class RegisteredUser
{
public:
	RegisteredUser();
	RegisteredUser(const RegisteredUser& aRegisteredUser);
	virtual ~RegisteredUser();
private:
	std::string Name;

	std::string Adress;

	std::string City;

};
#endif
