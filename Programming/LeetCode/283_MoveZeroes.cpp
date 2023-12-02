/*
Leetcode
283: Move Zeroes
[EASY]
Arrays
*/

/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:

Input: nums = [0]
Output: [0]

*/

#include <iostream>
#include <vector>

class Solution
{
public:
    void MoveZeroes(std::vector<int64_t>& nums);
};

void Solution::MoveZeroes(std::vector<int64_t>& nums)
{
    int index = 0;
    for (size_t i = 0; i < nums.size(); i++)
    {
        if (nums.at(i) != 0)
        {
            nums[index] = nums.at(i);
            index += 1;
        }
    }
    for (size_t i = index; i < nums.size(); i++)
        nums.at(i) = 0;
}

int main()
{
    Solution solution;

    // Example 1
    std::vector<int64_t> input_0 = { 0, 1, 0, 3, 12 };

    // Example 2:
    std::vector<int64_t> input_1 = { 0 };

    solution.MoveZeroes(input_0);

    for (const auto& i : input_0) 
        std::cout << i << " ";
    std::cout << "\n";
}