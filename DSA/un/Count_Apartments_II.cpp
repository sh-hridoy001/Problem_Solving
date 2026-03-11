// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> g;
bool vis[1005][1005];

int dfs(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
    {
        return 0;
    }
    if (g[x][y] == '#' || vis[x][y])
    {
        return 0;
    }

    vis[x][y] = true;

    int cnt = 1;

    cnt += dfs(x + 1, y);
    cnt += dfs(x - 1, y);
    cnt += dfs(x, y + 1);
    cnt += dfs(x, y - 1);

    return cnt;
}

int main()
{
    cin >> n >> m;
    g.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> g[i];
    }

    vector<int> aprtment;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == '.' && !vis[i][j])
            {
                int roomCnt = dfs(i, j);
                aprtment.push_back(roomCnt);
            }
        }
    }

    sort(aprtment.begin(), aprtment.end());
    if (aprtment.empty())
    {
        cout << 0;
        return 0;
    }
    for (int x : aprtment)
    {
        cout << x << " ";
    }
}