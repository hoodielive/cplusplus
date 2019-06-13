#include <iostream> 

int main() 
{
	int B[6]={2,3,4};
	for (int x: B)
	{
		std::cout << "This element is: " << x << std::endl; 
	}
	return 0;
}
