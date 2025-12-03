// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, t;
        cin >> s >> t;
        int len_s = s.length();
        int len_t = t.length();
        int min_len = min(len_s, len_t);
        for (int i = 0; i < min_len; i++)
        {
            if (s[i] == t[i])
            {
                cout << "G";
            }
            else
            {
                cout << "B";
            }
        }
        cout << endl;
    }

    return 0;
}