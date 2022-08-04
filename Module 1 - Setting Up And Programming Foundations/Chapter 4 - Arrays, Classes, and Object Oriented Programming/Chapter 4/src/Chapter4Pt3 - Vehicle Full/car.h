#pragma once
#include "vehicle.h"

class Car : public Vehicle
{
public:
	Car();
	Car(int year, int miles, std::string make) :
		Vehicle(year, miles, make) {}

	virtual ~Car();
};