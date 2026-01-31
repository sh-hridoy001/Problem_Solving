// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_travers(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // ! ber kore ana
        Node *f = q.front();
        q.pop();

        // * oi node k niye kaj
        cout << f->value << " ";

        // child push kora -- --
        if (f->left)       //  (f->left!=NULL) 
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;
    level_travers(root);
    return 0;
}