// Delete last node of a linked list.
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

Node *deleteE(Node *head)
{
    // if ll has one or two nodes
    if (head == NULL || head->next == NULL)
    {
        delete head;
        return NULL;
    }
    // for more than two nodes
    Node *currPointer = head;
    while (currPointer->next->next != NULL)
    {
        currPointer = currPointer->next;
    }
    delete currPointer->next;
    currPointer->next = NULL;
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
    cout << "Before Delete: " << endl;
    printLL(head);
    cout << endl;
    head = deleteE(head);
    cout << "After Delete: " << endl;
    printLL(head);
    return 0;
}
