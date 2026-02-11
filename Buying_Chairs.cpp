// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, p, k;
        cin >> w >> p >> k;
        if (k <= w) {
            k = k * 2;
            cout << k << endl;
        }
        else {
            p = k - w;
            w = w * 2;
            cout << w + p << endl;
        }
    }
    return 0;
}