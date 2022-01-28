#include <iostream>
#include <iomanip>
using namespace std;

string matchPrefixSuffix(string a, string b)
{
	string matchA = "", matchB = "", longM = "";
	int lengthB = 0;
	
	for(int i = 0; b[i] != 0; i++)
	{
		lengthB++;
	}
	
	for(int i = 0; a[i] != 0 && b[i] != 0; i++)
	{
		matchA = matchA + a[i];
		matchB = b[lengthB - i - 1] + matchB;
		if(matchA == matchB)
		{
			longM = matchA;
		}
	}
	
	//cout << a << b << endl; 
	
	return longM;
}

int main()
{
   string word1, word2;
   cout << "Enter strings: ";
   cin >> word1 >> word2;
   
   cout << endl;
   
   string match = matchPrefixSuffix(word1,word2);
   if( match == "" ) // empty string
      cout << "There is no matching prefix and suffix.\n";
   else
      cout << "The longest match is \"" << match << "\"\n";
}