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

// insert node at tail optimized ---- --- ---
void insert_node_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);
    // jodi kono node e na thake tobe -- -- -- --
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    // adding node at tail
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
    Node *head = new Node(10);
            // Node *head = NULL;
            // Node *tail = NULL;
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = tail;
    insert_node_at_tail(head, tail, 50);
    insert_node_at_tail(head, tail, 60);
           // insert_node_at_tail(head, tail, 60);
    printing_node(head);
           // cout<<endl <<tail->value ;
    return 0;
}