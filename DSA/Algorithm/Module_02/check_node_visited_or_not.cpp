// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        // ber kore ana
        int par = q.front();
        q.pop();

        // child niye kaj
        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[b].push_back(a);
        adj_list[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));

    int src, dst;
    cin >> src >> dst;
    bfs(src);

    if (vis[dst])
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}