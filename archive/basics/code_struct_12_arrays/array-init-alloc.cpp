#include <iostream>
#include <string>

int main()
{
	
	int myArray[3]; // integer array with 3 elements

	// Assignment 
	myArray[0] = 1; 
	myArray[1] = 2; 
	myArray[2] = 3; 
	
	int anotherArray[] = { 1, 2, 3 }; 

	int multidimensional_array[2][2] = { { 0, 1 }, { 2, 3 } }; 
	multidimensional_array[2][2] = 5; 	
	std::cout << multidimensional_array[2][2] << std::endl; 
//	std::cout << anotherArray << std::endl; 
//	std::cout << myArray << std::endl; 
	return 0; 
}
