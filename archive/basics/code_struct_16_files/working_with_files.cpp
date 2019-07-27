#include <iostream> 
#include <fstream> 
#include <string> 

using namespace std; 

int main() 
{
	string line; 
	ofstream myFileI ("input.txt", ios::app);

	if (myFileI.is_open()) 
	{
		myFileI << "\nI am adding another line.\n"; 
		myFileI << "\nI am adding yet another line.\n"; 
		myFileI.close(); 
	}

	else cout << "Unable to open for writing";
	
	ifstream myFile0("input.txt");

	if (myFile0.is_open()) 
	{
		while ( getline (myFile0, line) ) 
		{
			cout << line  << '\n'; 
		}

		myFile0.close();
	}

	else cout << "Unable to open file for reading"; 
	return 0; 

}
