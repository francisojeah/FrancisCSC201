#include <iostream>
using namespace std;

//THIS PROGRAM CAN GET THE PRODUCT TABLE OF ANY NUMBER, EVEN LARGE NUMBERS. TRY IT :)

//parameters are the value of j in the for loop, value for n, the limit of the table
void multTable(int x, int n, int l) {

	int j,i,a;


	//Header for table
	for(i=1; i<=1; i++) {

		for(j=x; j<=n; j++) {
			cout<<"----------------";
		}
		cout<< "\n";


		for(j=x; j<=n; j++) {
			cout<<"|\tX"<<j<<"\t|";


		}
		cout<< "\n";
		for(j=x; j<=n; j++) {
			cout<<"----------------";
		}
		cout<< "\n";
	}

	//Values in table
	for(i=1; i<l+1; i++) {

		for(j=x; j<=n; j++) {

			cout<<"|"<< i << " * "<<j<<" = " <<i*j;
			cout<<"\t|";
		}
		cout<< "\n";
	}

	//For end of table
	for(i=1; i<=1; i++) {

		for(j=x; j<=n; j++) {
			cout<<"----------------";
		}
		cout<< "\n";
	}
}


int main() {

	//Endless loop
	for (;;) {
		int limit,i,a,z,y,n;
		cout<<"THIS PROGRAM CAN GET THE PRODUCT TABLE IN A TABULAR FORM OF ANY NUMBER, EVEN LARGE NUMBERS. TRY IT :)\n";

		cout<<"Enter the Value for n: ";
		cin>> n;
		cout<<"Enter the limit of multiplication: ";
		cin>>limit;

		//Title
		if (n>1) {
			cout<<"\n\t\t\t Multiplication Table for 1 to " << n <<endl;
		} else {
			cout<<"\n\t\t\t Multiplication Table for "<<n<<endl;
		}

		a = (n/7) +1;
		z = 1;
		y = 7;

		while (a>0) {
			if (a== 1) {
				multTable(z,n,limit);
			} else if (a > 1) {
				multTable(z,y,limit);
				y +=7;
				z	+=7;
			}
			a -= 1;
		}
	}

	return 0;
}