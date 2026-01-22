// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 80, 45};

    l.erase(next(l.begin(), 1));
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;


    l.erase(next(l.begin(), 2), next(l.begin(), 5));
    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}