/*
Leetcode
1: Two Sum
[EASY]
Array
*/

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order. 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

*/

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
    std::unordered_map<int64_t, int64_t> map;
    for (size_t i = 0; i < nums.size(); i++)
    {
        if(map.find(target - nums[i]) != map.end())
            return { map.at(target - nums[i]), static_cast<int64_t>(i) };
        map[nums[i]] = i;
    }
    return { -1, -1 };
}

int main()
{
    Solution solution;

    // Example 1
    std::vector<int64_t> input_0 = { 2, 7, 11, 15 };
    int64_t target_0 = 9;

    // Example 2
    std::vector<int64_t> input_1 = { 3, 2, 4 };
    int64_t target_1 = 6;

    // Example 3
    std::vector<int64_t> input_2 = { 3, 3 };
    int64_t target_2 = 6;


    auto ans = solution.TwoSum(input_2, target_2);

    for (const auto& i : ans) 
        std::cout << i << " ";
    std::cout << "\n";

}