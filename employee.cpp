#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main (){
	
	int size = 0;
	string firstName[1000];
	string lastName[1000];
	int id[1000];
	
	
	ifstream fin;
	string Infile, Outfile;
	
	cout << "Input file: ";
	cin >> Infile;
	
	//open file
	fin.open(Infile);
	
	if( fin.is_open() ) {
		
		//reads file data
		while( fin >> firstName[size] ){
			fin >> lastName[size];
			fin >> id[size];
			size++;
		}
			
	cout << "Output file: ";
	cin >> Outfile;
	
	//Output File
	ofstream fout;
	string sortedEmployee = Outfile;
	fout.open(Outfile);
	
	for(int i = 0; i < size; i++)
		//make an array for sort to read sort[i] < sort[i+1]
		if(id[i] < id[i+1])
			fout << id[i] << " "+firstName[i]+" "+lastName[i] << endl;
		else if (id[i] > id[i+1]){
			id[i] = id[i+1] << " "+firstName[i+1]+" "+lastName[i+1];
			id[i+1] = id[i-1] << " "+fistName[i-1]+" "+lastName[i-1];
		}
		fout << id[i] << " "+firstName[i]+" "+lastName[i];
	
	fout.close();
	
	}
	else{
		cout << "File failed to open." ;
	}
}