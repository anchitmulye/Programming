#pragma once

#include "Logger.hpp"

#include <string>
#include <iostream>
#include <functional>

class Tester
{
private:
    uint16_t m_TotalTest;
    uint16_t m_PassedTest;
    uint16_t m_FailedTest;
    uint16_t m_TestCounter;
    Logger mTesterLogger;
public:
    Tester(int totalTest);
    ~Tester();
    uint16_t GetTotalTest();
    template<typename T>
    void CheckEquals(T actual, T expected);
    void PrintTestResult();
};

template<typename T>
void Tester::CheckEquals(T actual, T expected)
{
    if (m_TestCounter >= m_TotalTest)
    {
        mTesterLogger.Info("Given more tests than the max limit");
    }
    else 
    {
        m_TestCounter += 1;
        if (actual == expected)
        {    
            m_PassedTest += 1;
            mTesterLogger.Info("Test " + std::to_string(m_TestCounter) + " Passed");
        }
        else mTesterLogger.Info("Test " + std::to_string(m_TestCounter) + " Failed");
    }  
}
