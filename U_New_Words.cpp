// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int e = 0;
    int g = 0;
    int p = 0;
    int y = 0;
    int t = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'e' || s[i] == 'E')
        {
            e++;
        }
        else if (s[i] == 'g' || s[i] == 'G')
        {
            g++;
        }
        else if (s[i] == 'p' || s[i] == 'P')
        {
            p++;
        }
        else if (s[i] == 'y' || s[i] == 'Y')
        {
            y++;
        }
        else if (s[i] == 't' || s[i] == 'T')
        {
            t++;
        }
    }
    int mn = min({e, g, p, y, t});
    cout << mn;

    return 0;
}
//accepted*