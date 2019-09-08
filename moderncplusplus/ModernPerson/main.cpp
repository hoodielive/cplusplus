#include <iostream>
#include "ModernPerson.h"
#include "Tweeter.h"

int main()
{
    ModernPerson p1("Omo", "Ogun", 8);
    {
        ModernPerson p2;
        Tweeter t1("Someone", "Else", 456, "@whoever");
        std::string name2 = t1.getName();
    }

    std::cout << "after innermost block" << std::endl;
    std::string name = p1.getName();

    return 0;
}
