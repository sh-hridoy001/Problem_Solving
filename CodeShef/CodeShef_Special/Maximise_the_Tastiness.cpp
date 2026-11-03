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
        int type_1 = max(a, b);
        int type_2 = max(c, d);
        cout << type_1 + type_2 << endl;
    }
    return 0;
}