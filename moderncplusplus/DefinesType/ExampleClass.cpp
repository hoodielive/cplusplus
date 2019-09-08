#include <iostream>

int main() 
{

    return 0; 
}

class Person // keyword class introduces the declaration
{ // scope
    private: 
        // member variables are generally private (available only to this class)
        std::string firstname; 
        std::string lastname; 
        int arbitrarynumber;  

    public: // functions are generally public
        std::string getName(); // you do not have to code them, just declare them

}; // and don't forget ";"