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

void Loops()
{
	for (int i = 0; i < 5; i++)
	{
		Log("Howdy Looper");
	}

	int i = 0;
	bool condition = true;

	while (i < 5)
	{
		Log("Howdy!");
		i++;
	}
}


int main()
{

	int x = 5;

	bool comparisonResult = x == 5;

	if (comparisonResult)
	{
		Log("Hello, World");
	}
	else
	{
		Log("Thats okay.. ignore me then!");
	}

	Loops();
	MultiplyandLog(3, 2);
	MultiplyandLog(30, 21);
	MultiplyandLog(10, 9);

	std::cin.get();
}
