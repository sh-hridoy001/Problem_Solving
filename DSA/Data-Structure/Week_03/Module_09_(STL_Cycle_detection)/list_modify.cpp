// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30};
    list<int> l2 = l;
    for (int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;
    l2.push_front(100);
    l2.push_back(50);
    for (int val : l2)
    {
        cout << val << " ";
    }

    l2.pop_back();
    l2.pop_front();
    l2.pop_front();
    cout << endl;
    for (int val : l2)
    {
        cout << val << " ";
    }

    return 0;
}