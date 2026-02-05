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

int sum_of_leaf_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return root->value;
    int l = sum_of_leaf_nodes(root->left);
    int r = sum_of_leaf_nodes(root->right);
    return l + r;
}
int sum_of_without_leaf_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    int l = sum_of_without_leaf_nodes(root->left);
    int r = sum_of_without_leaf_nodes(root->right);
    return l + r + root->value;
}

int sum_of_all_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    int l = sum_of_all_nodes(root->left);
    int r = sum_of_all_nodes(root->right);
    return l + r + root->value;
}

int main()
{
    Node *root = input_tree();
    // cout << sum_of_all_nodes(root) - sum_of_leaf_nodes(root);
    cout << sum_of_without_leaf_nodes(root);
    return 0;
}