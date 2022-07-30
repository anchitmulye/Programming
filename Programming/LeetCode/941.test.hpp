#pragma once

#include <Tester.hpp>

#include "941.hpp"

int main()
{
    Solution solve;
    Tester mTest(3);

    //Test Case 01
    std::vector<int64_t> TC_01_input = { 2, 1 };
    bool TC_01_output = false;

    //Test Case 02
    std::vector<int64_t> TC_02_input = { 3, 5, 5 };
    bool TC_02_output = false;

    //Test Case 03
    std::vector<int64_t> TC_03_input = { 0, 3, 2, 1 };
    bool TC_03_output = true;

    mTest.CheckEquals(solve.ValidMountainArray(TC_01_input), TC_01_output);
    mTest.CheckEquals(solve.ValidMountainArray(TC_02_input), TC_02_output);
    mTest.CheckEquals(solve.ValidMountainArray(TC_03_input), TC_03_output);
}