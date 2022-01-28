#include <iostream>
using namespace std;

int main( )
{
	int i1, i2, i3;
	
	cout << "This program identifies the largest of three numbers." << "\n\n";

	//User Input
	cout << "Enter integer: ";
	cin >> i1;
	cout << "Enter integer: ";
	cin >> i2;
	cout << "Enter integer: ";
	cin >> i3;

	//For loop to calculate largest number
	if((i1 >= i2) && (i1 >= i3))
		cout << "\n" << "The largest number is " << i1 << ".";
	else if((i2 >= i1) && (i2 >= i3))
		cout << "\n" << "The largest number is " << i2 << ".";
	else if((i3 >= i1) && (i3 >= i2))
		cout << "\n" << "The largest number is " << i3 << ".";
}