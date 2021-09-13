// Linked List Traversal

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
// iterative traversal
void printList(Node *head)
{
    Node *pointer = head;
    while (pointer != NULL)
    {
        cout << pointer->data << " ";
        pointer = pointer->next;
    }
}
// recursive traversal

void rPrintLL(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    return rPrintLL(head->next);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(40);
    head->next->next->next = new Node(50);
    cout << "Iterative traversal:"
         << " ";
    printList(head);
    cout << endl;
    cout << "Recursive traversal:"
         << " ";
    rPrintLL(head);
    return 0;
}