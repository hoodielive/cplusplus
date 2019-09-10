#include <iostream>

class Log
{
public:
    void SetLevel(int Level)
    {

    }

    void Warn(const char* message)
    {

    }
};

int main()
{
    Log log;
    log.SetLevel(LogLevelWarning);
    log.Warn("Warning!!!");
    std::cin.get();
}