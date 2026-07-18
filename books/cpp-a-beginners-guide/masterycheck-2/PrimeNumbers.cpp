/*
 * Prime Numbers
 *
 * This program finds all of the prime numbers between 1 and 100
*/

#include <iostream>

using namespace std;

int main() {
	short int i, j;
	bool isPrime;

	// These numbers are known, so why not?
	cout << 2 << ' ' << 3 << ' ';
	for (i = 5; i <= 100; i += 2) {
		isPrime = true;
		
		for (j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		
		if (isPrime) cout << i << ' ';
	}

	return 0;
}
