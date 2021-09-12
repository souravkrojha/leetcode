#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 0)
            return "";
        string res = "";
        sort(begin(strs), end(strs));
        string a = strs[0];
        string b = strs[strs.size() - 1];

        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == b[i])
            {
                res += a[i];
            }
            else
            {
                break;
            }
        }
        return res;
    }
};
// @lc code=end
