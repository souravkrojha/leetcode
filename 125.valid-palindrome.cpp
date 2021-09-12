#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string p = "";
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57))
            {
                p += s[i];
            }
                }
        transform(p.begin(), p.end(), p.begin(), ::tolower);
        cout << p;
        int l = 0, r = p.size() - 1;
        while (l <= r)
        {
            if (p[l] != p[r])
                return false;
            l++, r--;
        }
        return true;
    }
};
// @lc code=end
