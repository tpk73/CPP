#include <iostream>
#include <iomanip>
using namespace std;

int main( )
{
	int arr[40], loop = 0;
	
	//find value for loop
	cout << "Number of values to graph: ";
	cin >> loop;
	
	//user input
	for(int i = 0; i < loop; i++){
		cin >> arr[i];
	}
	
	//formating
	cout << endl;
	
	//print line #
	for(int i = 0; i < loop; i++){
		cout << setw(2) << arr[i] << " | ";
		
		//print # according to user input
		for(int j = 0; j < arr[i]; j++){
			cout << '#';
		}
		//formating
		cout << endl;
	}
}

