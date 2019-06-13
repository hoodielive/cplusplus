#include <iostream> 

using namespace std; 

int main() 
{
	int A[] = { 2, 8, 10, 12, 16 }; 
	int max = INT8_MIN; 

	for (auto x: A)
	{
		if (x > max)
		{
			max = x; 
		}
	}
	cout << "The max of all elements is: " <<  max << endl; 
	return 0; 
}
