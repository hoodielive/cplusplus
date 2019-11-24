#include <iostream>

int Max(int x, int y)
{
	return x > y ? x : y;
}

template<typename T>
T Maxer(T x, T y)
{
	return x > y ? x : y;
}

int main()
{
	auto num = Max(3, 8);
	auto num2 = Maxer(4.5f, 9.2f);
	std::cout << num2 << std::endl; 
	return 0; 
}
