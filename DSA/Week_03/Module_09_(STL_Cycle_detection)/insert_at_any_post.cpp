// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1 = {10, 2, 30, 40};
    list<int> l2 = {100, 660, 850, 6554};


    l1.insert(next(l1.begin(), 3), l2.begin(), l2.end());
    for (int val : l1)
    {
        cout << val << " ";
    }

    return 0;
}