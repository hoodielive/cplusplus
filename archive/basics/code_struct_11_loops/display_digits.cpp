#include <iostream> 

int main()
{
	int n, r, sum=0; 
	std::cout << "Enter a number: "; 
	std::cin >> n; 

	while (n != 0)
	{
		r = n % 10; 
		n /= 10; 
		sum = sum * 10 + r;
	}

	std::cout << sum << std::endl; 
	return 0; 
}
