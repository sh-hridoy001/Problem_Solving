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

void insert_node_at_tail(Node *&head, int value)
{
    Node *newnode = new Node(value);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
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
    Node *head = new Node(100);
    Node *a = new Node(200);
    Node *b = new Node(300);

    head->next = a;
    a->next = b;

    insert_node_at_tail(head, 400);
    insert_node_at_tail(head, 800);
    printing_node(head);
    return 0;
}