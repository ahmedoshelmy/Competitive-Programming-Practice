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
const ll  eps  = 1e-17;
const ll mod = 1e9+7;
const ll N =1e5+9;

int dx[]={1,0,-1,0,1,1,-1,-1}; // down - right - up - left - down_right - down-left - up _right - up_left
int dy[]={0,1,0,-1,1,-1,1,-1};


vi a , b,c ; int n,k ;
int  dp[N][3];
void solve(){
cin>>n ;clr(dp , 0);a = vi(n) ; b = vi(n);  c = vi(n);
    for (int i = 0; i < n; ++i) cin>>a[i]>>b[i]>>c[i];
dp[0][0] = a[0] , dp[0][1] = b[0] ; dp[0][2] = c[0] ;
dp[1][0] = max({dp[0][0], dp[0][2] + a[1],a[1]+dp[0][1]}); dp[1][1] = max({dp[0][1], dp[0][2]+b[1],dp[0][0]+b[1]}); dp[1][2] = max(
            {dp[0][2], dp[0][0]+c[1],dp[0][1]+c[1]});
    for (int i = 2; i <n ; ++i) {
        dp[i][0] = max({dp[i - 2][0], dp[i-1][1]+a[i] , dp[i-1][2]+a[i]});
        dp[i][1] = max({dp[i - 2][1], dp[i-1][2]+b[i], dp[i-1][0]+b[i]});
        dp[i][2] = max({dp[i - 2][2], dp[i-1][0]+c[i], dp[i-1][1]+c[i]});
    } dp[n][0] = max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
cout<<dp[n][0]<<el;
}
int main(){
    Linguini
    int t = 1;
    while(t--){
        solve();
    }
}
