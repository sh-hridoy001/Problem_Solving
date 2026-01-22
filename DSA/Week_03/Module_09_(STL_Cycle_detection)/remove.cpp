// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {2, 10, 3, 4, 5, 6};
    l.remove(10);
    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}