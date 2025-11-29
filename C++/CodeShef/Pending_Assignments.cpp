// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, day;
        cin >> a >> b >> day;
        if ((a * b) <= (day * 24 * 60))
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