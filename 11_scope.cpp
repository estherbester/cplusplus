#include <iostream>
// today i learned about scoping.

using namespace std;

int a = 18;
int b = 6;

int function1(int a, int b){

	return a - b;
}

int function2() {
	int c; 
	c = a + b ; // uses globals; when called, a = -6 and b = 6 (the global!)
	return c;
}

int main (void) {
	int b = 12;
	int c = 0;

	a = function1(b, a); // calls function1(12, 18); returns -6
	c = function2(); // c is declared; a's value is -6; b will be 6 when function2 is called.
	
	// I totally thought function2 would return a value of -6+12, but of course 
	// the value of b declared in "main" is not accessible to function2. 
	// So the function2 uses the global value of b, 6.
	cout << "a: " << a << " b: " << b << " c: " << c << endl; // "a: -6; b: 12 c: 0" 

}