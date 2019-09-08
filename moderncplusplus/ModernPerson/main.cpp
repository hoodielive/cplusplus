#include <iostream>
#include "ModernPerson.h"

int main()
{
    ModernPerson p1("Omo", "Ogun", 8);
    {
        ModernPerson p2;
    }

    std::cout << "after innermost block" << std::endl;
    std::string name = p1.getName();

    return 0;
}
