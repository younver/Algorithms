// Find all prime numbers (limit: 300)
#include <iostream>

void findPrimes(int n) {
	// A boolean array that stores all numbers
	bool primes[300];

	// Initialize all entries as true
	memset(primes, true, 300);

	// Sieve of Eratosthenes:
	// Marking all multiples of each prime number
	for (int i = 2; i*i < n; i++) {
		if (primes[i]) {
			for (int j = i*i; j < n; j += i) {
				primes[j] = false;
			}
		}
	}

	// Print
	for (int i = 2; i < n; i++) {
		if (primes[i])
			std::cout << i << ' ';
	}
}

int main() {
	int n = 300;
	
	findPrimes(n);
	return 0;
}