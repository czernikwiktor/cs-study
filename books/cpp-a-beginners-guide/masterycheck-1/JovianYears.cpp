/* 
 * Jovian Years
 *
 * This program converts Jovian years to Earth years
*/

#include <iostream>

using namespace std;

int main() {
	double jovianYears;
	double earthYears;

	cout << "Number of Jovian Years: ";
	cin >> jovianYears;

	earthYears = jovianYears * 12;
	cout << "In Earth years: " << earthYears;

	return 0;
}
