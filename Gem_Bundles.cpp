// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int r, b, g, mn, total, extra;
        cin >> r >> b >> g;
        mn = min(r, min(b, g));
        total = r + b + g;
        extra = total - (mn * 3);
        cout << (mn * 10) + extra * 3 << endl;
    }
    return 0;
}