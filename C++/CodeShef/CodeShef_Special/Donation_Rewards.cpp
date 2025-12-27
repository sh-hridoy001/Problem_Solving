// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (a <= 3)
        {
            cout << "BRONZE\n";
        }
        else if (a > 3 && a <= 6)
        {
            cout << "SILVER\n";
        }
        else
        {
            cout << "GOLD\n";
        }
    }

    return 0;
}