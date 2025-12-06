// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int coin_min = min(a, b);
    int coin_max = max(a, b);
    if (x > y)
    {
        cout << coin_max;
    }
    else
    {
        cout << coin_min;
    }

    return 0;
}