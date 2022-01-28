#include <iostream>
using namespace std;

int main( )
{
	int days, month, year;
	
	//User Input
	cout << "Month: ";
	cin >> month;
	
	cout << "Year: ";
	cin >> year;

	
	//Leap Year/Normal Feburary
	if(month == 2){
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
			days = 29;
			cout << '\n' << month << '/' << year << " has " << days << " days." << endl;
		}else if(month == 2){
		days = 28;
		cout << '\n' << month << '/' << year << " has " << days << " days." << endl;
	}
	//31 day months
	}else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
		days = 31;
		cout << '\n' << month << '/' << year << " has " << days << " days." << endl;
	//30 day months
	}else if(month == 4 || month == 6 || month == 9 || month == 11){
		days = 30;
		cout << '\n' << month << '/' << year << " has " << days << " days." << endl;
	}
}