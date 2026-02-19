// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        float n;
        cin >> n;
        float val = ceil(n / 3);
        cout << (val * 3) - n << endl;
    }
    return 0;
}