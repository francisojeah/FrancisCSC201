//Program to convert temperature from Kelvin to Fahrenheit
#include <iostream>
using namespace std;

int main(){
	
	cout<< "\t\tPROGRAM TO CONVERT TEMPERATURE IN KELVIN TO FAHRENHEIT\n";
	for(;;){
	
	//Input the temperature in kelvin
	double kelvin;
	cout<< "Input Temperature in Kelvin(K): ";
	cin >> kelvin;
	
	//Seperated for easy readability
	double a;
	a = kelvin - 273.15;
	
	//Conversion to fahrenheit
	double fahrenheit;
	fahrenheit = ((a*9.0)/5.0) + 32;
	
	//Output result
	cout<< "\nThe Fahrenheit value is: " << fahrenheit << "\370F" << endl;
	cout<< "\n \t" <<kelvin <<"K --> " << fahrenheit << "\370F\a" << endl;
	
}
	
	return 0;
}