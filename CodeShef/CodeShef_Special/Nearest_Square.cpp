// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int val;
        for (int i = 1; i <= n; i++)
        {
            if (i * i <= n)
            {
                val = i;
            }
        }
        cout << val * val << endl;
    }
    return 0;
}