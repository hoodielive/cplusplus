#include <iostream> 

using namespace std; 

int main() 
{
	int A[] = { 2, 8, 10, 12, 16 }; 

	int sum = 0; 

	for (int x: A)
	{
		sum += x;
	}
	cout << "The sum of all elements is: " <<  sum << endl; 
	return 0; 
}
