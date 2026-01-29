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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front()
    {
        return head->value;
    }
    int back()
    {
        return tail->value;
    }

    int size()
    {
        return sz;
    }

    int empty()
    {
        // if(head == NULL)
        //     true ;
        // else
        //     false ;
        return head == NULL;
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while (!q.empty())
    {
        cout << q.front()<<" ";
        q.pop();
    }

    return 0;
}