/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL || k == 1)
            return head;

        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        ListNode *pointer = dummy;
        ListNode *prev = dummy;
        ListNode *nex = dummy;
        int count = 0;

        while (pointer->next != NULL)
        {
            pointer = pointer->next;
            count++;
        }

        while (count >= k)
        {
            pointer = prev->next;
            nex = pointer->next;

            for (int i = 1; i < k; i++)
            {
                pointer->next = nex->next;
                nex->next = prev->next;
                prev->next = nex;
                nex = pointer->next;
            }
            prev = pointer;
            count -= k;
        }

        return dummy->next;
    }
};
// @lc code=end
