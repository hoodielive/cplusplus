#include <iostream> 
#include <sstream>
#include <string>

int main()
{
    std::string stringLength; 
    float inches; 
    float yardage; 

    std::cout << "Enter the number of inches: "; 
    std::getline(std::cin, stringLength); 
    std::stringsstream(stringLength) >> inches; 
    std::cout << "You entered " << inches << "inches"; 
    yardage = inches/36; 
    std::cout << "Yardage is: " << yardage; 

    return 0; 

}