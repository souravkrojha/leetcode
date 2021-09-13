// search in a linked list iterative and recursive

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printLL(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    printLL(head->next);
}
// iterative search.
int llSearch(Node *head, int val)
{
    int pos = 1;
    Node *pointer = head;
    while (pointer != NULL)
    {
        if (pointer->data == val)
            return pos;
        else
        {
            pos++;
            pointer = pointer->next;
        }
    }
    return -1;
}
// recursive solution
int rllSearch(Node *head, int val)
{
    if (head == NULL)
        return -1;
    if (head->data == val)
        return 1;
    else
    {
        int res = rllSearch(head->next, val);
        if (res == -1)
            return -1;
        else
            return res + 1;
    }
}

int main(int argc, char const *argv[])
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << llSearch(head, 20) << " ";
    cout << rllSearch(head, 20) << " ";
    return 0;
}
