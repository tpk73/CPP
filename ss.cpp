#include <iostream>
using namespace std;

void PrintArray(int a[], int size)
{
	for( int i = 0; i < size-1; i++ )
		cout << setw(2) << a[i] << ",";
	cout << setw(2) << a[size-1] << endl;
}

int main( )
{
	int value, num;
	int numlist [100];
	
	cout << "This program sorts a set of numbers." << endl << endl;

	cout << "How many values? ";
	cin >> value;
	
	for(int i = 0; i < value; i++)
	{
		cin >> num;
		numlist[i] = num;
	}
	
	cout << numlist;
}
