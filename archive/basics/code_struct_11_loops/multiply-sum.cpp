#include <iostream> 

int main()
{
	int n;
	std::cout << "Enter a number: " << std::endl; 
	std::cin >> n; 

	for (int i = 1; i <= n; i++) 
	{
		std::cout << "The sum is: " << n << "x" << i << std::endl; 
	}
	
	return 0; 
}
