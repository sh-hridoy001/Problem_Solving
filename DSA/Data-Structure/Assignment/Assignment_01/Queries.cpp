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

// clear -- -- --
void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

// clear -- --
void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

// clear -- --
void delete_at_any_pos(Node *&head, Node *&tail, int pos)
{

    if (head == NULL)
    {
        return;
    }

    if (pos == 0)
    {
        Node *deletenode = head;
        head = head->next;
        delete deletenode;

        if (head == NULL)
        {
            tail = NULL;
        }
        return;
    }

    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        if (temp->next == NULL)
            return;
        temp = temp->next;
    }

    if (temp->next == NULL)
    {

        return;
    }

    Node *deletenode = temp->next;
    temp->next = temp->next->next;

    if (deletenode == tail)
    {
        tail = temp;
    }
    delete deletenode;
}

// clear --
void printing_node(Node *head)
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

    int Q;
    cin >> Q;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_at_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, tail, V);
        }
        else
        {
            delete_at_any_pos(head, tail, V);
        }

        printing_node(head);
    }
    return 0;
}
