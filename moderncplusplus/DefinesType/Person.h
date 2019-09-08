#include <iostream>
#include <string>


class Person
{
    // constructor must always have name of Class!
    Person(std::string first, std::string last, int arbitrary);

    private: 
        std::string firstname; 
        std::string lastname; 
        int arbitrarynumber;  

    public:
        std::string getName();

};