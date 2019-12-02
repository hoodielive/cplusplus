#include <iostream>

int what(int a, int b)
{
	int x = a, y = b, z = 0;

	while (x > 0)
	{
		z += y;
		x -= 1;
	}
	return z;
}

int main()
{
	std::cout << what(10, 2) << std::endl;
	return 0;
}
