/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL)
            return head;
        ListNode *pointer = head;
        ListNode *prev = NULL;

        while (pointer != NULL)
        {
            ListNode *next = pointer->next;
            pointer->next = prev;
            prev = pointer;
            pointer = next;
        }
        return prev;
    }
};
// @lc code=end
