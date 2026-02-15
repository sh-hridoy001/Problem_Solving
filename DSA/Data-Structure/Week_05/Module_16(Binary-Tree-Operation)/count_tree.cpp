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

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root != NULL)
        q.push(root);
    while (!q.empty())
    {
        //? ber kore ana -
        Node *p = q.front();
        q.pop();

        // oi node niye kaj kora --
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // child push kora  -- --
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void level_travers(Node *root)
{
    int count = 0;
    if (root == NULL)
    {
        cout << "NO Tree";
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // ! ber kore ana
        Node *p = q.front();
        q.pop();

        // * oi node k niye kaj
        count++ ;

        // child push kora -- --
        if (p->left) //  (f->left!=NULL)
            q.push(p->left);

        if (p->right)
            q.push(p->right);
    }
    cout<<count ;
}

int main()
{
    Node *root = input_tree();
    // level_travers(root);
    level_travers(root);
    return 0;
}