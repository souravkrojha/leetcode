#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution
{
public:
    void rev(string &s, int low, int high)
    {
        char temp;
        while (low < high)
        {
            temp = s[low];
            s[low] = s[high];
            s[high] = temp;
            low++;
            high--;
        }
    }
    string reverseWords(string s)
    {
        int n = s.length();
        int index = 0;
        int start = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != ' ' || (s[i] == ' ' && i != 0 && s[i - 1] != ' '))
            {
                s[index] = s[i];
                index++;
            }
        }
        s.resize(index);
        if (s[s.length() - 1] == ' ')
        {
            s.pop_back();
        }
        n = s.length();
        for (int end = 0; end < n; end++)
        {
            if (s[end] == ' ')
            {
                rev(s, start, end - 1);
                start = end + 1;
            }
        }
        rev(s, start, n - 1);
        rev(s, 0, n - 1);
        return s;
    }
};
// @lc code=end
