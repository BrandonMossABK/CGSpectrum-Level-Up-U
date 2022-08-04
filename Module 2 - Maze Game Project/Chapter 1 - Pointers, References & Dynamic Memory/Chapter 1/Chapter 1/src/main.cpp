#include <iostream>

int main() {
	int a, b;

	std::cout << "Enter an integer: " << std::endl;
	std::cin >> a;
	std::cout << "Enter a second integer: " << std::endl;
	std::cin >> b;

	int* ptrA, * ptrB;
	ptrA = &a;
	ptrB = &b;

	std::cout << "Pointer A is " << ptrA << std::endl 
		<< "The value of pointer A is " << *ptrA 
		<< std::endl << "Pointer B is " << ptrB << std::endl 
		<< "The value of pointer B is " << *ptrB << std::endl;

}