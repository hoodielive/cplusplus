#include <iostream>
#include "Log.cpp"

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

	int x = 5;

	bool comparisonResult = x == 5;

	if (comparisonResult)
	{
		Log("Hello, World");
	}

	MultiplyandLog(3, 2);
	MultiplyandLog(30, 21);
	MultiplyandLog(10, 9);

	std::cin.get();
}
