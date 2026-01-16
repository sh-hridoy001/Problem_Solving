// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (x >= (30 * y))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}