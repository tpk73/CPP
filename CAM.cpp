#include <iostream>
#include <iomanip>
using namespace std;

int main( )
{
	float arr[100];
	float mean, total= 0, div = 0;
	int loop, above = 0;
	
	//find value for loop
	cout << "How many values are in the list? ";
	cin >> loop;
	
	//uesr input
	for(int i = 0; i < loop; i++){
		cin >> arr[i];
		total += arr[i];
	}
	
	//calculate mean
	mean = total / loop;
	
	//find out if user input is above the mean
	for(int i = 0; i < loop; i++){
		if(arr[i] > mean){
			//cout << arr[i] << endl;
			above++;
			//cout << above << endl;
		}
	}
	
	//formating
	cout << fixed;
	
	//output
	cout << above << " values from the list are above the mean of " << setprecision(2) << mean;
}

