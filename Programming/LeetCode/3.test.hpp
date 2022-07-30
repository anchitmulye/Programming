#pragma once

#include <Tester.hpp>

#include "3.hpp"

int main()
{
    Solution solve;
    Tester mTest(3);

    //Test Case 01
    std::string TC_01_input = "abcabcbb";
    int64_t TC_01_output = 3;

    //Test Case 02
    std::string TC_02_input = "bbbbb";
    int64_t TC_02_output = 1;

    //Test Case 03
    std::string TC_03_input = "pwwkew";
    int64_t TC_03_output = 3;

    mTest.CheckEquals(solve.LengthOfLongestSubstring(TC_01_input), TC_01_output);
    mTest.CheckEquals(solve.LengthOfLongestSubstring(TC_02_input), TC_02_output);
    mTest.CheckEquals(solve.LengthOfLongestSubstring(TC_03_input), TC_03_output);
}