/*
 * Project 1-1
 *
 * This program converts meters to feet.
 *
*/

#include <iostream>
using namespace std;

int main() {
	// Length in meters and conversion in feet
	double m, f;
	
	cout << "Enter the length in meters: ";
	cin >> m;

	f = m * 3.28;
	cout << f << " meters is " << m << " feet.";

	return 0;
}
