// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int rec(int x)
{
    if (x < 3)
    {
        return 0;
    }
    int extra = x / 3;
    return extra + rec(extra + (x % 3));
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int buy = n / 5;
        int ans = buy + rec(buy);
        cout << ans << endl;
    }

    return 0;
}