#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define re   			return
#define el endl
typedef vector<int> vi;
typedef vector<vi> vvi;
#define pb					push_back
const int N = 1e6+1 ;
const int mod = 1e9+7 ;
ll fact[N];
ll fastExp(ll p , ll n){
    if(n == 0) return 1  ;
    ll u = fastExp(p , n/2)%mod;
    u = (u*u)%mod;
    if(n&1) u = (u*p)%mod;
    return  u ;
}
ll modInv(ll x){
    return fastExp(x , mod-2)%mod;
}
ll nCr(ll n , ll r){
    if(n < r) re 0 ;
    re ((fact[n] * modInv(fact[n-r]))%mod * modInv(fact[r]))%mod;
}
ll nPr(ll n , ll r){
    if(n < r) re 0 ;
    re fact[n] * modInv(fact[n-r])%mod ;
}
void solve () {
    int n ; cin>>n ; fact[0] = 1; if(n&1) re void(cout<<0<<el);
    for (int i = 1; i <= n; ++i) fact[i] = fact[i-1]*i%mod;
    ll ans = (nCr(n , n/2) - nCr(n , n/2-1) + mod)%mod ;
    cout<<ans<<el;
}
int main()
{
    Linguini
    int t = 1;
    for (int i = 1; i <=t; ++i) solve();
    return  0;
}
