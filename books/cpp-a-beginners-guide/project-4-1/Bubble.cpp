/*
 * Project 4-1
 *
 * This project demonstrates the bubble sort.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int size = 10;
	int nums[size];
	int i, j, t;


	for (t=0; t<size; t++) nums[t] = rand() % 100;

	cout << "Original array is:\n";
	for (t=0; t<size; t++) cout << nums[t] << " ";
	cout << "\n\n";

	// This is the bubble sort (a bit different from the book)
	for (j=1; j<size; j++) {
		for (i=0; i<size-j; i++) {
			if (nums[i] > nums[i+1]) {
				t = nums[i+1];
				nums[i+1] = nums[i];
				nums[i] = t;
			}
		}
	}

	cout << "Sorted array is:\n";
	for (t=0; t<size; t++) cout << nums[t] << " ";
	cout << "\n";
	
	return 0;
}
