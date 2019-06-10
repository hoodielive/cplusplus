#include <iostream> 

int main()
{
	int n, r, rev=0; 
	std::cout << "Enter a number: "; 
	std::cin >> n; 

	while (n != 0)
	{
		r = n % 10; 
		n /= 10; 
		rev = rev * 10 + r;
	}

	std::cout << rev << std::endl; 
	return 0; 
}
