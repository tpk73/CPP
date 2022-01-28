#include <iostream>
using namespace std;

int main( )
{
	int num;
	
	cout << "Enter number: ";
	cin >> num;
	
	int curr = num;
	
	cout << num;
	
	//count up
	while(curr < (2 * num)){
		curr ++;
		cout << ", " << curr;
	}
	
	//count down
	while(curr > num){
		curr--;
		cout << ", " << curr;
	}
}