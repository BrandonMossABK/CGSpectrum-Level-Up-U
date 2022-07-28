#include "car.h"
#include "boat.h"
#include "airplane.h"

int main()
{
	Car* myCar = new Car(2004, 40, "Honda");
	myCar->Drive(60);
	delete myCar;

	Boat* myBoat = new Boat(2020, 1000, "BoatCo");
	myBoat->Drive(2);
	delete myBoat;

	Airplane* myAirplane = new Airplane(2016, 2000, "Boeing");
	myAirplane->Drive(1000);
	delete myAirplane;

	return 0;
}