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

void insert_value_at_head(Node *&head, int value)
{
    Node *newnode = new Node(value);
    newnode->next = head;
    head = newnode;
}

int main()
{
    // declare dynamic node ---
    Node *head = new Node(46);
    Node *a = new Node(335);
    Node *b = new Node(438);

    // connecting node each other ---
    head->next = a;
    a->next = b;
    insert_value_at_head(head, 4245);
    insert_value_at_head(head, 657);

    // printing node ---
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    return 0;
}