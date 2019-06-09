#include <iostream> 

using namespace std; 

int main() 
{
	int leap_year; 
	float perfection = 4.0;  

	cout << "Please enter the year in question: " << endl; 
	cin >> leap_year; 

	if (leap_year % 4 == 0 || leap_year % 100 == 0 || leap_year % 400 == 0)
	{
		cout << "You entered: " << leap_year << " and it is perfecly divisible by " << perfection << endl; 
	}
	else 
	{
		cout << "You entered: " << leap_year << " and it is NOT perfecly divisible by " << perfection << endl; 
	}
	return 0; 
}
