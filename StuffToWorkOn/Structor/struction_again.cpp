#include <iostream> 

struct Struction 
{
	int i = 0; 
	std::string s; 
};

int main() 
{
	Struction parsley; 
	parsley.i = 22; 

	std::cout << parsley.i << std::endl;
}
