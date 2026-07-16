/*
 * Project 2-1
 *
 * Talking to mars
*/

#include <iostream>
using namespace std;

int main() {
	double distance;
	double lightspeed;
	double delay;
	double delay_in_min;

	distance = 34000000.0;
	lightspeed = 186000.0;

	delay = distance / lightspeed;
	delay_in_min = delay / 60.0;

	cout << "Time delay when talking to mars: " <<
		delay << " seconds.\n";
	cout << "This is " << delay_in_min << " minutes.";

	return 0;
}
