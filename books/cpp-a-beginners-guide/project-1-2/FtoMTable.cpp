/*
 * Project 1-2
 *
 * This program displays a conversion table of feet to meters.
 *
 * Call this program FtoMTable.cpp
*/

#include <iostream>
using namespace std;

int main() {
	double f; // holds the length in feet
	double m; // holds the conversion to meters
	int counter;
	
	counter = 0;

	for(f=1.0; f <= 100.0; f++) {
		m = f / 3.28;
		cout << f << " feet is " << m << " meters.\n";

		counter++;
		
		// alternatively, use counter == 25 if you want
		// to print blank line every 25 lines
		if (counter == 10) {
			cout << "\n";
			counter = 0;
		}
	}
	
	return 0;
}
