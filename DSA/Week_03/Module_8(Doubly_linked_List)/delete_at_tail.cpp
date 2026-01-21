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

void delete_at_tail(Node *&head, Node *&tail)
{
    Node *delete_node = tail;
    tail = tail->prev;
    delete delete_node;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

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
int main()
{
    Node *head = new Node(30);
    Node *a = new Node(40);
    Node *tail = new Node(20);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    delete_at_tail(head, tail);
    delete_at_tail(head, tail);
    print_forward(head);
    return 0;
}