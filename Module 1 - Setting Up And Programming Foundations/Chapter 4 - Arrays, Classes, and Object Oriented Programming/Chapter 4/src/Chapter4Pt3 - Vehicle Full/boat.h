#pragma once
#include vehicle.h

class Boat : public Vehicle
{
public:
	Boat();
	Boat(int year, int miles, std::string make) :
		Vehicle(year, miles, make) {}

	virtual ~Boat();
};