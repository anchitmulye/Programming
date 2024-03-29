/*
Leetcode
11: Container With Most Water
[MEDIUM]
2 pointers
*/

/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.

Example 1:

Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

Example 2:

Input: height = [1,1]
Output: 1

*/

#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    int MaxArea(std::vector<int64_t>& heights);
};

int Solution::MaxArea(std::vector<int64_t>& heights)
{
    int64_t maxArea = 0;
    int64_t low = 0;
    int64_t high = heights.size() - 1;

    while (low < high)
    {
        maxArea = std::max(maxArea, std::min(heights[low], heights[high]) * (high - low));

        if (heights[low] < heights[high])
            low += 1;
        else
            high -= 1;
    }
    return maxArea;
}

int main()
{
    Solution solution;

    // Example 1
    std::vector<int64_t> input_0 = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };

    // Example 2
    std::vector<int64_t> input_1 = { 1, 1 };

    auto ans = solution.MaxArea(input_0);

    std::cout << ans << "\n";
}