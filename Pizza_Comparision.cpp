// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        double s = (double)n / 100;
        double b = (double)m / 225;
        if (s > b)
            cout << "Large" << endl;
        else if (s < b)
            cout << "Small" << endl;
        else
            cout << "Equal" << endl;
    }
    return 0;
}