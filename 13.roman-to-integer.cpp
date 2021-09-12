#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        int num = 0;
        if (s.empty())
        {
            return num;
        }
        unordered_map<char, int> table = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (table[s[i]] < table[s[i + 1]])
            {
                num -= table[s[i]];
            }
            else
            {
                num += table[s[i]];
            }
        }
        num += table[s.back()];
        return num;
    }
};
// @lc code=end
