// author: Sazzad
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
        if (n % 3 == 0)
        {
            cout << "NORMAL\n";
        }
        else if (n % 3 == 1)
        {
            cout << "HUGE\n";
        }
        else if (n % 3 == 2)
        {
            cout << "SMALL\n";
        }
    }

    return 0;
}