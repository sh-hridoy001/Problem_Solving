// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 7)
    {
        cout << 3;
    }
    else if (n > 2 && n < 7)
    {
        cout << 2;
    }
    else
    {
        cout << 1;
    }
    return 0;
}