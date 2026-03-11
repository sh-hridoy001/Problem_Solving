#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
int n, m;
int di, dj;
bool found = false;

vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i,int j){
    return i>=0 && i<n && j>=0 && j<m;
}

void dfs(int i,int j){
    if(!valid(i,j) || vis[i][j] || grid[i][j]=='#') return;
    if(i==di && j==dj){
        found = true;
        return;
    }

    vis[i][j] = true;

    for(int k=0;k<4;k++){
        int ni = i + d[k].first;
        int nj = j + d[k].second;
        dfs(ni,nj);
    }
}

int main(){
    cin >> n >> m;
    int si,sj;

    for(int i=0;i<n;i++){
        string line;
        cin >> line;
        for(int j=0;j<m;j++){
            grid[i][j] = line[j];
            if(grid[i][j]=='A'){ si=i; sj=j; }
            if(grid[i][j]=='B'){ di=i; dj=j; }
        }
    }

    memset(vis,false,sizeof(vis));
    dfs(si,sj);

    cout << (found ? "YES" : "NO") << endl;
    return 0;
}