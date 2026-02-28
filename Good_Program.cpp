// Author:- SH_Hridoy
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
        if (n % 4 == 0)
            cout << "Good\n";
        else
            cout << "Not Good\n";
    }
    return 0;
}