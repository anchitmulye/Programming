#pragma once

#include "Logger.hpp"

#include <chrono>

class Timer
{
private:
    Logger mTimerLogger;
    std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTimepoint;
public:
    Timer();
    ~Timer();
private:
    void TimerStop();
};