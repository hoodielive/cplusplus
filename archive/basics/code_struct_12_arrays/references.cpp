#include <iostream> 

using namespace std; 

int main()
{
	int x = 5; 
	int& r = x; // r is an alias to x 
	int &s = x; // alternative syntax 

	r = 10; 

	cout << r << endl; 
	cout << x << endl; 

	int* ptr = &x; // ptr assigned address to x
	cout << ptr[0] << endl; 
	
	int* ptr_null_ptr = 0; // null pointer 
	int& ref = *ptr_null_ptr; 
	ref = 10; // segmentation fault (invalid memory access)

	cout << ref << endl; 
	return 0; 
}
