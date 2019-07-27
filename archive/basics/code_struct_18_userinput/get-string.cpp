#include <iostream> 
#include <string> 

int main() 
{
	std::string userName; 
	std::cout << "What is your name homie?" << "\n"; 
	getline(std::cin, userName); 
	std::cout << "Tis a pleasure to meet you " << userName << "\n"; 
	return 0; 
}
