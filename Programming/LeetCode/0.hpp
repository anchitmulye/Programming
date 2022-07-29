#pragma once

#include <iostream>
#include <vector>

class Solution
{
private:

public:
    int64_t Addition(std::vector<int64_t> nums);
};

int64_t Solution::Addition(std::vector<int64_t> nums)
{
    int64_t total = 0;
    for (const auto& num : nums)
        total += num;
    return total;
}