// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        if (10 * a > 5 * b)
        {
            cout << "first" << endl;
        }
        else if (10 * a == 5 * b)
        {
            cout << "any" << endl;
        }
        else
        {
            cout << "second" << endl;
        }
    }
    return 0;
}