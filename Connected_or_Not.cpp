// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    set<pair<int, int>> edge;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        edge.insert({a, b});
    }
    int tc;
    cin >> tc;
    while (tc--)
    {
        int u, v;
        cin >> u >> v;
        if (u == v)
        {
            cout << "YES\n";
        }
        else if (edge.count({u, v}))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}