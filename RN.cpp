#include <iostream>
using namespace std;

int main( )
{
	float number, remainder; 
	
	cout << "Enter a number: ";
	cin >> number;
	
	remainder = number - int(number);
	//cout << remainder;
	
	//Round Positive Number
	if (number > 0){
		if(remainder >= .5){
			number ++;
			cout << "The rounded number is " << int(number);
		}else if(remainder < .5)
			cout << "The rounded number is " << int(number);
	}
	
	//Round Negative Number
	if (number < 0){
		if(remainder <= -.5){
			number --;
			cout << "The rounded number is " << int(number);
		}else if(remainder > -.5)
			cout << "The rounded number is " << int(number);
	}
}