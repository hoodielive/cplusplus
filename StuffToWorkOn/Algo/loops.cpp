#include <iostream>

int what()
{
	int x = 1;
	for ( int x; x < 10; ++x ) {
		std::cout << x << std::endl;
	}
	return 0;
};

int main()
{
	std::cout << what() << std::endl;
}
