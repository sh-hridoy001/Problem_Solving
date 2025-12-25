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

// ekhane head a & sign dite hobe na-- -- --- karon amra head change korbo na ekhane
void insert_at_any_pos(Node *head, int index, int value){
    Node* newnode = new Node(value);
    Node* temp = head ;
    for(int i=1; i<index; i++){
        temp = temp->next ;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}


void printing_node(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    
}
int main()
{
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new Node(300);

    head->next = a;
    a->next = b;

    insert_at_any_pos(head,2, 600);
    printing_node(head);
    return 0;
}