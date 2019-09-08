#pragma once
#ifndef MODERNPERSON_TWEETER_H
#define MODERNPERSON_TWEETER_H

#endif //MODERNPERSON_TWEETER_H
#include "ModernPerson.h"
#include <string>

class Tweeter :
        public ModernPerson
{
    private:
        std::string twitterhandle;
    public:
        Tweeter(std::string first, std::string last, int arbitrary, std::string handle);
        ~Tweeter();
};
