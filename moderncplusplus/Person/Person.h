#include <string>

class Person
{
    private: 
        std::string firstname; 
        std::string lastname; 
        int arbitrarynumber;  

    public:
        // constructor must always have name of Class!
        Person(std::string first, std::string last, int arbitrary);
        Person()=default;
        std::string getName();

};