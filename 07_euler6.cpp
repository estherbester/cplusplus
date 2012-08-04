// Another euler problem because i don't feel like doing anything real today
// This one is Euler Problem 6: find the diff between 
// (the sum of the squares of the natural numbers from 1-100)
// and (the square of the sum of the natural numbers from 1-100)
#include <iostream>
using namespace std;

int sum_squares( int max_num)
{
	long sum_of_squares = 0;
	int start = 1;
	while (start < max_num+1) {
		sum_of_squares += start * start;
		start++;
	}
	return (sum_of_squares);
}	

int square_the_sums(int max_num){
	long sum = 0;
	int start = 1;
	while (start < max_num+1) {
		sum += start;
		start++;
	}
	return (sum * sum);

}

int main (void) {
	long sum_of_squares = sum_squares(100);
 	long square_of_sums = square_the_sums(100); 
	cout << "Sum of squares:" << sum_of_squares << endl;
	cout << "Square of sums:" << square_of_sums << endl;

	//cout << "Difference: " << sum_of_squares - square_of_sums << endl;
	cout << "Difference: " <<  square_of_sums - sum_of_squares << endl;
	return 0;
}