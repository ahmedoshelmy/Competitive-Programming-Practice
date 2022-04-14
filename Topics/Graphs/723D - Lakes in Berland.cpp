#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void setIO()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
}
ll n,m,k;
char graph[52][52];
bool vis[52][52];
int dx[ ]= {0,0,-1,1};
int dy[ ]= {1,-1,0,0};
bool isValid(int x, int y){
    if(x<1||y<1||x>n||y>m) return false;
    return true;
}
int cells = 0;
bool isLake = false;
bool edge(int x,int y){
    if(x==n||y==m||x==1||y==1) return true;
    return false;
}
vector<pair<int,pair<int,int>>> lakes;
void dfs(int x, int y){
    if(vis[x][y]) return;
    vis[x][y] = true;
    if(edge(x,y)) isLake =false;
    cells++;
    for (int i = 0; i < 4; ++i) {
        int newx = x +dx[i];
        int newy = y+ dy[i];
        if(isValid(newx,newy)){
            if(graph[newx][newy]=='.') {
                dfs(newx, newy);
            }
        }
    }
}

void dfs2(int x, int y){
    if(vis[x][y]||graph[x][y]=='*') return;
    vis[x][y] = true;
    graph[x][y] = '*';
    for (int i = 0; i < 4; ++i) {
        int newx = x +dx[i];
        int newy = y+ dy[i];
        if(isValid(newx,newy)){
            if(graph[newx][newy]=='.')
                dfs2(newx,newy);
        }
    }
}
void solve(){
   cin>>n>>m>>k;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin>>graph[i][j];
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cells = 0;
            isLake = true;
            if(graph[i][j]=='.'&&!vis[i][j]) {
                dfs(i, j);
                if(isLake)
                lakes.push_back({cells,{i,j}});
            }
        }
    }
    sort(lakes.begin(),lakes.end());
    int ans = 0;
    memset(vis,0,sizeof vis);
    for (int i = 0; i < lakes.size()-k; ++i) {
        ans+=lakes[i].first;
        dfs2(lakes[i].second.first,lakes[i].second.second);
    }
    cout<<ans<<endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cout<<graph[i][j];
        }
        cout<<endl;
    }
}

int main()
{
//    setIO();
    ll t=1;
//    cin>>t;
    while  (t--){
        solve();
    }
//    system("pause");
    return  0;
}
