#include <iostream>
#include <iomanip>
using namespace std;

int main( )
{
	int count = 0;
	int redcar = 0, whitecar = 0, bluecar = 0, greencar = 0;
	string color;
	
	cout << "This program counts cars by color." << endl;
	cout << "Use 'quit' to stop." << endl;
	
	cin >> color;
	
	while(color != "quit"){
		count ++;
		if(color == "red")
			redcar ++;
		if(color == "white")
			whitecar ++;
		if(color == "blue")
			bluecar ++;
		if(color == "green")
			greencar ++;
		cin >> color;
	}

	cout << '\n' << count << " cars recorded" << endl;
	cout << '\n' << "Color     Count" << endl;
	cout << "--------  -----" << endl;
	cout << "red       " << setw(5) << redcar << endl;
	cout << "white     " << setw(5) << whitecar << endl;
	cout << "blue      " << setw(5) << bluecar << endl;
	cout << "green     " << setw(5) << greencar << endl;
}

