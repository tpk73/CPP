#include <iostream>
using namespace std;

int main( )
{
	int a, b, aMult=1, bMult=1;
	
	cout << "Enter number: ";
	cin >> a;
	
	cout << "Enter number: ";
	cin >> b;
	
	while((a * aMult) != (b * bMult)){
		if((a * aMult) < (b * bMult)){
			aMult ++;
		}else
			bMult ++;	
	}
	cout << '\n' << "LCM: " << (a * aMult);
}