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
        if (a <= b)
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
    }

    return 0;
}