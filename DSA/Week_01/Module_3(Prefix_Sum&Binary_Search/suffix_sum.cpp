// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 2);
    vector<int> suf_v(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = n; i >= 1; i--)
    {
        suf_v[i] = suf_v[i + 1] + v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << suf_v[i] << " ";
    }
    return 0;
}