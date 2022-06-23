#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
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
#define clr(v, d)			memset(v, d, sizeof(v))
#define re   			return
#define el endl
#define INF INT64_MAX
#define error re void(cout<<-1<<el);
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
#define F first
#define S second
#define eps 1e-8
const int N = 10000001;

ll gcd(ll a, ll b) { re(b == 0 ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { re((a*b) / gcd(a, b)); }
int dx [] = {1,-1,0,0};
int dy [] = {0,0,1,-1};
void solve () {
int n , m ;cin>>n>>m ;
vector<string> grid(n);
vvi ans(n,vi(m,-1));
vector<pair<int,int>> ones;
    for (int i = 0; i < n; ++i) {
            cin>>grid[i];
        for (int j = 0; j < m; ++j) {
            if(grid[i][j]=='1')ones.pb({i,j});
        }
    }
    auto is_valid=[&](int x , int y){
        re (x<n && y<m &&y>=0 &&x>=0);
    };

    auto  bfs = [&](){
        queue<pair<int,int>> q ;
        for (int i = 0; i < ones.size(); ++i) {
            q.push({ones[i].first,ones[i].second});
            ans[ones[i].first][ones[i].second] = 0;
        }
        pair<int,int> pre[n][m];
        while(!q.empty()){
            int x = q.front().first , y = q.front().second;q.pop();
            for (int i = 0; i < 4; ++i) {
                int  nx = x+dx[i], ny = y+ dy[i];
                if(is_valid(nx,ny)&&ans[nx][ny]==-1&&grid[nx][ny]=='0'){
                    q.push({nx,ny});
                    pre[nx][ny]={x,y};
                    ans[nx][ny] = ans[x][y]+1;
                }
            }
        }
    };
        bfs();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout<<ans[i][j]<<" ";
        }
        cout<<el;
    }
}
int main()
{
    //    freopen("adam.in", "r", stdin);
//    Linguini
    int t = 1;
    cin>>t;
    while  (t--){
        solve();
    }
    return  0;
}
