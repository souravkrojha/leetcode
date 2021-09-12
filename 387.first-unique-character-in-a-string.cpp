#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution
{
public:
    int firstUniqChar(string s)
    {
        map<char, int> chars;

        for (int i = 0; i < s.size(); i++)
        {
            chars[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (chars[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end
