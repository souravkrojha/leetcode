// insert at the end of an SLL

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

Node *insertE(Node *head, int val)
{
    Node *tempPointer = new Node(val);
    if (head == NULL)
        return tempPointer;
    Node *currPointer = head;
    while (currPointer->next != NULL)
        currPointer = currPointer->next;
    currPointer->next = tempPointer;
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
    Node *head = NULL;
    head = insertE(head, 10);
    head = insertE(head, 20);
    head = insertE(head, 30);
    head = insertE(head, 40);
    head = insertE(head, 50);
    printLL(head);
    return 0;
}
