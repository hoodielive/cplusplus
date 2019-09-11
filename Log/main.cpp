#include <iostream>

extern int s_Namer;
class Log
{
public:
    const int LogLevelWarn = 1;
    const int LogLevelError = 0;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel = LogLevelInfo;

public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }

    void Error(const char* message)
    {
        if (m_LogLevel >= LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    void Warn(const char* message)
    {
        if (m_LogLevel >= LogLevelWarn)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void Info(const char* message)
    {
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(log.LogLevelWarn);
    log.Warn("Warning.");
    log.Error("There is an error somewhere.");
    log.Info("A few moments later.");
    std::cout << s_Namer << std::endl;
    std::cin.get();
}