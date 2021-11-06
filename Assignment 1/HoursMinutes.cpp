// Program to covert a given number into hours and minutes
#include <iostream>
using namespace std;

int main() {
	cout << "\t\tProgram to covert a given number into hours and minutes\n";
	for(;;) {
		int mins;
		cout << "\nEnter minutes: ";
		cin >> mins;

		int convert;
		convert = mins/60;
		int mod;
		mod  = mins % 60;

		if (mins < 60) {
			cout << "0 hours and " << mins << " minutes\n";
			cout << "\t 0:"<<mins<< endl;
		}

		else if (mins > 60) {

			cout << convert << " hours and " << mod << " minutes\a\n";
			cout << "\t"<<convert << ':'<< mod << endl;
		}
	}

	return 0;
}