#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            int find = target - nums[i];
            if (map.find(find) != map.end())
            {
                res.push_back(map[find]);
                res.push_back(i);
                return res;
            }
            map[nums[i]] = i;
        }
        return res;
    }
};
// @lc code=end
