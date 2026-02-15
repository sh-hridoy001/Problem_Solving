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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        insert_node_at_tail(head, tail, value);
    }
    int target_value, idx = 0;
    cin >> target_value;
    Node *temp = head;
    int flag = 0;
    while (temp != NULL)
    {
        if (temp->value == target_value)
        {
            cout << idx << endl;
            flag = 1;
            break;
        }
        temp = temp->next;
        idx++;
    }
    if (flag == 0)
    {
        cout << "-1";
    }
    return 0;
}