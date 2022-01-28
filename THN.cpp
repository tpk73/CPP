#include <iostream>
using namespace std;

int main( )
{
	int num, var;
	int high, second;
	
	cout << "How many numbers? ";
	cin >> num;
	
	for(int i = 0; i < num; i++){
		cin >> var;
		if(i == 0){
			high = var;
		}else if (i ==1){
			if(var > high){
				second = high;
				high = var;
			}else
				second = var;
		}else
			if(var > high){
				second = high;
				high = var;
			}else if(var > second && var < high)
				second = var;
			else if(var == high)
				second = high;
	}


	cout << '\n' << "Highest: " << high << endl;
	cout << "Second: " << second << endl;
}