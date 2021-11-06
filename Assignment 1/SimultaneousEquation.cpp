//program to solve  Simultaneous equation
#include <iostream>
using namespace std;

int main(){
	cout << "\t\tprogram to solve  Simultaneous equation\n";
	
	//endless loop
	for(;;){
		
	//define the variables of the equation
	double x1, y1, sol1, x2, y2, sol2;
	cout << "\n\tEquation 1:\n";
	cout << "Input the coefficient of x: ";
	cin >> x1;
	cout << "\nInput the coefficient of y: ";
	cin >> y1;
	cout << "\nInput the solution to the equation: ";
	cin >> sol1;
	
	cout << "\n \tEquation 2:\n";
	cout << "Input the coefficient of x: ";
	cin >> x2;
	cout << "\nInput the coefficient of y: ";
	cin >> y2;
	cout << "\nInput the solution to the equation: ";
	cin >> sol2;
	
	//arrays to store the cofficients of the equations
	double values1[] = {x1, y1, sol1};
	double values2[] = {x2, y2, sol2};
	
	//multiplying each member of the array by the coefficient of the term of the opposite equation
	for(int i = 0; i< 3; i++){
		values1[i] *= x2 ;
 		values2[i] *= x1 ;
	}
	
	//conditions for solving using elimination method
	double a, b;
	if (x1 >0 && x2 > 0){
		a = values1[1] - values2[1];
  		b = values1[2] - values2[2];
  	}
  	else if ((x1 > 0 && x2 < 0) || (x1 < 0 && x2 > 0)){
  		a = values1[1] + values2[1];
  		b = values1[2] + values2[2];
  		  
	  }
   else if (x1 < 0 and x2 < 0){
   		a = values1[1] - values2[1];
  		b = values1[2] - values2[2];
   	
   }
   
   //solving for x and y of the two equations
   double x, y;
   y = b/a;
   x = (sol1 - (y1 * y))/x1;
   
   cout<< "\nx: "<< x <<endl;
   cout<< "y: "<< y <<endl;
}
  		  
  return 0;
	
}
