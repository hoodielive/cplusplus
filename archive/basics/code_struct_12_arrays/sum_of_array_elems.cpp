#include <iostream> 

using namespace std; 

int main() 
{
	int A[] = { 2, 8, 10, 12, 16 }; 

	int sum = 0; 

	for (int i = 0; i < 5; i++)
	{
		cout << i << endl; 
		sum = sum + A[i];
	}
	return 0; 
}
