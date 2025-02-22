#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	int year;
	int leap1 = 4, leap2 = 100, leap = 400;

	cout << "welcome to the leap year calaculator :)" << endl;
	cout << "---------------------------------------" << endl;
	cout << "What year are we in : ";
	cin >> year;

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				cout << "we are in a leap year";
				exit(0);
			}
			
			cout << "we are not in a leap year";
			exit(0);
		}
		else if (year % 400 == 0){
			cout << "we are in a leap year";
			exit(0);
		}

		cout << "We are in a leap year";

	}

	return 0;

}
