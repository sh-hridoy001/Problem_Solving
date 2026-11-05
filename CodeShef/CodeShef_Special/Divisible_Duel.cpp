// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int seven = 0;
        int odd = 0;
        for (int i = 1; i <= y; i++)
        {
            if (i % x == 0 && i % 2 == 0)
            {
                seven++;
            }
            else if (i % x == 0 && i % 2 != 0)
            {
                odd++;
            }
        }
        if (seven >= odd)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}