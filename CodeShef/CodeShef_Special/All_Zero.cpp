// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, type_1, type_2;
        cin >> a >> b >> c;
        type_1 = a;
        if (c % 3 == 0)
        {
            type_2 = c / 3;
        }
        else
        {
            cout << "No" << endl;
            continue;
        }
        b = b - (type_1 * 2) - (type_2 * 1);
        if (b == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}