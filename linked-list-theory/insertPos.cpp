// insertat a given postion in SLL.

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

Node *insertPos(Node *head, int pos, int val)
{
    Node *temp = new Node(val);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    Node *pointer = head;
    for (int i = 1; i <= pos - 2 && pointer != NULL; i++)
    {
        pointer = pointer->next;
    }
    if (pointer == NULL)
    {
        return head;
    }
    temp->next = pointer->next;
    pointer->next = temp;
    return head;
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
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    cout << "Before Insert: " << endl;
    printLL(head);
    insertPos(head, 4, 45);
    cout << endl;
    cout << "After Insert: " << endl;
    printLL(head);
    return 0;
}
