#include <iostream>
#include <array>
#include <cstdint>

using namespace std;

int main()
{

	/* The constexpr variable guarantees that the value can be evaluated
	   at compile time. */

	constexpr uint32_t ARRAY_SIZE{ 5 };
	std::array<uint32_t, ARRAY_SIZE> myArray{ 1, 2, 3, 4, 5 };

	for (auto&& number : myArray)
	{
		std::cout << number << std::endl;
	}

	return 0;
}
