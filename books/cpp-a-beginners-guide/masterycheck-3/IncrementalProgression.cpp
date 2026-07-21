/*
 * Incremental Progression
 *
 * A small program that increments numbers like this:
 * 1, 2, 4, 8, 16, 32, etc..
*/

#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i <= 256; i *= 2) {
		cout << i << " ";
	}
	cout << "\n";

	return 0;
}
