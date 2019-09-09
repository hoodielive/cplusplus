#include <iostream>


int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyandLog(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main()
{

	MultiplyandLog(3, 2);
	MultiplyandLog(30, 21);
	MultiplyandLog(10, 9);

	std::cin.get();
}
