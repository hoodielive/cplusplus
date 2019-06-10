#include <iostream> 

int main()

{

	int n;
	std::cout << "Enter a number: " << std::endl; 
	std::cin >> n; 

	for (int i = 1; i <= n; i++)
	{
		if ( n % i == 0) 
		  std::cout << "The factor is: " << i << std::endl; 
	}

	return 0; 
}
