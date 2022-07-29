#include "Logger.hpp"

#include <iostream>

void Logger::SetLevel(Level level)
{
    m_LogLevel = level;
}

void Logger::Fatal(const std::string_view message, const std::experimental::source_location location)
{
    if (m_LogLevel >= Level::LogLevelFatal)
    {
        std::cout << "[--FATAL--]" << '\n'
                    << "file: " 
                    << location.file_name() << "("
                    << location.line() << ":"
                    << location.column() << ") "
                    << location.function_name() << ":"
                    << message << '\n';
    }
}

void Logger::Error(const std::string_view message, const std::experimental::source_location location)
{
    if (m_LogLevel >= Level::LogLevelError)
    {
        std::cout << "[--ERROR--]" << '\n'
                    << "file: " 
                    << location.file_name() << "("
                    << location.line() << ":"
                    << location.column() << ") "
                    << location.function_name() << ":"
                    << message << '\n';
    }
}

void Logger::Warn(const std::string_view message, const std::experimental::source_location location)
{
    if (m_LogLevel >= Level::LogLevelWarn)
    {
        std::cout << "[--WARN--]" << '\n'
                    << "file: " 
                    << location.file_name() << "("
                    << location.line() << ":"
                    << location.column() << ") "
                    << location.function_name() << ":"
                    << message << '\n';
    }
}

void Logger::Info(const std::string_view message, const std::experimental::source_location location)
{
    if (m_LogLevel >= Level::LogLevelInfo)
    {
        std::cout << "[--INFO--] "
                    << "("
                    << location.line() << ":"
                    << location.column() << ") " 
                    << message << '\n';
    }
}

void Logger::Debug(const std::string_view message, const std::experimental::source_location location)
{
    if (m_LogLevel >= Level::LogLevelDebug)
    {
        std::cout << "[--DEBUG--] "
                    << location.function_name() << "-"
                    << "("
                    << location.line() << ":"
                    << location.column() << ") " 
                    << message << '\n';
    }
}

void Logger::Trace(const std::string_view message, const std::experimental::source_location location)
{
    if (m_LogLevel >= Level::LogLevelTrace)
    {
        std::cout << "[--TRACE--] "
                    << "File: " 
                    << location.file_name() << "("
                    << location.line() << ":"
                    << location.column() << ") "
                    << location.function_name() << ":"
                    << message << '\n';
    }
}