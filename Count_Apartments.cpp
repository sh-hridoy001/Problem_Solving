// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> g;
bool vis[1005][1005];

void dfs(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
    {
        return;
    }
    if (g[x][y] == '#' || vis[x][y])
    {
        return;
    }

    vis[x][y] = true;
    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}

int main()
{
    cin >> n >> m;
    g.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> g[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == '.' && !vis[i][j])
            {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt;
}