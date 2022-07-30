#pragma once

#include <Tester.hpp>

#include "11.hpp"

int main()
{
    Solution solve;
    Tester mTest(3);

    //Test Case 01
    std::vector<int64_t> TC_01_input = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
    int64_t TC_01_output = 49;

    //Test Case 02
    std::vector<int64_t> TC_02_input = { 1, 1 };
    int64_t TC_02_output = 1;

    mTest.CheckEquals(solve.MaxArea(TC_01_input), TC_01_output);
    mTest.CheckEquals(solve.MaxArea(TC_02_input), TC_02_output);
}