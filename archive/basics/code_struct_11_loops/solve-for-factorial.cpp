#include <iostream>

/** 5! = 1 * 2 * 3 * 4 * 5 */ 

int main()
{
	int n, fact=1;
	std::cout << "Please enter a number: " << std::endl; 
	std::cin >> n; 

	for (int i = 1; i <= n; i++)
	{
		fact *= i; 
	}

	std::cout << "Factiorial is: " << fact << std::endl;
	return 0; 
}
