// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tc;
    cin >> n >> tc;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (tc--)
    {
        int value;
        cin >> value;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == value)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "found\n";
        }
        else
        {
            cout << "not found\n";
        }
    }

    return 0;
}