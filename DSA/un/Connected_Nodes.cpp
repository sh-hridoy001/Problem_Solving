// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_List[n];

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_List[u].push_back(v);
        adj_List[v].push_back(u);
    }

    int queries;
    cin >> queries;
    while (queries--)
    {
        int queryNode;
        cin >> queryNode;

        if (adj_List[queryNode].empty())
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> connectedNodes = adj_List[queryNode];
        sort(connectedNodes.rbegin(), connectedNodes.rend());

        for (int v : connectedNodes)
        {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}