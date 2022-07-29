#pragma once

#include <experimental/source_location>
#include <string_view>

class Logger
{
public:
    enum Level
    {
        LogLevelFatal = 0,
        LogLevelError = 1,
        LogLevelWarn = 2,
        LogLevelInfo = 3,
        LogLevelDebug = 4,
        LogLevelTrace = 5
    };
private:
    int m_LogLevel = Level::LogLevelTrace;
public:
    void SetLevel(Level level);
    void Fatal(const std::string_view message, const std::experimental::source_location location = std::experimental::source_location::current());
    void Error(const std::string_view message, const std::experimental::source_location location = std::experimental::source_location::current());
    void Warn(const std::string_view message, const std::experimental::source_location location = std::experimental::source_location::current());
    void Info(const std::string_view message, const std::experimental::source_location location = std::experimental::source_location::current());
    void Debug(const std::string_view message, const std::experimental::source_location location = std::experimental::source_location::current());
    void Trace(const std::string_view message, const std::experimental::source_location location = std::experimental::source_location::current());
    std::string LogFileParser(std::string path);
};