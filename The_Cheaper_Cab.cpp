// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            cout << "FIRST\n";
        }
        else if (a == b)
        {
            cout << "ANY\n";
        }
        else
        {
            cout << "SECOND\n";
        }
    }

    return 0;
}