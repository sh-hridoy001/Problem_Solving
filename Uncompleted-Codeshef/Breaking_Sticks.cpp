// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int breaks = 0;
        for (int i = 0; i < n; i++)
        {
            breaks = breaks + (a[i] - 1);
        }
        cout << breaks << endl;
    }
    return 0;
}