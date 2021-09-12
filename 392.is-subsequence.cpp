#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0, j = 0;
        while (j < s.size() && i < t.size())
        {
            if (s[j] == t[i])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        return j == s.size();
    }
};
// @lc code=end
