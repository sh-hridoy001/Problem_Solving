// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, p1 = 0, p2 = 0;
    cin >> t;
    int player = 0;
    int lead = INT_MIN;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        p1 += a;
        p2 += b;
        int x = abs(p1 - p2);
        if (x > lead)
        {
            lead = x;
            if (p1 > p2)
            {
                player = 1;
            }
            else
            {
                player = 2;
            }
        }
    }
    cout << player << " " << lead;
    return 0;
}