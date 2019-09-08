#include <string>
#ifndef MODERNPERSON_MODERNPERSON_H
#define MODERNPERSON_MODERNPERSON_H

#endif //MODERNPERSON_MODERNPERSON_H

class ModernPerson
{
    private:
        std::string firstname{};
        std::string lastname{};
        int arbitrarynumber{};

    public:
        ModernPerson(std::string first, std::string last, int arbitrarynumber);
        ModernPerson()=default;
        ~ModernPerson();
        std::string getName();

};
