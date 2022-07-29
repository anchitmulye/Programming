#pragma once

#include <iostream>

#include <Tester.hpp>

#include "283.hpp"

int main()
{
    Solution solve;
    Tester mTest(3);

    //Test Case 01
    std::vector<int64_t> TC_01_input = { 0, 1, 0, 3, 12 };
    std::vector<int64_t> TC_01_output = { 1, 3, 12, 0, 0 };

    //Test Case 02
    std::vector<int64_t> TC_02_input = { 0 };
    std::vector<int64_t> TC_02_output = { 0 };

    //Solution
    solve.MoveZeroes(TC_01_input);
    solve.MoveZeroes(TC_02_input);

    mTest.CheckEquals(TC_01_input, TC_01_output);
    mTest.CheckEquals(TC_02_input, TC_02_output);
}