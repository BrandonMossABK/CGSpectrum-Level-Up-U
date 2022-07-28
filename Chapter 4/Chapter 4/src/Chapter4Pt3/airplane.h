#pragma once
#include "vehicle.h"

class Airplane : public Vehicle
{
public:
	Airplane();
	Airplane(int year, int miles, std::string make) :
		Vehicle(year, miles, make) {}

	virtual ~Airplane();
};