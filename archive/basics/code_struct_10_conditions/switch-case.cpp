#include <iostream> 

using namespace std; 

int main()
{
	int day; 
	cout << "Enter the day number: " << endl; 
	cin >> day; 

	switch(day)
	{
		case 1: 
			cout << "Mon"; 
			break; 
		case 2: 
			cout << "Tue"; 
			break; 

		default: 
			cout << "You aren't playing fair!" ;
			break; 
	}

	return 0;
}
