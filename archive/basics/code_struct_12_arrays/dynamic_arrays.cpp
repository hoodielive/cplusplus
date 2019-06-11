#include <iostream> 

using namespace std; 

int main()
{
	int* p = new int[3]; 
	*(p + 1) = 10; // p[1] = 10; 
	cout << p[1] << endl;
	
	int length = sizeof(p) / sizeof(int); 
	cout << length <<endl; 
	return 0; 
}
