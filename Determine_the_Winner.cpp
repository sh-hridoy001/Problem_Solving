// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int p = max(a, b);
        int q = max(c, d);
        if (p < q)
        {
            cout << "P" << endl;
        }
        else if (q < p)
        {
            cout << "Q" << endl;
        }
        else
        {
            cout << "TIE" << endl;
        }
    }
    return 0;
}