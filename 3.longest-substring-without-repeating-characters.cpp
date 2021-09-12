#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> map(256, -1);
        int left = 0;
        int right = 0;
        int len = 0;

        while (right < s.length())
        {
            if (map[s[right]] != -1)
            {
                left = max(left, map[s[right]] + 1);
            }

            map[s[right]] = right;
            len = max(len, right - left + 1);
            right++;
        }
        return len;
    }
};
// @lc code=end
