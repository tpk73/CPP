#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int explode(int number, int array[])
{
    // Write this function to populate array with digits from number
    //  and return the number of digits in array
}

int main()
{
	int digits[10];
	int numdigits;
	
	int n;
	cout << "Enter number: ";
	cin >> n;
	
	numdigits = explode(n,digits);
	
	cout << "[" << digits[0];
	for( int i = 1; i < numdigits; i++ )
		cout << "," << digits[i];
	cout << "]" << endl;
}