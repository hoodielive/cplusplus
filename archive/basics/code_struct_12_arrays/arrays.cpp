#include <iostream> 
#include <string>

using namespace std; 

int main() 

{
 	int A[5] = {2, 5, 8, 10, 16}; 
	string B[3] = { "This", "is", "string" };
	int C[]={2,4,6,8,10,12}; 

	for ( int i = 0; i < 3; i++)
	{
		cout << B[i] << endl; 
	}

//	for (int x : C)
//		cout << x << endl; 
	return 0; 
}
