#include <iostream> 

using namespace std; 

int main() 
{
	int age; 
	cout << "Please enter your age: " << endl; 
	cin >> age; 

	if ( ! ( age >=12 && age <=50 ) )
	{
		cout << "I am sorry, but you are either too old or too young for entry. " << endl;
	}
	else 
	{

		cout << "Access granted." << endl; 
	}

	return 0; 
}
