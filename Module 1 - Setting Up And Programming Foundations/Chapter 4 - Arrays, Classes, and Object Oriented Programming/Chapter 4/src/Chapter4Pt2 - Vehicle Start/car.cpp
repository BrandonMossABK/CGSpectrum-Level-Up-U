#include "car.h"

Car::Car()
{
	year = 9999;
	miles = 0;
	make = "";
}

Car::Car(int newYear, int newMiles, std::string newMake)
{
	year = newYear;
	miles = newMiles;
	make = newMake;
}

Car::~Car()
{

}