/*
 * Absolute Average
 *
 * This program averages the absolute value of five numbers.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	double average, tmp;
	int i;

	cout << "Enter five numbers:\n";

	for (i = 0; i < 5; i++) {
		cin >> tmp;
		average += abs(tmp); 
	}

	average /= 5.0;
	cout << "Average equals: " << average;

	return 0;
}
