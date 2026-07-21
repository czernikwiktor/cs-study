/*
 * ASCII
 *
 * A program that converts lowercase letters to uppercase and vice-versa,
 * does nothing to non-letter characters.
*/

#include <iostream>

using namespace std;

int main() {
	char character;
	char diff = 'a' - 'A';
	int changes = 0;


	do {
		cout << "Enter a character: ";
		cin >> character;

		if (character >= 'A' && character <= 'Z') {
			character += diff;
			changes++;
		}
		else if (character >= 'a' && character <= 'z') {
			character -= diff;
			changes++;
		}

		cout << "Result: " << character << "\n";
	} while (character != '.');

	cout << "Case changes: " << changes << "\n";

	return 0;
}
