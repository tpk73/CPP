#include <iostream>
using namespace std;

int main( )
{
	string currcolor;
	string color [50];
	int size = 0;
	int colorcount[50]= {0};
	int totalcar = 0;
	
	cout << "This program counts cars by color." << endl;
	cout << "Use 'quit' to stop." << endl;
	cin >> currcolor;
	
	while(currcolor != "quit")
	{
		int index = 0;
		while(index < size && color[index] != currcolor)
		{
			index++;
		}
		if(index == size)
		{
			color[size] = currcolor;
			colorcount[size]++;
			size++;
		}
		else
		{
			colorcount[index]++;
		}
		cin >> currcolor;
		totalcar++;
	}
	
	cout << totalcar << " cars recorded" << endl;
	
	for(int i = 0; i < size; i++)
	{
		cout << colorcount[i] << color[i] << endl;
	}

}
