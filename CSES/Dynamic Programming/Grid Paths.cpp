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
#define eps 1e-8
const ll mod = 1e9+7;
const ll N = 1e12+5;

int dx[]={1,0,-1,0,1,1,-1,-1}; // down - right - up - left - down_right - down-left - up _right - up_left
int dy[]={0,1,0,-1,1,-1,1,-1};
ll PowMod(ll bs, ll ex, ll M) { if (!ex)re 1; ll p = PowMod((bs*bs) % M, ex >> 1, M); re(ex & 1) ? (p*bs) % M : p; }



void solve(){
    int n ; cin>>n ;
    vector<vector<char>> grid(n , vector<char>(n)) ;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) cin>>grid[i][j];
    ll dp[n+1][n+1];
    clr(dp,0); dp[0][0] = grid[0][0] == '.' ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            dp[i][j]%=mod;
            if(i<n-1&&grid[i+1][j]=='.')dp[i+1][j]+=dp[i][j];
            if(j<n-1&&grid[i][j+1]=='.')dp[i][j+1]+=dp[i][j];
        }
    }
    cout<<dp[n-1][n-1]<<el;
}
int main(){
//    Linguini
    int t = 1;
    while(t--){
        solve();
    }
}
