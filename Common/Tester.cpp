#include "Tester.hpp"

Tester::Tester(int totalTest)
    : m_TotalTest(totalTest),
      m_FailedTest(0),
      m_PassedTest(0),
      m_TestCounter(0)
{
    mTesterLogger.SetLevel(Logger::Level::LogLevelInfo);
}

Tester::~Tester()
{
    PrintTestResult();
}

uint16_t Tester::GetTotalTest()
{
    return m_TotalTest;
}

void Tester::PrintTestResult()
{
    m_FailedTest = m_TestCounter - m_PassedTest;
    mTesterLogger.Info("Printing the test results");
    mTesterLogger.Info("Ran: " + std::to_string(m_TestCounter));
    mTesterLogger.Info("Passed: " + std::to_string(m_PassedTest));
    mTesterLogger.Info("Failed: " + std::to_string(m_FailedTest));
}