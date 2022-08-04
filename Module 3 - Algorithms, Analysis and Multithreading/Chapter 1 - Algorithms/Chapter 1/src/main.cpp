#include <iostream>
#include <chrono>


void BubbleSort(int arr[], int n);
uint32_t GetNanoSeconds();

uint32_t GetNanoSeconds()
{
	using namespace std::chrono;
	return static_cast<uint32_t>(duration_cast<nanoseconds>
		(system_clock::now().time_since_epoch()).count());
}

void BubbleSort(int arr[], int n)
{
	for (int pass = 0; pass < n - 1; pass++)
	{
		for (int i = 0; i < n - pass - 1; i++)
		{
			if (arr[pass] > arr[i + 1])
			{
				std::swap(arr[i], arr[i + 1]);
			}
		}
	}
}


int main()
{
	int arr[] = { 543, 243, 2435, 662, 49, 462 };
	int n = sizeof(arr) / sizeof(arr[0]);

	uint32_t StartNanoSeconds = GetNanoSeconds();
	BubbleSort(arr, n);
	uint32_t EndNanos = GetNanoSeconds();

	std::cout << "Sorted via BubbleSort. Time result: " << (EndNanos - StartNanoSeconds) 
		<< " ns." << std::endl;
	std::cout << "Array that was sorted: \n";
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
}