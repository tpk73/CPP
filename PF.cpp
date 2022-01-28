#include <iostream>
using namespace std;

int main( )
{
	int num, prime = 0;
	bool first = true;
	cout << "Number: ";
	cin >> num;
	
	cout << '\n';
	
	int divNum = 2;
	
	while(num != 1)
	{
		while(num % divNum == 0)
		{
			if(first)
			{
				cout << "( " << divNum;
				first = false;
			}
			else
				cout << " * " << divNum;
			
			num/= divNum;
		}
		divNum++;
	}
	cout << " )";
}
