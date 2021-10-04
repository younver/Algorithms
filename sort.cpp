#include <iostream>
#include <vector>

int n, temp;
std::vector<int> arr;

// Common Functions
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


// Selection Sort:  O(N^2)  O(N^2)  O(N^2)
void selectionSort() {
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; j++) 
			if (arr[j] < arr[i]) 
				swap(&arr[j], &arr[i]);
	}
}


// Bubble Sort:  O(N)  O(N^2)  O(N^2)
void bubbleSort() {
	for (int i = 0; i < n-1; i++) {
		bool swapped = false;

		for(int j=0; j<n-1-i; j++)
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
				swapped = true;
			}

		if (!swapped) break;
	}
	
}


// Insertion Sort:  O(N)  O(N^2)  O(N^2)
void insertionSort() {
	for (int i = 1; i < n; i++) {
		int compare = arr[i];
		int j = i - 1;

		while (j > -1 && arr[j] > compare) {
			arr[j + 1] = arr[j];
			j -= 1;
		}

		arr[j+1] = compare;
	}
}


int main() {
	// Initialization
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		arr.push_back(temp);
	}


	// Algorithm
	insertionSort();

	printArray(arr, n);
	return 0;
}