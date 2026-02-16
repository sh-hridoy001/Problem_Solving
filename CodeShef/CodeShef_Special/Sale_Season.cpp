// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 100)
        {
            cout << n << endl;
        }
        else if (n > 100 && n <= 1000)
        {
            cout << n - 25 << endl;
        }
        else if (n > 1000 && n <= 5000)
        {
            cout << n - 100 << endl;
        }
        else
        {
            cout << n - 500 << endl;
        }
    }

    return 0;
}