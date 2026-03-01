// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, a, b;
        cin >> x >> a >> b;

        if (a + (2 * b) >= x)
            cout << "Qualify" << endl;
        else
            cout << "NotQualify" << endl;
    }
    return 0;
}