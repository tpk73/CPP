#include <iostream>
using namespace std;

int main( )
{
	int num, reversenum = 0;
	int size = 0;
	
	cout << "Enter number: ";
	cin >> num;
	
	int steps = 0;
	
	while(num != reversenum && steps < 200)
	{
		num = num + reversenum;
		reversenum = 0;
		int numCopy = num;
	
		while(numCopy > 0)
		{
			reversenum *= 10;
			reversenum += numCopy % 10;
			numCopy /= 10;
		}
		steps++;
	}
	if(steps == 200)
		cout << '\n' << "No palindrome found.";
	else
		cout << '\n' << "Palindrome: " << num;
}
