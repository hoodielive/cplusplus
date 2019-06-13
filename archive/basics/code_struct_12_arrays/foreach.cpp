#include <iostream> 

int main() 
{
	int B[6]={2,3,4};
	int C[]={2,3,4,5,6,7,8,9}; 

	for (int x: B)
	{
		std::cout << "This element is: " << x << std::endl; 
	}

	for (int c: C)
	{
		std::cout << "This element is: " << c << std::endl; 
	}
	return 0;
}
