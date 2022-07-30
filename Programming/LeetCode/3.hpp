//LeetCode 3
//Longest Substring Without Repeating Characters   [MEDIUM]

#pragma once

#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution
{
public:
    int64_t LengthOfLongestSubstring(std::string& string);
};

int64_t Solution::LengthOfLongestSubstring(std::string& string)
{
    std::unordered_map<char, int8_t> map;
    int64_t low = 0;
    int64_t high = 0;
    int64_t ans = 0;
    while (high < string.size() && low < string.size())
    {
        char element = string[high];
        if (map.find(element) != map.end())
            low = std::max((int)low, map.at(element) + 1);
        map[element] = high;
        ans = std::max(ans, high - low + 1);
        high += 1;
    }
    return ans;
}