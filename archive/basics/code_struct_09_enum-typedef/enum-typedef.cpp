#include <iostream> 

using namespace std; 

// enum is used to define a set of constants under one name
enum day { mon=1, tue=8, wed, thu, fri, sat, sun }; 
enum dept { cs=1, it, ec, mech }; 

int main()
{

	day d; 
	d = tue; 
	
	dept dep = cs; 
	cout << dep << endl;
	cout << mon << endl; 
	cout << tue << endl; 
	cout << wed << endl; 
	cout << thu << endl; 
	cout << fri << endl; 
	cout << sat << endl; 
	cout << sun << endl; 
	return 0; 

}
