//LeetCode 11
//Container With Most Water    [MEDIUM]

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    int64_t MaxArea(std::vector<int64_t>& height);
};

int64_t Solution::MaxArea(std::vector<int64_t>& height)
{
    int64_t maxArea = 0;
    int16_t low = 0;
    int64_t high = height.size() - 1;
    while (low < high)
    {
        maxArea = std::max(maxArea, (high - low) * std::min(height[low], height[high]));
        if(height[low] > height[high]) high -= 1;
        else low += 1;
    }
    return maxArea;
}