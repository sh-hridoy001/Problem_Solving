// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans;
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        ans = (n + (x - y) * z);
        cout << ans << endl;
    }
    return 0;
}