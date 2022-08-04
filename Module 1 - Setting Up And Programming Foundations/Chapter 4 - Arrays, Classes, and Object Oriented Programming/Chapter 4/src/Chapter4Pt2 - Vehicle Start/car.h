#pragma once
#include <string>


class Car
{
private:
	int year;
	int miles;
	std::string make;


public:
	Car();
	Car(int year, int miles, std::string make);
	~Car();

	void SetYear(int newYear) { year = newYear; }
	int GetYear() { return year; }
	
	void SetMiles(int newMiles) { miles = newMiles; }
	int GetMiles() { return miles; }
	
	void SetMake(std::string newMake) { make = newMake; }
	std::string GetMake() { return make; }
};