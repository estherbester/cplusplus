// This is another Google Code tutorial exercise.
// Generate a random number and have the user guess it.

#include <iostream>
// need time to seed the random number
#include <ctime> 

using namespace std;

int main (void){
	int i, secret, guess;
	srand(time(0));  // seed the random number 
	secret = rand() % 65;

	while (guess != secret)
	{
			// Google's version had integer validation but whatever. 
			cout << "Guess the number: ";
			cin >> guess;
			if (guess > secret) {
				cout << "Too high! Guess lower." << endl;
			}
			else if (guess < secret){
				cout << "Too low! Guess higher." << endl;
			}
	} 
		
	cout << "You guessed it! The number is " << guess << endl;
	return 0;

}