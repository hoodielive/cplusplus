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

	return 0; 
}
