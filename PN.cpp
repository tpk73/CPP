#include <iostream>
using namespace std;

int main( )
{
	bool isPrime = true;
	int num;
	
	cout << "Enter number: ";
	cin >> num;
	
	if(num <= 1)
	{
		isPrime = false;
	}else if(num != 2)
	{
		if(num % 2 == 0)
			isPrime = false;
		for(int i = 3; isPrime && i < num/2; i += 2)
		{
			if(num % i == 0)
				isPrime = false;
		}
	}
	if(isPrime)
		cout << num << " is prime.";
	else
		cout << num << " is not prime.";
}
