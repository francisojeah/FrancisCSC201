// Program to calculate the volume of a sphere v = 4/3*pi*r^3
#include <iostream>
using namespace std;
// PI = 3.142
const float PI = 3.142;

int main(){
	cout<<"\t\tProgram to calculate the volume of a sphere v = 4/3*pi*r^3\n";
	
	//endless loop
	for(;;){
	cout<< "\nPI = 3.142\n";
	
	double radius;
	cout << "Input the radius: " ;
	cin >> radius;
	
	double volume;
	volume  = (4.0/3.0) * PI * radius * radius * radius;
	cout << "\nVolume of sphere:\a " << volume << endl;
}
	return 0;
}         
 