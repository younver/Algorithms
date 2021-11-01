#include <iostream>

int arr[] = { 1,2,3 };

int sum(int* array) {
	int result = 0;
	while (*array)
	{
		result += *array;
		array++;
	}

	return result;
}

int main() {
	std::cout << sum(arr);

	return 0;
}