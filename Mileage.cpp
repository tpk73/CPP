#include <iomanip>
#include <iostream>
using namespace std;

int main( )
{
	int startodo, lastodo, currentodo, tripodo = 0;
	float gas, totalgas=0, mpg;
	
	//Description of Program
	cout << "This program calculates mileage." << endl;
	cout << "Type in -1 for the odometer reading to signify the end of the program." << endl;
	
	//Startup get odo reading
	cout << "Enter gallons at least once." << endl;
	cout << "Initial odometer reading: ";
	cin >> startodo;
	
	//set fixed
	cout << fixed;
	
	//Initialize the loop
	cout << '\n' << "Current odometer reading: ";
	cin >> currentodo;
	
	//while loop
	while(currentodo != -1){	
		//Input gas
		cout << "Gallons of gas purchased: ";
		cin >> gas;
		
		lastodo = currentodo - (startodo + tripodo);
		mpg = lastodo/gas;
		tripodo += lastodo;
		totalgas += gas;
		
		//output1
		cout << "You drove " << lastodo << " miles averaging " << setprecision(2) << mpg << " mpg." << endl;
		
		cout << '\n' << "Current odometer reading: ";
		cin >> currentodo;
	}
	//output2
	cout << "All together, you drove " << tripodo << " miles on "<< setprecision(2) << totalgas <<" gallons of gas, averaging "<< setprecision(2) << tripodo / totalgas <<" mpg." << endl;
}