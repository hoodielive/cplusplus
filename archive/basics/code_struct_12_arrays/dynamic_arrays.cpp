#include <iostream> 

using namespace std; 

int main()
{
	int* p = new int[3]; 
	*(p + 1) = 10; // p[1] = 10; 
	cout << p[1] << endl;
	
	int length = sizeof(p) / sizeof(int); 
	cout << length <<endl; 

	int size = 3; 
	int* q = new int[size]; // dynamically allocated array 

	cout << q[1] << endl; 
	delete[] p; // release allocated array
	cout << p[1] << endl;

	return 0; 
}
