/*
 * Moon Gravity Table
 *
 * Displays a table that shows Earth pounds 
 * and their equivalent moon weight.
*/

#include <iostream>

using namespace std;

int main() {
	// What fraction of Earth's gravity is moon's gravity.
	double gravFrac;
	double pounds;
	char lineCount;

	gravFrac = 0.17;
	lineCount = 0;

	for(pounds = 1.0; pounds <= 100.0; pounds += 1) {
		cout << pounds << " Earth pounds are equivalent of " << pounds * gravFrac << " Moon pounds\n";
		
		if (++lineCount == 25) {
			cout << "\n";
			lineCount = 0;
		}
	}

	return 0;
}
