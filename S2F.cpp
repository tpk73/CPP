#include <iostream>
#include <iomanip>
using namespace std;

float stringToFloat(string s)
{
	float final = 0;
	int startI = 0;
	bool neg = false;
	
	if(s[0] == '-')
	{
		startI++;
		neg = true;
	}
	
	bool beforeDec = true;
	float mult = .1;
	
	for(int i = startI; s[i] != 0; i++)
	{
		if(s[i] == '.')
		{
			beforeDec = false;
		}
		else if(beforeDec)
		{
			final *= 10;
			final += (s[i] - 48);
		}
		else
		{
			final += (s[i] - 48) * mult;
			mult /= 10;
		}
	}
	
	if(neg)
		return final * -1;
	else
		return final;
}

int main()
{
	float f;
	string s;
	
	cout << "Enter number: ";
	cin >> s;

	f = stringToFloat(s);
	
	cout << '\n' << "The integer value \"" << s << "\" becomes the string value "<< f;
}