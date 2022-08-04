#include <iostream>

int cube(int num)
{
	return num * num * num;
}

int main()
{
	int one, two, three;
	int sum, average;

	std::cout << "Enter an integer: ";
	std::cin >> one;

	std::cout << "Enter another integer: ";
	std::cin >> two;

	std::cout << "Enter a third integer: ";
	std::cin >> three;

	sum = one + two + three;
	average = sum / 3;

	std::cout << "The sum of all three integers is " << sum;
	std::cout << " and the average of all three integers is " << average << std::endl;

	int num;

	std::cout << "Enter a new integer: ";
	std::cin >> num;

	int cubed = cube(num);

	std::cout << num << " cubed is " << cubed << std::endl;

	return 0;
}