// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backword(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
}

int main()
{
    Node *head = new Node(100);
    Node *a = new Node(200);
    Node *tail = new Node(300);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    print_forward(head);
    print_backword(tail);

    return 0;
}