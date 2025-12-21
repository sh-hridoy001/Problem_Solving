// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 3)
    {
        cout << "GOLD";
    }
    else if (n >= 3 && n < 6)
    {
        cout << "SILVER";
    }
    else if (n >= 6)
    {
        cout << "BRONZE";
    }
    return 0;
}