#include <iostream>
#include <vector>

int n, temp;

void swap(int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void printArray(std::vector<int> arr, int size)
{
	//size = *(&arr + 1) - arr;
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int main() {
	// Initialization
	scanf_s("%d", &n);

	std::vector<int> arr;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		arr.push_back(temp);
	}


	// Algorithm
	for (int i = 0; i < n; ++i) {
		for (int j = i+1; j < n; j++) {
			if (arr[j] < arr[i]) 
				swap(&arr[j], &arr[i]);
		}
	}


	printArray(arr, n);
	return 0;
}