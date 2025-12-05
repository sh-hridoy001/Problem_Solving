// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 9)
    {
        cout << "MORE\n";
    }
    else if (n == 8)
    {
        cout << "PERFECT";
    }
    else
    {
        cout << "LESS";
    }
    return 0;
}