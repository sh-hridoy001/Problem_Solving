#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int list_size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_forward(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        int sz = list_size(head);

        if (idx < 0 || idx > sz)
        {
            cout << "Invalid\n";
            continue;
        }

        Node *newnode = new Node(val);

        // Insert at head
        if (idx == 0)
        {
            if (head == NULL)
            {
                head = tail = newnode;
            }
            else
            {
                newnode->next = head;
                head->prev = newnode;
                head = newnode;
            }
        }
        // Insert at tail
        else if (idx == sz)
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        // Insert at any pos
        else
        {
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            newnode->prev = temp;
            temp->next->prev = newnode;
            temp->next = newnode;
        }

        print_forward(head);
        print_backward(tail);
    }

    return 0;
}
