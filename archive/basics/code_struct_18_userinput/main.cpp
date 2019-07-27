#include <iostream> 
#include <string>

int main() 
{
	int year = 0; 
	int age = 0; 
	std::string name = " "; 

	std::cout << "What year is your favorite? " ; 

	std::cin >> year; 

	std::cout << "How interesting, your favorite year is " << year << "!\n"; 

	std::cout  << "At waht age did you learn to ride a bike? " ; 

	std::cin >> age; 

	std::cout  << "How interesting you learned to ride at " << age << "!\n";

	std::cout << "What is your name?";

	std::cin >> name; 
	
	std::cout << "Hello " << name << "!\n"; 

	return 0;
}
