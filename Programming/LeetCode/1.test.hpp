#pragma once

#include <iostream>

#include <Tester.hpp>

#include "1.hpp"

int main()
{
    Solution solve;
    Tester mTest(3);

    //Test Case 01
    std::vector<int64_t> TC_01_input = { 2, 7, 11, 15 };
    int64_t TC_01_input_1 = 9;
    std::vector<int64_t> TC_01_output = { 0, 1 };

    //Test Case 02
    std::vector<int64_t> TC_02_input = { 3, 2, 4 };
    int64_t TC_02_input_1 = 6;
    std::vector<int64_t> TC_02_output = { 1, 2 };

    //Test Case 03
    std::vector<int64_t> TC_03_input = { 3, 3 };
    int64_t TC_03_input_1 = 6;
    std::vector<int64_t> TC_03_output = { 0, 1 };

    mTest.CheckEquals(solve.TwoSum(TC_01_input, TC_01_input_1), TC_01_output);
    mTest.CheckEquals(solve.TwoSum(TC_02_input, TC_02_input_1), TC_02_output);
    mTest.CheckEquals(solve.TwoSum(TC_03_input, TC_03_input_1), TC_03_output);

}