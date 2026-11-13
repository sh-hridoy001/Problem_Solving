// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n >= k)
        {
            cout << 0 << endl;
        }
        else if (k > n)
        {
            cout << (k - n) * 2 << endl;
        }
    }

    return 0;
}