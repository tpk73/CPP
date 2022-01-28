#include <iostream>
#include <iomanip>
using namespace std;

string intToString(int n)
{
	string str = "";
	
	if(n== 0)
		return "0";
	
	bool neg = false;
	
	if(n < 0)
	{
		neg = true;
		n *= -1;
	}
	
	while(n != 0)
	{
		int first = n % 10;
		str = (char) (first + 48) + str;
		n /= 10;
	}
	if(neg)
		return "-" + str;
	
	return str;
}

int main()
{
	int n;
	string str;
	
	cout << "Enter number: ";
	cin >> n;

	str = intToString(n);
	
	cout << '\n' << "The integer value " << n << " becomes the string value \"" << str << "\"";
}