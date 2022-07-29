//LeetCode 1 
//Two Sum    [EASY]

#pragma once

#include <iostream>
#include <vector>
#include <unordered_map>

class Solution
{
public:
    std::vector<int64_t> TwoSum(std::vector<int64_t>& nums, int64_t target);
};

std::vector<int64_t> Solution::TwoSum(std::vector<int64_t>& nums, int64_t target)
{
    std::unordered_map<int8_t, int64_t> map;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.find(nums[i]) != map.end())
            return { map.at(nums[i]), i };
        map[(target - nums[i])] = i;
    }
    return { -1, -1 };
}