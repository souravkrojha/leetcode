// Delete front node of a linked list.
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

Node *deleteB(Node *head)
{
    if (head == NULL)
        return NULL;
    else
    {
        Node *pointer = head->next;
        delete head;
        return pointer;
    }
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
    head = deleteB(head);
    cout << "After Delete: " << endl;
    printLL(head);
    return 0;
}
