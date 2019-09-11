#include <iostream>

class Log
{
public:
    enum Level
    {
        _ERROR = 0, _WARN = 1, _INFO = 2
    };

private:
    Level m_LogLevel = _INFO;

public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }

    void Error(const char* message)
    {
        if (m_LogLevel >= _ERROR)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    void Warn(const char* message)
    {
        if (m_LogLevel >= _WARN)
            std::cout << "[WARN]: " << message << std::endl;
    }

    void Info(const char* message)
    {
        if (m_LogLevel >= _INFO)
            std::cout << "[INFO]: " << message << std::endl;
    }
};


int main() {
    Log logger{};
    logger.SetLevel(Log::_INFO);
    logger.Error("Something is gravely wrong.");
    logger.Warn("You should look into this.");
    logger.Info("No rush, just normal processes.");
}