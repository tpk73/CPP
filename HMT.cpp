#include <iostream>
using namespace std;

int main( )
{
	int seconds, hr = 0, min = 0, sec = 0;
	int hrr, minr;
	
	cout << "This program converts seconds into hours, minutes and seconds." << '\n';
	
	//User Input
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	
	
	hr = seconds / 3600;
	seconds = seconds % 3600;
	min = seconds / 60;
	seconds = seconds % 60;
	sec = seconds;
	
	cout << "This corresponds to "<< hr << " hours, "<< min << " minutes, and " << sec << " seconds.";
}