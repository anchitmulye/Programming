//LeetCode 941
//Valid Mountain Array    [EASY]

#pragma once

#include <iostream>
#include <vector>

class Solution
{
public:
    bool ValidMountainArray(std::vector<int64_t>& arr);
};

bool Solution::ValidMountainArray(std::vector<int64_t>& arr)
{
    if (arr.size() < 3) return false;
    int16_t low = 0;
    int16_t high = arr.size() - 1;
    while (high - low > 1)
    {
        if (arr[low] >= arr[low + 1]) return false;
        if (arr[high] >= arr[high - 1]) return false;
        low += 1;
        high -= 1;
    }
    return true;
}