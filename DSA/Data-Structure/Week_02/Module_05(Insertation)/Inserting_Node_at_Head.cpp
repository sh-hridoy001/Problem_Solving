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

void insert_newnode_at_head(Node *&head, int value)
{
    Node *newnode = new Node(value);
    newnode->next = head;
    head = newnode;
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(40);

    head->next = a;
    a->next = b;

    insert_newnode_at_head(head, 100);
    insert_newnode_at_head(head, 1560);
    printing_node(head);
    return 0;
}