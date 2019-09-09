#pragma "once"
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
