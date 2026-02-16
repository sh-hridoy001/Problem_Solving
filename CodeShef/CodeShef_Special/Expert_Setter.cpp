// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int problem, solve;
        cin >> problem >> solve;
        (solve * 2 >= problem) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}