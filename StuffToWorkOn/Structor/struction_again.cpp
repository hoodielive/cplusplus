#include <iostream> 

struct Struction 
{
	int i = 0; 
	std::string s; 
};

int main() 
{
	Struction parsley; 
	auto [u, v] = parsley;

	auto [u2, v2] {parsley};
}
