#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> pStack;
        pStack.push('*');
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                pStack.push(s[i]);
            }
            else if (s[i] == '[')
            {
                pStack.push(s[i]);
            }
            else if (s[i] == '{')
            {
                pStack.push(s[i]);
            }
            else
            {
                switch (s[i])
                {
                case ']':
                    if (pStack.top() == '[')
                    {
                        pStack.pop();
                    }
                    else
                    {
                        return false;
                    }
                    break;
                case '}':
                    if (pStack.top() == '{')
                    {
                        pStack.pop();
                    }
                    else
                    {
                        return false;
                    }
                    break;
                case ')':
                    if (pStack.top() == '(')
                    {
                        pStack.pop();
                    }
                    else
                    {
                        return false;
                    }
                    break;
                }
            }
        }
        if (pStack.size() > 1)
        {
            return false;
        }
        return true;
    }
};
// @lc code=end
