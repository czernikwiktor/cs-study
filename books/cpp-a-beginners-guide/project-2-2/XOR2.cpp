/*
 * Project 2-2
 *
 * Create an XOR using the C++ logical operators.
 * This is the second version of this project, where
 * user can input boolean values.
 * 
*/

#include <iostream>

using namespace std;

int main() {
	bool p, q;

	cout << "Enter p: ";
	cin >> p;
	cout << "Enter q: ";
	cin >> q;

	bool result = (p || q) && !(p && q);

	cout << "Value is: " << result << "\n";

	return 0;
}
