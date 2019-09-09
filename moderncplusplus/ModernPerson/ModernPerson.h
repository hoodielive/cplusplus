#include <string>
#pragma "once"

class ModernPerson
{
    private:
        std::string firstname;
        std::string lastname;
        int arbitrarynumber;

    public:
        ModernPerson(std::string first, std::string last, int arbitrarynumber);
        ModernPerson() = default;
        ~ModernPerson();
        std::string getName();
};

