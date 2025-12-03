// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string s, x;
        cin >> s >> x;
        int idx = s.find(x);
        while (idx != -1)
        {
            s.replace(idx, x.size(), "#");
            idx = s.find(x, idx + 1);
        }
        cout << s << endl;
    }
    return 0;
}
