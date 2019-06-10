#include <iostream> 

int main() 
{
	int n; 
	int sum; 

	std::cout << "Enter a number: " << std::endl; 
	std::cin >> n; 

	for (int i = 1; i <= n; i++) 
	{
		sum += i; 
	}
	std::cout << "This is the sum: " << sum << std::endl;
	return 0; 
}
