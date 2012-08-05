// TIL that adding a boolean casts the boolean as a number??  so 100 + true = 101!?

#include <iostream>
#include <cmath>

using namespace std;

double total_cost (int rabbit, int pig, int horse) {
	return (.5*rabbit + 3*pig + 10*horse);
}


int main (void) {

    int rabbit, pig, horse;
    int total_animals = 100;

	for (horse=0; horse < total_animals; horse++){
		for (pig=0; pig < total_animals; pig++){
			for (rabbit=0; rabbit < total_animals; rabbit++){
			
				if ((rabbit + pig + horse) == total_animals) {
					if (total_cost(rabbit, pig, horse) == 100){
						cout << rabbit << " rabbits, " << pig << " pigs, " << horse << " horses ";
						cout << total_animals + true;
					}
				}
			}
		}
	}
	return 0;
}
