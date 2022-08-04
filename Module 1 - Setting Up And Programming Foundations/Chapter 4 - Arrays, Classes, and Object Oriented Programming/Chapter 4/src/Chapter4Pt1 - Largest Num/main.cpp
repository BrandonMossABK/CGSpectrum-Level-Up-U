#include <iostream>

int FindLargestNum(int arr[], int size)
{
	int largest = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > largest)
			largest = arr[i];
	}
	return largest;
}


int main()
{
	int arr[6] = {3, -29, 402, 45, 0, -534};
	int size = sizeof(arr) / sizeof(0);

	int largest = FindLargestNum(arr, size);

	std::cout << "The largest number is " << largest;
}