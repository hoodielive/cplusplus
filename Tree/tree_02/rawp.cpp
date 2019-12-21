#include <iostream>
#include <cstddef>

class Cat
{
	public:
		Cat() {
			std::cout << "Cat()" << std::endl;
		}
		~Cat() {
			std::cout << "~Cat()"  << std::endl;
		}
}

int main() {

	return 0;
}
