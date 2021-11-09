#include <iostream>
using namespace std;

int main() {

	for(;;) {

		int i, b = 0;
		cout<< "\nInput the number of terms: ";
		cin>>b;


		unsigned long long int x = 0;
		unsigned long long int arr[b]= {0,1};

		if (b>2) {
			for (i = 1; i<b; i++) {
				x = arr[i] + arr[i-1];
				arr[i+1] = x;
			}

			for (unsigned long long int y:arr) {
				cout<<y <<"  ";
			}


		} else if (b== 1) {
			cout<< "0";
		}

		else if (b == 2) {
			cout << "0  1";
		}

	}

	return 0;
}
