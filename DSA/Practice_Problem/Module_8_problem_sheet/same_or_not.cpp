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

int insert_at_tail(Node *&head, int value, Node *&tail)
{
    Node *newnode = new Node(value);
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
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
        insert_at_tail(head, val, tail);
    }
    
    return 0;
}