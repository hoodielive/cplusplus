#include "ModernPerson.h"
#include "Tweeter.h"
#include <iostream>

Tweeter::Tweeter(std::string first, std::string last, int arbitrary, std::string handle) :
        ModernPerson(first, last, arbitrary),
        twitterhandle(handle)
{
    std::cout << "constructing tweeter" << twitterhandle << std::endl;
}

Tweeter::~Tweeter() {
    std::cout << "Destructing tweeter..." << twitterhandle << std::endl;
}


