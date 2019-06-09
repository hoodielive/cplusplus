#include <iostream> 

using namespace std; 

int main() 

{ int total; int discount; 
	int properswitch; 

	// get bill total from customer
	cout << "Enter the total of your order: " << endl; 
	cin >> total; 

	// take input and do math
	if (total < 100)
	{
		properswitch = 1; 
		cout << "Your total is " << total << endl; 
	}
	else if (total >= 100) 
	{
		discount = total * 0.10; 
		total -= discount; 
		properswitch = 2; 
		cout << "Your total is " << total << endl;
	}
	else if (total >= 500) 
	{
		discount = total * 0.20; 
		total -= discount; 
		properswitch = 3;
		cout << "Your total is " << total << endl; 
	}
	else
	{
		cout << endl; 
	}

	switch(properswitch) 
	{
		case 1: cout << total; 
			break; 
		case 2: cout << total; 
			break;
		case 3: cout << total; 
			break; 
		default: cout << "You suck at playing this game!" << endl; 
			 break; 
	}
	cout << endl; 
	return 0; 

}
