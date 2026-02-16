// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l = n % 10, r;
        while (n != 0)
        {
            r = n % 10;
            n = n / 10;
        }
        cout << l + r << endl;
    }

    return 0;
}