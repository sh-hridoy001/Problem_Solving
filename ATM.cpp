// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    float b, total;
    cin >> a >> b;
    total = (b - a) - 0.50;

    if (a % 5 == 0 && b >= (a+0.50))
    {
        cout << fixed << setprecision(2) << total;
    }
    else
    {
        cout << fixed << setprecision(2) << b;
    }

    return 0;
}