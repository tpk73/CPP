#include <iostream>
using namespace std;

int main( )
{
	int arr[100];
	int i =0;
	
	//Prompt user
	cout << "Enter integer values into the array, or -1 to stop:" << endl;
	
	//Prime the loop/User input
	cin >> arr[i];
	
	//Quit loop if User enters -1
	while(arr[i] != -1){
		i++;
		cin >> arr[i];
	}
	
	//formating
	cout << endl;
	
	//Output Prompt
	cout << "Distinct values in the array:" << endl;
	
	
}
