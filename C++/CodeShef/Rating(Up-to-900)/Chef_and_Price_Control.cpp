// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        vector<int> v(n);
        int rev = 0;
        int rev2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            rev = rev + v[i];
            if (v[i] > p)
            {
                rev2 = rev2 + p;
            }
            else
            {
                rev2 = rev2 + v[i];
            }
        }

        cout << rev - rev2 << endl;
    }

    return 0;
}