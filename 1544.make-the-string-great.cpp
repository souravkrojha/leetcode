#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=1544 lang=cpp
 *
 * [1544] Make The String Great
 */

// @lc code=start
class Solution
{
public:
    string makeGood(string s)
    {
        if (s.size() == 1 || s.size() == 2)
        {
            return s;
        }

        string res = "";
        int left = 0;
        int right = 1;
        while (left < s.size())
        {
            if (s[left] == s[right] - 32)
            {
                left += 2;
                right++;
            }
            else
            {
                res += s[left];
                right++;
                left++;
            }
        }

        return res == s ? "" : res;
    }
};
// @lc code=end
