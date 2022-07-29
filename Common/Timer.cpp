#include "Timer.hpp"
#include "Logger.hpp"

#include <string>

Timer::Timer()
{
    mTimerLogger.SetLevel(Logger::Level::LogLevelInfo);
    m_StartTimepoint = std::chrono::high_resolution_clock::now();
}

Timer::~Timer()
{
    Timer::TimerStop();
}

void Timer::TimerStop()
{
    auto endTimepoint = std::chrono::high_resolution_clock::now();

    auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimepoint).time_since_epoch().count();
    auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimepoint).time_since_epoch().count();

    auto duration = end - start;
    double ms = duration * 0.001;

    mTimerLogger.Info("Time: " + std::to_string(duration) + "μs (" + std::to_string(ms) + "ms)");
}