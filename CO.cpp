#include <iostream>
using namespace std;

int main( )
{
	string s;
	char c;
	int count = 0;
	
	cout << "Enter a string: ";
	cin >> s;
	cout << "Enter a character: ";
	cin >> c;
	
	c = toupper(c);
	
	for(int i = 0; s[i] != 0; i++)
	{
		if(c == toupper(s[i]))
			count++;
	}

	cout << '\n' << "\"" << c << "\" appears " << count << " time(s)";

}
