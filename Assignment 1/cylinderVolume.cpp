// Program to calculate the volume of a cylinder "v = hr^ 3"
#include <iostream>
using namespace std;
// PI = 3.142
const float PI = 3.142;

int main(){
	
	cout << "\t\t PROGRAM TO CALCULATE THE VOLUME OF A CYLINDER V = PI*h*r^2\n";
	
	for(;;){
	double radius;
	cout << "Input the radius: " ;
	cin >> radius;
	
	double height;
	cout << "Input the height: ";
	cin >> height;
	
	double volume;
	volume  = PI * height * radius * radius;
	cout << "\nVolume of cylinder:\a " << volume << endl;
	
}
	return 0;
}         