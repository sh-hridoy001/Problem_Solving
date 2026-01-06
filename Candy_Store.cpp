#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x, y;
        cin >> x >> y;

        if (y > x)
            cout << x + ((y - x) * 2) << endl;
        else
            cout << y << endl;
    }

    return 0;
}