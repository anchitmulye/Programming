#pragma once

#include <iostream>

#include <Tester.hpp>

#include "881.hpp"

int main()
{
    Solution solve;
    Tester mTest(3);

    //Test Case 01
    std::vector<int64_t> TC_01_input = { 1, 2 };
    int64_t TC_01_input_1 = 3;
    int64_t TC_01_output = 1;

    //Test Case 02
    std::vector<int64_t> TC_02_input = { 3, 2, 2, 1 };
    int64_t TC_02_input_1 = 3;
    int64_t TC_02_output = 3;

    //Test Case 03
    std::vector<int64_t> TC_03_input = { 3, 5, 3, 4 };
    int64_t TC_03_input_1 = 5;
    int64_t TC_03_output = 4;

    mTest.CheckEquals(solve.NumRescueBoats(TC_01_input, TC_01_input_1), TC_01_output);
    mTest.CheckEquals(solve.NumRescueBoats(TC_02_input, TC_02_input_1), TC_02_output);
    mTest.CheckEquals(solve.NumRescueBoats(TC_03_input, TC_03_input_1), TC_03_output);
}