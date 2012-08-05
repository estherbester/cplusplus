#include <iostream>
#include <cmath>
using namespace std;

int main (void) {
	int iter_max = 10001;
    int prime_list_length = 1; // already at 1 because we start with 2 
	int num_to_test = 2, remainder;
	while (prime_list_length < iter_max) {
			bool prime = true;
			// iterate over all integers less than the square root of the number
			for (int i = 2; i < (sqrt(num_to_test)+1); i++){
				remainder = num_to_test % i ;

				// if i divides evenly, our number is not prime.
				if (remainder == 0) { 
					prime = false;
					break;
				}
			}
			// if we got through the for loop, the number is prime.
			if (prime){
				prime_list_length++; 
			}
			num_to_test++;
    }
				cout << num_to_test-1 << " ";
	return 0;
}