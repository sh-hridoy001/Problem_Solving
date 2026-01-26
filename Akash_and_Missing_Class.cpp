// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int total_week = (n / 7);
        int remaining = (n % 7);
        int ans = total_week;
        if (remaining >= 6)
        {
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}