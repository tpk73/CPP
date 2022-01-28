#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	char a, b;
	int aVal, bVal;
	
	cout<< "Add two hexadecimal digits and then" << endl;
	cout << "show the result as a decimal value." << endl << endl;
	
	cout << "Hexadecimal: ";
	cin >> a;
	
	cout << "Hexadecimal: ";
	cin >> b;
	
	if(a > 47 && a < 58)
		aVal = a -48;
	else// if(a > 97 && a < 123)
		aVal = a - 87;
	
	if(b > 47 && b < 58)
		bVal = b -48;
	else// if(b > 97 && b < 123)
		bVal = b - 87;
	

	cout << '\n' << a << " + " << b << " = " << aVal + bVal;
}