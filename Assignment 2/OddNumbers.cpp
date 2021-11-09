#include <iostream>
using namespace std;

int main() {
	int lower, upper, i, sum;


	for(;;) {
		sum = 0;

		cout<<"Enter The Lower Limit: ";
		cin>>lower;
		cout<<"Enter The Upper Limit: ";
		cin >>upper;



		cout<<"\n\t\t Odd Numbers Between "<<lower<<" And "<<upper<<endl;
		for (i = lower+1; i<upper; i++) {
			if (i%2 != 0) {
				cout<<i<<"\t";
				sum += i;//Add the values of i to the variable 'sum'
			}
		}

		cout<<"\nSUM of Odd Numbers Between "<< lower <<" And "<<upper<<" : \a" <<sum <<"\n";

	}

	return 0;
}