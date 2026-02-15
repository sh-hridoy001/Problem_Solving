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
    Node a(40), b(80), c(45);
    a.next = &b;
    b.next = &c; //     a.next->next = &c 

    cout << a.value << endl;
    cout << a.next->value << endl;
    cout << a.next->next->value << endl;

    return 0;
}