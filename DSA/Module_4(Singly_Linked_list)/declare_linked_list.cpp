// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    Node a, b, c;

    a.value = 10;
    b.value = 20;
    c.value = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // cout << a.value << " " << b.value << " " << c.value;
    // ektar sathe ekta connection kore diye print korbo - - -- -
    cout << a.value << endl;
    cout << a.next->value << endl;
    // cout << b.next->value << endl;
    cout << a.next->next->value << endl;

    return 0;
}