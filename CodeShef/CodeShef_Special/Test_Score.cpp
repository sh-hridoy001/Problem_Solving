// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int target = false;

        for (int i = 0; i <= n; i++)
        {
            if (i * x == y)
            {
                target = true;
                break;
            }
        }

        if (target)
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