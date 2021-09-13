/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == NULL)
            return head;
        ListNode *first = head;
        ListNode *second = head;

        for (int i = 0; i < n && first != NULL; i++)
        {
            first = first->next;
        }
        if (!first)
            return head->next;
        while (first->next != NULL)
        {
            second = second->next;
            first = first->next;
        }
        second->next = second->next->next;
        return head;
    }
};
// @lc code=end
