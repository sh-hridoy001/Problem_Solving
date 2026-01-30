//author sh_hridoy001 --- -- -- 
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string value;
    Node *next;
    Node *prev;
    Node(string value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head, string value, Node *&tail)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *current = head;
    string s;
    while (true)
    {
        cin >> s;
        if (s == "end")
        {
            break;
        }
        insert_at_tail(head, s, tail);
    }
    int t;
    cin >> t;
    while (t--)
    {
        string command;
        cin >> command;
        if (command == "visit")
        {
            string target;
            cin >> target;
            bool flag = false;
            Node *temp = head;
            while (temp != NULL)
            {
                if (temp->value == target)
                {
                    current = temp;
                    flag = true;
                    break;
                }
                temp = temp->next;
            }
            if (flag == true)
            {
                cout << target << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (current->next != NULL)
            {
                current = current->next;
                cout << current->value << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (current->prev != NULL)
            {
                current = current->prev;
                cout << current->value << endl;
            }
            else
            {
                cout << "Not Available\n";
            }
        }
    }
    return 0;
}