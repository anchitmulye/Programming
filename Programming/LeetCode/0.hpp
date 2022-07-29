//0
//This is a basic problem to check if the setup is working as expected

#pragma once

#include <iostream>
#include <vector>

class Solution
{
public:
    int64_t Addition(std::vector<int64_t>& nums);
};

int64_t Solution::Addition(std::vector<int64_t>& nums)
{
    int64_t total = 0;
    for (const auto& num : nums)
        total += num;
    return total;
}