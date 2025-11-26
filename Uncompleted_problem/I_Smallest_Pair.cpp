#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;
        int a[n];
        for (int r = 0; r <= n; r++)
        {
            cin >> a[r];
        }
        
        int x = INT_MAX;
        int ans = 0;
        for (int p = 1; p <= n; p++)
        {
            for (int q = p + 1; q <= n; q++)
            {

                ans = a[p] + a[q] + q - p;
                x = min(x, ans);
            }
        }
        cout << x << endl;
    }
    return 0;
}