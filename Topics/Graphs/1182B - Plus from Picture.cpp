#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cinarr     for (int i = 0; i < n; ++i) cin>>a[i]
#define coutarr for (int i = 0;i<n ; i++) cout<<a[i]<<" ";
#define coutarrn for (int i = 0;i<n ; i++) cout<<a[i]<<endl;
#define cingrid  for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin>>grid[i][j];
#define coutgrid  for (int i = 0; i < n; ++i){ for (int j = 0; j < m; ++j) cout<<grid[i][j];cout<<endl;}
#define lp(i, n)    for(int i=0;i<(int)(n);++i)
#define rep for(int i = 0;i<n;i++)
typedef vector<int> vi;
typedef vector<vi> vvi;
const long long MOD = 1000000007;
const ll N = 501;
char grid[N][N];
int dy [] ={1,-1,0,0};  // 0 for left 1 for right 2 for up 3 for down
int dx [] ={0,0,1,-1};
int n, m;
bool vis[N][N];
bool something_wrong = false;
int downcnt =0 , upcnt= 0, leftcnt =0 , rightcnt = 0 ,dfscnt = 0;
int downafterleftright = 0;
void dfs(int x, int y , int lastdir , int curdir){
    vis[x][y] = true;
    if(curdir ==2) downafterleftright++;
    if(lastdir == curdir){}
    else if(curdir==0) {rightcnt++;downafterleftright = 0;}
    else if (curdir ==1) {leftcnt++;downafterleftright = 0;}
    else if(curdir ==2) {downcnt++;}
    else if(curdir ==3) {upcnt++;}
    int nx , ny ;
    for (int i = 0; i < 4; ++i) {
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx<n && ny<m &&nx>=0 && ny>=0){
            if(grid[nx][ny]=='*'&&!vis[nx][ny]) {
                dfs(nx, ny,curdir , i);
            }
        }
    }

}
void solve () {
   cin>>n>>m;
   cingrid;
//    memset(vis,sizeof vis,false);
//    dfscnt = leftcnt = rightcnt = leftcnt = upcnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(!vis[i][j]&&grid[i][j]=='*'){
                dfs(i,j,-1,-1);
                dfscnt++;
            }
        }
    }
    if(dfscnt == 1&&downcnt == 1 &&rightcnt ==1&&leftcnt==1 && upcnt==0&&downafterleftright>0 ) cout<<"YES\n";
    else cout<<"NO\n";
//    cout<<dfscnt<<" "<<downcnt<<" "<<upcnt<<" "<<leftcnt<<" "<<rightcnt<<" \n";
}
int main()
{
//    fast;
    int t = 1;
     cin>>t;
    while  (t--){
        solve();
    }
    return  0;
}
