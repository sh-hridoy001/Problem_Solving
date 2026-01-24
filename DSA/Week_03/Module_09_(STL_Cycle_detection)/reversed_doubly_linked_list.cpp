// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    // Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        // this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);
    // jodi kono node e na thake tobe -- -- -- --
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    // adding node at tail
    tail->next = newnode;
    tail = tail->next;
}
// void reversed(Node *head, Node *tail)
// {
//     for (Node *i = head, *j = tail; (i != j->next && i->prev != j); i = i->next, j = j->prev)
//     {
//         swap(i->value, j->value);
//     }
// }

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
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        // insert_at_tail(head, val, tail);
    }
    // reversed(head, tail);
    print_forward(head);
    return 0;
}