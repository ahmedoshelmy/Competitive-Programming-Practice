#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define eb emplace_back

#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cinarr     for (int i = 0; i < n; ++i) cin>>arr[i]
#define cin(vec) for(auto& i : vec) cin >> i;
#define cout(vec) for(auto& i : vec) cout << i << " ";
#define coutarr for (int i = 0;i<n ; i++) cout<<arr[i]<<" ";
#define coutarrn for (int i = 0;i<n ; i++) cout<<arr[i]<<endl;
#define cingrid  for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin>>grid[i][j];
#define coutgrid  for (int i = 0; i < n; ++i){ for (int j = 0; j < m; ++j) cout<<grid[i][j];cout<<endl;}
#define lp(i, n)    for(int i=0;i<(int)(n);++i)
#define all(v) v.begin(),v.end()
#define  NO re void(cout<<"NO\n");
#define YES re void(cout<<"YES\n");
#define rep for(int i = 0;i<n;i++)
#define popcnt(a) __builtin_popcount(a)
#define clr(v, d)            memset(v, d, sizeof(v))
#define re               return
#define el endl
const ll  INF = 1e17;
#define error re void(cout<<-1<<el);
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
#define P pair<int ,int>
typedef vector<vll> vvll;
#define F first
#define S second
#define ar array
const ll  eps  = 1e-17;
const ll mod = 1e9+7;
const ll N =1000+2;

int dx[]={1,  -1,0,0,1,1,-1,-1}; // down  - up - right - left - down_right - down-left - up _right - up_left
int dy[]={0, 0,1,-1,1,-1,1,-1};
int m ,n;
string dir= "DURL";
int vis[N][N];
char paths [N][N];
vector<vector<char>> grid;
string bfs(int x , int y){
    auto valid = [&](int a , int b) {
        re a >= 0 && b >= 0 && a < n && b < m && !vis[a][b] && grid[a][b]!='#';
    };
    map<char,P> mp ; mp['D']={-1,0}; mp['U']={1,0}; mp['R']={0,-1}; mp['L']={0,1};
    queue<P> q; q.push({x, y}); paths[x][y] =' ';
    while (!q.empty()){
        P p = q.front();
        q.pop();  x = p.F , y = p.S;
        vis[x][y] = 1;
        if(grid[x][y]=='B'){
            string path;
            while (grid[x][y]!='A'){
                path+=paths[x][y]; int old_x  = x ;
                x += mp[paths[x][y]].F , y += mp[paths[old_x][y]].S;
            }
            reverse(all(path));
            re path;
        }
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i] , ny = y + dy[i];
            if(valid(nx,ny)){
                q.push({nx, ny});
                paths[nx][ny] = dir[i];
                vis[nx][ny] = 1;
            }
        }
    }
    re "";
}
void solve(){
    cin>>n>>m; int st_x,st_y;
    grid = vector<vector<char>> (n , vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>grid[i][j];
            if(grid[i][j]=='A') st_x = i , st_y=j;
        }
    }
    string ans = bfs(st_x , st_y);
    if(ans.empty())NO
    cout<<"YES\n";
    cout<<(int)ans.size()<<el;
    cout<<ans<<el;
}
int main(){
    Linguini
    int t = 1;
    while(t--){
        solve();
    }
}
