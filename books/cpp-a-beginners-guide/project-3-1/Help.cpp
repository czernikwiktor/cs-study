/*
 * Project 3-1
 *
 * A simple help system
*/

#include <iostream>

using namespace std;

int main() {
	char choice;


	cout << "Help on\n1. if\n2. switch\nChoose one: ";
	cin >> choice;

	switch(choice) {
		case '1':
			cout << "\nThe if:\n\n";
			cout << "if(condition) statement;\n";
			cout << "else statement;\n";
			break;
		case '2':
			cout << "\nThe switch: \n\n";
			cout << "switch(expression) {\n";
			cout << "\tcase constant:\n";
			cout << "\t\tstatement sequence\n";
			cout << "\t\tbreak;\n";
			cout << "\t// ...\n";
			cout << "}\n";
			break;
		default:
			cout << "Selection not found!";
	}
	
	return 0;
}
