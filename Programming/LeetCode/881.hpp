//LeetCode 881
//Boats To Save People    [MEDIUM]

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    int64_t NumRescueBoats(std::vector<int64_t>& people, int64_t limit);
};

int64_t Solution::NumRescueBoats(std::vector<int64_t>& people, int64_t limit)
{
    std::sort(people.begin(), people.end());
    int16_t low = 0;
    int16_t high = people.size() - 1;
    int64_t numBoats = 0;
    while (low <= high)
    {
        if (people[low] + people[high] <= limit)
            low += 1;
        numBoats += 1;
        high -= 1;
    }
    return numBoats;
}