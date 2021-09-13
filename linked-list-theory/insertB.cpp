// insert at Beginning of SLL.

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

//insertB
Node *insertB(Node *head, int val)
{
    Node *pointer = new Node(val);
    pointer->next = head;
    return pointer;
}

void printLL(Node *head)
{
    Node *pointer = head;
    cout << "Linked List: ";
    while (pointer != NULL)
    {
        cout << pointer->data << " ";
        pointer = pointer->next;
    }
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    head = insertB(head, 10);
    head = insertB(head, 20);
    head = insertB(head, 30);
    head = insertB(head, 40);
    head = insertB(head, 50);
    printLL(head);
    return 0;
}
