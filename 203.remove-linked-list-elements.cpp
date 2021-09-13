#include <bits/stdc++.h>
/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{

public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
            return head;
        while (head != NULL && head->val == val)
        {
            head = head->next;
        }
        ListNode *pointer = head;
        while (pointer != NULL && pointer->next != NULL)
        {
            if (pointer->next->val == val)
            {
                pointer->next = pointer->next->next;
            }
            else
            {
                pointer = pointer->next;
            }
        }
        return head;
    }
};
// @lc code=end
