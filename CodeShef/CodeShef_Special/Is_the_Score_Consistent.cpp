// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a <= c && b <= d)
        {
            cout << "POSSIBLE\n";
        }
        else
        {
            cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}