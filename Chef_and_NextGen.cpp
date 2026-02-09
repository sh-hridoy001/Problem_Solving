// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int energy = x * y;
        int require_energy = a * b;
        (energy >= require_energy) ? cout << "Yes\n" : cout << "No\n";
    }

    return 0;
}