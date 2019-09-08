#include "ModernPerson.h"
#include <iostream>

int main()
{
    ModernPerson p1("Omo", "Ogun", 81685);
    ModernPerson p2;

    std::string name = p1.getName();

    return 0;
}