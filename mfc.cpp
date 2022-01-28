#include <iostream>
using namespace std;

int main( )
{
	string str;
	cout << "Enter a string: ";
	cin >> str;
	
	char distinct[100];
	int distSize = 0;
	int count[100] = {0};
	
	for(int i = 0; str[i] != 0; i++)
	{
		char curr = toupper(str[i]);
		bool inDist = false;
		for(int j = 0; j < distSize; j++)
		{
			if(curr == distinct[j])
				inDist = true;
		}
		if(!inDist)
		{
			distinct[distSize] = curr;
			distSize++;
		}	
	}
	for(int i = 0; str[i] != 0; i++)
	{
		char curr = toupper(str[i]);
		for(int j = 0; j < distSize; j++)
		{
			if(curr == distinct[j])
				count[j]++;
		}
	}
	//finds greatest index
	int greatest = 0;
	for(int j = 1; j < distSize; j++)
		{
			if(count[greatest] < count[j])
				greatest = j;
		}	
	
	
	cout << '\n' << "The most frequent character in " << str << " is " << (char) toupper(distinct[greatest]) << ".";
}


