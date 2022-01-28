#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int id[100];
	string name[100];
	string currName;
	int size;
	
	cout << "How many employees? ";
	cin >> size;
	cout << '\n' << "Enter employee names and numbers: " << endl;
	
	for(int i = 0; i < size; i++)
	{
		cin >> name[i] >> id[i];
	}
	
	cout << '\n' << "Enter a name, or Quit to stop the program. ";
	
	cout << '\n' << "Name? ";
	cin >> currName;
	while(currName != "Quit")
	{
		bool notFound = true;
		for(int i = 0; i < size; i++)
		{
			if(name[i] == currName)
			{
				cout << currName << " is employee number " << id[i] << endl;
				notFound = false;
			}
				
		}	
		cout << '\n' << "Name? ";
		cin >> currName;
	}
}