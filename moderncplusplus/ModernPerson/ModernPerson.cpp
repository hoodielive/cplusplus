#pragma "once"
#include "ModernPerson.h"
#include <iostream>

ModernPerson::ModernPerson(std::string first, std::string last, int arbitrary) :
    firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
    std::cout << "constructing " << getName() << std::endl;
}

// FIXME [da fuk are you erroring over lol?]
//ModernPerson::ModernPerson() noexcept : arbitrarynumber(0)
//{
   //std::cout << "constructing " << firstname << " " << lastname << std::endl;
//}


ModernPerson::~ModernPerson()
{
    std::cout << "destructing " << firstname << " " << lastname << std::endl;
}

std::string ModernPerson::getName()
{
    return firstname + " " + lastname;
}
