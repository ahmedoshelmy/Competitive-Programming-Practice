#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define eb emplace_back

#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v, d)            memset(v, d, sizeof(v))
#define re               return
#define el endl
typedef vector<int> vi;
const ll mod = 1e9+7;
const ll N =1000+2;

int dx[]={1,  -1,0,0,1,1,-1,-1}; // down  - up - right - left - down_right - down-left - up _right - up_left
int dy[]={0, 0,1,-1,1,-1,1,-1};
int m ,n;
vector<vector<char>> grid;
void solve(){
    cin>>n>>m;
    grid = vector<vector<char>>(n,vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin>>grid[i][j];
    }
    ll dp[n+5][m+5];clr(dp,0);
    dp[0][0] = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(grid[i][j]!='.')continue;
            if(i-1>=0&&grid[i-1][j]=='.') dp[i][j] +=dp[i-1][j] , dp[i][j]%=mod;
            if(j-1>=0&&grid[i][j-1]=='.') dp[i][j] +=dp[i][j-1] , dp[i][j]%=mod;
        }
    }
    cout<<dp[n-1][m-1]<<el;
}
int main(){
    Linguini
    int t = 1;
    while(t--){
        solve();
    }
}
