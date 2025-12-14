// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // ekhane ei loops ta khub kom bar run korbe.. tai eta ekta logarithmic complexity
    for (int i = 1; i <= n; i *= 2) 
    {
        cout << i << endl;
    }
    return 0;
}