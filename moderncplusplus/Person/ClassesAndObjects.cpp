#include "Person.h"

int main() 
{
    // Objects are instances of classes, has its own member variables and functions operate on member vars
    Person p1("Omo", "Ogun", 977); 
//    Person p2; 
    std::string name = p1.getName(); 

    return 0; 
}