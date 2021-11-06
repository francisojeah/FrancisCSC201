// Program to calculate the volume of a cube v = a^3
#include <iostream>
using namespace std;

int main(){
	cout << "\t\tProgram to calculate the volume of a cube v = a^3\n";
	for(;;){

	double a;
	cout << "Input the length of side: ";
	cin >> a;
	
	//Volume of a cube formula
	double volume;
	volume = a * a * a;
	cout << "\nVolume of cube:\a "<< volume << endl;
}
	return 0;
}