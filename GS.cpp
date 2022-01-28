#include <iostream>
using namespace std;

int main( )
{
	int plant, total=0;
	
	//User Input
	cout << "How many plants are you purchasing? ";
	cin >> plant;


	//Check to see if plant is +
	if(plant > 0){
		
		//Equate the total here
		for(int i = 0; i < plant; i++){
			if(i < 5)
				total += 10;
			else if(i < 15)
				total += 8;
			else if(i < 25)
				total += 7;
			else
				total += 6;
			
			//!TEST!
			//cout << total;
		}
	//If plant is -
	}else
		cout << "That's impossible!";
	
	//Output
	cout << '\n' << "That will cost $" << total;

}