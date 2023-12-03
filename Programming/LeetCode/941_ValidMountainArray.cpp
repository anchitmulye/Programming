/*
Leetcode
941: Valid Mountain Array
[EASY]
2 pointers
*/

/*
Given an array of integers arr, return true if and only if it is a valid mountain array.
Recall that arr is a mountain array if and only if:

    arr.length >= 3
    There exists some i with 0 < i < arr.length - 1 such that:
        arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
        arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

Example 1:

Input: arr = [2,1]
Output: false

Example 2:

Input: arr = [3,5,5]
Output: false

Example 3:

Input: arr = [0,3,2,1]
Output: true

*/

#include <iostream>
#include <vector>

class Solution
{
public:
    bool ValidMountainArray(std::vector<int>& arr);
};

bool Solution::ValidMountainArray(std::vector<int>& arr)
{
    if (arr.size() < 3)
        return false;
    
    int low = 0;
    int high = arr.size() - 1;

    while (low + 1 <= static_cast<int>(arr.size()) - 1 && arr[low] < arr[low + 1])
        low += 1;

    while (high - 1 >= 0 && arr[high] < arr[high - 1])
        high -= 1;

    return low == high;
}

int main()
{
    Solution solution;

    // Example 1
    std::vector<int> input_0 = { 2, 1 };

    // Example 2
    std::vector<int> input_1 = { 3, 5, 5 };

    // Example 3
    std::vector<int> input_2 = { 0, 3, 2, 1 };

    auto ans = solution.ValidMountainArray(input_0);

    std::cout << ans << "\n";
}