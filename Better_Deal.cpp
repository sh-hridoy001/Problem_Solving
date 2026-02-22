// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        double a, b;
        cin >> a >> b;
        int val_a = 100 - a, val_b = 200 - (2 * b);
        if (val_a < val_b)
        {
            cout << "FIRST\n";
        }
        else if (val_a == val_b)
        {
            cout << "BOTH\n";
        }
        else
        {
            cout << "SECOND\n";
        }
    }
    return 0;
}