#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1;
        int res = 0;
        cout << right;
        while (left < right)
        {
            int leftHeight = height[left];
            int rightHeight = height[right];

            res = max(res, (right - left) * min(leftHeight, rightHeight));

            if (leftHeight < rightHeight)
                left++;
            else
                right--;
        }
        return res;
    }
};
// @lc code=end
