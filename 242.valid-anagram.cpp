#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        char arr[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i] - 'a']++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            arr[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
        {

            if (arr[i] > 0)
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
