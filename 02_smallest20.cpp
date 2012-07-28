# include <iostream>
# include <string>

using namespace std;

//Project Euler problem 5, https://projecteuler.net/problem=5

// We are going to brute-force a way to find the smallest
// number that is evenly divisible by all the integers from 
// 1 to 20.  This works reasonably well here only because 
// we're dealing with relatively small numbers =)

int main (void)
{
	long unsigned int lcm = 20;
	int n = 20;
	
    while ( n > 0 ) {	
	    if (lcm % n != 0) {
			lcm++;   // increment our integer...
			n = 20;  // ... and start over
		}	
	    else {
			n--;  // decrement the dividend to keep going
		}
	}
    cout << lcm;	
	return 0;

}