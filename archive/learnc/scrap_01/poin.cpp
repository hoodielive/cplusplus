#include <iostream>

int main() 
{
	int v1 = 0; 

	int *p1; 
	std::cout << p1 << std::endl;

	p1 = &v1; 

	std::cout << p1 << std::endl;

	*p1 = 42; 
	std::cout << v1 << " and point is " << *p1 << std::endl;

}
