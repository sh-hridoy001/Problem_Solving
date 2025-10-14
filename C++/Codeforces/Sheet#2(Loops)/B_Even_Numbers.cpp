#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << "-1";
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << endl;
        }
    }
    return 0;
}