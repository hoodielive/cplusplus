#include <iostream>
#include <string>
using namespace std; 

int main()
{
	string h = "Hello";
	string w ("World"); 
	cout << h << " " << w << endl; 
	
	// String Combining 
	string a = h + " " + w; 
	cout << a << endl; 

	h += " " + w; 
	cout << h << endl; 

	string b = "Hello " + w; 
	cout << b << endl; 

	char c* = "World";
	b = (string)c + c;
	b = "Hello" + (string)" World"; 
	cout << b << endl; 
}
