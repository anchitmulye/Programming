//LeetCode 283
//Move Zeroes    [EASY]

#pragma once

#include <iostream>
#include <vector>

class Solution
{
public:
    void MoveZeroes(std::vector<int64_t>& nums);
};

void Solution::MoveZeroes(std::vector<int64_t>& nums)
{
    int16_t moveCount = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[moveCount] = nums[i];
            moveCount += 1;
        }
    }
    for (int i = moveCount; i < nums.size(); i++)
        nums[i] = 0;
}