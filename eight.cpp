#include <iostream>
using namespace std;

int main( )
{
	int arr[8];
	int r = 0;
	
	cout << "Enter the columns containing queens, in order by row: " ;
	
	//user input
	for(int i = 0; i < 8; i++)
		cin >> arr[i];
	
	//formating
	cout << endl;
	
	//rows
	while( r != 8){
		//lines
		for(int i = 0; i < 8; i++)
			if(i == arr[r])
				cout << 'Q';
			else
				cout << '.';
		
		//formating
		cout << endl;
	
		//add to rows
		r++;
	}
}
