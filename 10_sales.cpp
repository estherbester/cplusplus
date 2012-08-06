#include <iostream>

using namespace std;


#define kBase 600

int GetInput(){
	int pairs;
	cout << "How many sold? "; 
	cin >> pairs;
	return pairs;
}

double Calc1(){
    cout << "1. " << kBase << endl;
}

double Calc2(int sales){
	int base = 7*40;
	double commission = .1 * sales * 225;
	cout << "2. " << base + commission << endl;
}

double Calc3(int sales){
	cout << "3. " << .2 * sales * 225 + sales * 20 << endl;
}

int main (void){
    int WeeklySales = 0;
	do {
		WeeklySales = GetInput();
	    Calc1(); 
		Calc2(WeeklySales);
	    Calc3(WeeklySales);

	} while (WeeklySales > 0);
	return 0;
}
