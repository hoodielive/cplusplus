#include <iostream> 

using namespace std; 

int main()

{
	int x; 
	x = 1; 

	switch(x) 
	{
		default: cout << "Invalid entry."; 
			break; 
	        case 1: 
			 cout << "One"; 
			 break; 
	 	case 2: 
			cout << "Two"; 
			break;
		case 3: 
			cout << "Three"; 
			break; 
	}
	cout << endl; 
	return 0; 
}
