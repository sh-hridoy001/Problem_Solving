// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        // int val = v[i];
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                found = 1;
                break;
            }
        }
    }
    if (found == 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}