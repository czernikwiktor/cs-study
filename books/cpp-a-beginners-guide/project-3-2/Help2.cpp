/*
 * Project 3-2
 *
 * An improved, simple help system
 * that uses do-while to process menu.
*/

#include <iostream>

using namespace std;

int main() {
	char choice;


	do {
		cout << "Help on\n";
		cout << "1. if\n";
		cout << "2. switch\n";
		cout << "3. for\n";
		cout << "4. while\n";
		cout << "5. do-while\n";
		cout << "Choose one: ";
		cin >> choice;
	}
	while (choice < '1' || choice > '5');

	switch(choice) {
		case '1':
			cout << "\nThe if:\n\n";
			cout << "if(condition) statement;\n";
			cout << "else statement;\n";
			break;
		case '2':
			cout << "\nThe switch:\n\n";
			cout << "switch(expression) {\n";
			cout << "\tcase constant:\n";
			cout << "\t\tstatement sequence\n";
			cout << "\t\tbreak;\n";
			cout << "\t// ...\n";
			cout << "}\n";
			break;
		case '3':
			cout << "\nThe for:\n\n";
			cout << "for (init; condition; increment)\n";
			cout << "\tstatement;\n";
			break;
		case '4':
			cout << "\nThe while:\n\n";
			cout << "while (condition) statement;\n";
			break;
		case '5':
			cout << "\nThe do-while:\n\n";
			cout << "do {\n";
			cout << "\tstatement;\n";
			cout << "} while (condition);\n";
			break;
	}
	
	return 0;
}
