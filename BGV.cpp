#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int arr[100];
	int val, x;
	int num = 0;
	
	cout << "Number of values to graph: ";
	cin >> val;
	
	for(int i = 0; i < val; i++)
	{
		cin >> arr[i];
		num = arr[i];
	}
	
	cout << endl;
	
	x = num;
	
	for(int i = 0; i < x; i ++)
	{
		cout << " ";
		for(int j = 0; j < val; j++)
		{
			if(arr[i] >= num)
				cout << " # ";
			else
				cout << " ";
		}
		num--;
		cout << endl;
	}
	for(int i = 0; i < val; i++)
		cout << "---";
	
	cout << endl;
	
	for(int i = 0; i < val; i++)
		cout << " " << arr[i];
}