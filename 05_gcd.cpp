// Google C++ example 4 final exercise: Euclidean Algorithm
// This is a fairly dumb way to do it and could be refactored
// easily but it is late and I am tired.
#include <iostream>
using namespace std;


int main (void){
    int var1 ;
	int var2 ;
	int diff;
	cout << "First integer: ";
	cin >> var1;
	cout << "Second integer: ";
	cin >> var2;
	while (var2 != 0) {
			diff = var1 % var2;
		    var1 = var2;
			var2 = diff;
		}
    cout << var1 << endl;

	return 0;
}