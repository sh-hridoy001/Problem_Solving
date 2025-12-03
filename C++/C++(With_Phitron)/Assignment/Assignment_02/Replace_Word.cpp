// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, x;
        cin >> s >> x;
        int idx = s.find(x);
        while (idx != -1)
        {
            
            s.replace(idx, 5, "#");
            idx = s.find(x, idx + 1);
        }
    }

    return 0;
}