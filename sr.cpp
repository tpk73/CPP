#include <iostream>
using namespace std;

double squareRoot(int number)
{
	if(number <= 1)
		return number;
	
	else
	{
	
		double guess = number / (2);
		double lastguess = 0;
		double diff = guess;
		
		while((guess * guess) != number && diff > .0000000001)
		{
			lastguess = guess;
			guess = (guess + (number / guess)) / 2;
			diff = guess - lastguess;
			if(diff < 0)
				diff *= -1;
		}
		return guess;
	
	}
}

int main( )
{
	int num;
	
	cout << "Enter number: ";
	cin >> num;
	
	cout << "The square root of " << num << " is " << squareRoot(num);
}


