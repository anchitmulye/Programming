/*
Leetcode
881: Boats To Save People
[MEDIUM]
2 pointers
*/

/*
You are given an array people where people[i] is the weight of the ith person, and an infinite number of boats where each boat can carry a maximum weight of limit. Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most limit.
Return the minimum number of boats to carry every given person.

Example 1:

Input: people = [1,2], limit = 3
Output: 1
Explanation: 1 boat (1, 2)

Example 2:

Input: people = [3,2,2,1], limit = 3
Output: 3
Explanation: 3 boats (1, 2), (2) and (3)

Example 3:

Input: people = [3,5,3,4], limit = 5
Output: 4
Explanation: 4 boats (3), (3), (4), (5)

*/

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
    int64_t low = 0;
    int64_t high = people.size() - 1;
    int64_t numBoats = 0;

    while (low <= high)
    {
        if (low == high)
        {
            numBoats += 1;
            break;
        }
        if (people[low] + people[high] <= limit)
            low += 1;
        high -= 1;
        numBoats += 1;
    }
    return numBoats;
}

int main()
{
    Solution solution;

    // Example 1
    std::vector<int64_t> input_0 = { 1, 2 };
    int64_t limit_0 = 3;

    // Example 2:
    std::vector<int64_t> input_1 = { 3, 2, 2, 1 };
    int64_t limit_1 = 3;

    // Example 3:
    std::vector<int64_t> input_2 = { 3, 5, 3, 4 };
    int64_t limit_2 = 5;

    auto ans = solution.NumRescueBoats(input_1, limit_1);

    std::cout << ans << "\n";
}