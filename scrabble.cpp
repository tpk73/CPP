#include <iostream>
using namespace std;

int main( )
{
	string word;
	int score = 0;

	//Prompt
	cout << "This program calculates the Scrabble score for a word." << endl;
	cout << endl;
	
	//User Input
	cout << "Word: ";
	cin >> word;
	
	for(int i = 0; i < word.size()+1; i++){
		switch(toupper(word[i]))
		{
		//Values of Letters
		case 'A': score+=1; break;
		case 'B': score+=3; break;
		case 'C': score+=3; break;
		case 'D': score+=2; break;
		case 'E': score+=1; break;
		case 'F': score+=4; break;
		case 'G': score+=2; break;
		case 'H': score+=4; break;
		case 'I': score+=1; break;
		case 'J': score+=8; break;
		case 'K': score+=5; break;
		case 'L': score+=1; break;
		case 'M': score+=3; break;
		case 'N': score+=1; break;
		case 'O': score+=1; break;
		case 'P': score+=3; break;
		case 'Q': score+=10; break;
		case 'R': score+=1; break;
		case 'S': score+=1; break;
		case 'T': score+=1; break;
		case 'U': score+=1; break;
		case 'V': score+=4; break;
		case 'W': score+=4; break;
		case 'X': score+=8; break;
		case 'Y': score+=4; break;
		case 'Z': score+=10; break;	
		}
	}
		
	//Output
	cout << "The basic score for '" << word << "' is " << score;
}