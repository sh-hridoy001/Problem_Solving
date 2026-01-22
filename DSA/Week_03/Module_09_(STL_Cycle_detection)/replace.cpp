// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 20, 45};
    replace(l.begin(), l.end(), 20, 100);

    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}