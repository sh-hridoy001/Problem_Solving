// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y, a;
    while (t--)
    {
        cin >> x >> y;
        a = x * 1.07;
        if (a >= y)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}