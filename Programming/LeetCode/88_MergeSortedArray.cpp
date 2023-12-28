/*
Leetcode
88: Merge Sorted Array
[EASY]
Array
*/

/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].

Example 3:

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
*/

#include <iostream>
#include <vector>

class Solution
{
public:
    void Merge(std::vector<int64_t>& nums1, uint64_t m, std::vector<int64_t>& nums2, uint64_t n);
};

void Solution::Merge(std::vector<int64_t>& nums1, uint64_t m, std::vector<int64_t>& nums2, uint64_t n)
{
    uint64_t index = m + n - 1;
    int64_t first = m - 1;
    int64_t second = n - 1;

    while(second >= 0)
    {
        if(first < 0)
        {
            nums1[index] = nums2.at(second);
            second -= 1;
            continue;
        }
        if(nums1.at(first) < nums2.at(second))
        {
            nums1[index] = nums2.at(second);
            second -= 1;
        }
        else
        {
            nums1[index] = nums1.at(first);
            nums1[first] = 0;
            first -= 1;
        }
        index -= 1;
    }
}

int main()
{
    Solution solution;

    // Example 1
    std::vector<int64_t> one_0 = { 1, 2, 3, 0, 0, 0 };
    uint64_t m_0 = 3;
    std::vector<int64_t> two_0 = { 2, 5, 6 };
    uint64_t n_0 = 3;

    // Example 2
    std::vector<int64_t> one_1 = { 1 };
    uint64_t m_1 = 1;
    std::vector<int64_t> two_1 = { };
    uint64_t n_1 = 0;

    // Example 3
    std::vector<int64_t> one_2 = { 0 };
    uint64_t m_2 = 0;
    std::vector<int64_t> two_2 = { 1 };
    uint64_t n_2 = 1;

    solution.Merge(one_0, m_0, two_0, n_0);

    for (const auto& num : one_0)
        std::cout << num << " ";
    std::cout << "\n";
}
