// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, m;
        cin >> x >> y >> z >> m;
        if (abs(x - y) <= m || abs(y - z) <= m || abs(x - z) <= m)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}