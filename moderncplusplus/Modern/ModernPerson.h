#include <string>

#ifndef MODERN_PERSON_H
#define MODERN_PERSON_H

#endif //MODERN_PERSON_H

class ModernPerson {
private:
    std::string firstname{};
    std::string lastname{};
    int arbitrarynumber{};

public:
    ModernPerson(std::string first, std::string last, int arbitrarynumber);
    ModernPerson() = default;
    std::string getName();

};