// get inputs
// Google c++ class example 2

#include <iostream>
using namespace std;

int main () {

	int input_var = 0;
	// Do while means it will execute at least once
	do {
		cout << "Enter a number (-1 = quit): ";
		if (!(cin >> input_var)){
			cout << "You entered a non-numeric. Ignoring... " << endl;
			// instead of break let's clean up the error
			cin.clear();  // clear the error flag
			cin.ignore(256, '\n'); // extract and ignore the value in stream
			continue;
		}
		if (input_var != -1) {
			cout << "You entered " << input_var << endl;
		}
	} while (input_var != -1);
	cout << "All done." << endl;

	return 0;

}
