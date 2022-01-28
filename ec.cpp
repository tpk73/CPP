#include <iostream>
using namespace std;

int main( )
{
	
	char letter;
	int key;
	
	cout << "This program encrypts a single letter." << endl << endl;
	
	cout << "Letter: ";
	cin >> letter;
	
	cout << "Key: ";
	cin >> key;
	
	cout << endl;
	
	if(letter >= 97 && letter <= 122){
		letter -= 32;
	}
	if(key >= 0){
			
			while(key > 0){
				letter +=1;
					
				if(letter == 91){
					letter = 65;
				}
				key--;
			}
	}
	else
	{
		while(key < 0){
				letter--;
				if(letter == 64){
					letter = 90;
				}
				key++;
		}
	}
	cout << "Result: " << letter; 
}


