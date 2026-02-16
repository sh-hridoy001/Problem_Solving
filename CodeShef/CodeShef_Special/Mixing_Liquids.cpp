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
        int x = min(a, b / 2);
        int total_liquids = x + 2 * x;
        cout << total_liquids << endl;
    }
    return 0;
}