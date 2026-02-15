// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> adj_list;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list.push_back({a, b});
    }

    // output --
    for (pair<int, int> p : adj_list)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}