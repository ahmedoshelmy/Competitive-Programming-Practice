#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cin(vec) for(auto& i : vec) cin >> i;
#define clr(v, d)            memset(v, d, sizeof(v))
#define re               return

#define el endl
const ll  INF = 1e17;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll N =1e5+5;
int n , k ;
vi v ,w;
int W ;
ll memo[104][N] ;
ll dp(int i  , int wi){
    if(wi==0 || i==n) re 0 ;
    ll & ret = memo[i][wi];
    if(~ret) re ret;
    if(wi - w[i] >=0) ret = max(ret,v[i] + dp(i+1, wi-w[i]));
    re ret = max(ret , dp(i+1,wi));
}
void solve(){
    clr(memo , -1);
    cin>>n>>W; v = w = vi(n);
    for (int i = 0; i < n; ++i) {
        cin>>w[i]>>v[i];
    }
    cout<<dp(0 , W)<<el;
}
int main(){
    Linguini
    int t = 1;
    while(t--){
        solve();
    }
}
