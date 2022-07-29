#pragma once

#include <iostream>

#include <Tester.hpp>

#include "0.hpp"

int main()
{
    Solution solve;
    Tester mTest(3);

    //Test Case 01
    std::vector<int64_t> TC_01_input = { 1, 2, 3, 4, 5 };
    int64_t TC_01_output = 15;

    //Test Case 02
    std::vector<int64_t> TC_02_input = { 1, 12, 13, 4, 5 };
    int64_t TC_02_output = 35;

    //Test Case 03
    std::vector<int64_t> TC_03_input = { -1, 2, -3, 4, 5 };
    int64_t TC_03_output = 4;

    mTest.CheckEquals(solve.Addition(TC_01_input), TC_01_output);
    mTest.CheckEquals(solve.Addition(TC_02_input), TC_02_output);
    mTest.CheckEquals(solve.Addition(TC_03_input), TC_03_output);

}