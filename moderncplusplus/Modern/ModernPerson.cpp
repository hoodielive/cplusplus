//
// Created by wujud on 9/8/19.
//

#include "ModernPerson.h"

ModernPerson::ModernPerson(std::string first, std::string last, int arbitrary) :
    firstname(first), lastname(last), arbitrarynumber(arbitrary)
{

}

std::string ModernPerson::getName()
{
    return firstname + " " + lastname;
}
