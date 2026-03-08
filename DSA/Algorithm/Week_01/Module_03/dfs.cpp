// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];

void dfs(int src)
{

    // base case -- dorkar naiii
    // node niye kaj
    cout << src << " ";
    vis[src] = true;
    // child push kora
    for (int child : adj_list[src])
        if (vis[child] == false)
            dfs(child);
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int src, dst;
    cin >> src >> dst;

    memset(vis, false, sizeof(vis));
    dfs(src);
    return 0;
}