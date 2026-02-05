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
int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;

    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}

void level_travers(Node *root, int x)
{
    if (root == NULL)
    {
        cout << "Invalid";
        return;
    }
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        // ! ber kore ana
        Node *p = q.front().first;
        int level = q.front().second;
        q.pop();

        // * oi node k niye kaj
        if (level == x)
            cout << p->value << " ";

        // child push kora -- --
        if (p->left) //  (f->left!=NULL)
            q.push({p->left, level + 1});

        if (p->right)
            q.push({p->right, level + 1});
    }
}

int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    int mx_height = max_height(root);
    if (x > mx_height)
    {
        cout << "Invalid";
    }
    else
    {
        level_travers(root, x);
    }

    return 0;
}