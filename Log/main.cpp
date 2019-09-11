#include <iostream>

extern int s_Namer;
class Log
{
public:
    enum Level
    {
        _Error = 0, _Warn, _Info
    };

private:
    Level m_LogLevel = _Info;

public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }

    void Error(const char* message)
    {
        if (m_LogLevel >= _Error)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    void Warn(const char* message)
    {
        if (m_LogLevel >= _Warn)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void Info(const char* message)
    {
        if (m_LogLevel >= _Info)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(Log::_Error);
    log.Warn("Warning.");
    log.Error("There is an error somewhere.");
    log.Info("A few moments later.");
    std::cout << s_Namer << std::endl;
    std::cin.get();
}