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

int main()
{
    Node *head = new Node(40);
    Node *a = new Node(60);
    Node *b = new Node(80);
    Node *c = new Node(70);

    head->next = a;
    a->next = b;
    b->next = c;

    // cout << head->value << endl;
    // cout << head->next->value << endl;
    // cout << head->next->next->value << endl;
    // cout << head->next->next->next->value << endl;

    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->value<<endl ;
        temp = temp->next ;
    }

    return 0;
}