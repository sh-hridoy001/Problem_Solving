// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;
        long long trades = a / x;
        long long ans = a + b + trades * (y - x);
        cout << ans << "\n";
    }

    return 0;
}