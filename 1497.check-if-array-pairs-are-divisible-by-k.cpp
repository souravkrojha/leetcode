#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=1497 lang=cpp
 *
 * [1497] Check If Array Pairs Are Divisible by k
 */

// @lc code=start
class Solution
{
public:
    bool canArrange(vector<int> &arr, int k)
    {
        int left = 0;
        int right = arr.size() - 1;

        while (left < right)
        {
            if ((arr[left] + arr[right]) % k == 0)
            {
                return true;
            }
            left++;
            right--;
        }
        return false;
    }
};
// @lc code=end
