#include <iostream> 
#include <sstream>
#include <string>

int main()
{
    std::string stringLength; 
    float inches; 
    float yardage; 

    std::cout << "Enter the number of inches: " << std::endl; 
    std::getline(std::cin, stringLength); 
    std::stringstream(stringLength) >> inches; 
    std::cout << "You entered " << inches << " inches" << std::endl; 
    yardage = inches/36; 
    std::cout << "Yardage is: " << yardage << std::endl; 

    return 0; 

}