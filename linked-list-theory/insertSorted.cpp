// insert an element in an sorted ll so that it remains sorted
//after insertion.

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

Node *insertSorted(Node *head, int val)
{
    Node *temp = new Node(val);
    if (head == NULL)
    {
        return temp;
    }
    if (val < head->data)
    {
        temp->next = head;
        return temp;
    }
    Node *pointer = head;
    while (pointer->next != NULL && pointer->next->data < val)
    {
        pointer = pointer->next;
    }
    temp->next = pointer->next;
    pointer->next = temp;
    return head;
}

void printLL(Node *head)
{
    Node *pointer = head;
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
    cout << "Before Insert: " << endl;
    printLL(head);
    insertSorted(head, 25);
    cout << endl;
    cout << "After Insert: " << endl;
    printLL(head);
    return 0;
}
