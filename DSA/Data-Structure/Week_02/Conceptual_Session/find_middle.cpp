// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void insert_node_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = tail->next;
}

void printing_node(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    int size = 0;
    while (cin >> val)
    {
        size++;
        insert_node_at_tail(head, tail, val);
    }

    if (size % 2 == 0)
    {
        int mid = size / 2;
        Node *temp = head;
        for (int i = 0; i < mid - 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->value << " ";
        cout<<temp->next->value;
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < (size / 2); i++)
        {
            temp = temp->next;
        }
        cout << temp->value;
    }
    return 0;
}