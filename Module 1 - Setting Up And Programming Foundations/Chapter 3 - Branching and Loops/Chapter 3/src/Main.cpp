#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <iostream>

bool leapYearCheck(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return true;
	else
		return false;
}

void printFactors(int num)
{
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			std::cout << i << " ";
	}
}

int main()
{
	int year;
	bool isLeapYear;

	std::time_t t = std::time(nullptr);
	std::tm* const pTInfo = std::localtime(&t);
	year = 1900 + pTInfo->tm_year;
	std::cout << "The current year is " << year << std::endl;

	isLeapYear = leapYearCheck(year);

	if (isLeapYear)
		std::cout << "This year IS a leap year." << std::endl;
	else
		std::cout << "This year is NOT a leap year." << std::endl;



	int num;

	std::cout << "Enter a positive integer: ";
	std::cin >> num;

	std::cout << "Here are the factors of " << num << ": " << std::endl;
	printFactors(num);

	return 0;
}