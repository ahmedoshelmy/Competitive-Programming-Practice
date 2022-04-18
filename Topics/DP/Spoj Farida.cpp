#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;

#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cinarr     for (int i = 0; i < n; ++i) cin>>a[i]
void setIO()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
}
int c = 1;
void solve(){
    int n;
    cin>>n;
    ll a[10001];
    ll dp[10001];
    for(int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    dp[0] = a[0];
    dp[1] = max(dp[0],a[1]);
    for (int i = 2; i < n; ++i) {
        dp[i] = max(dp[i-2]+a[i],dp[i-1]);
    }
    printf("Case %d: %lld\n",c, dp[n-1]);
    c++;
}
int main()
{
//    setIO();
    int t = 1;
    cin>>t;
    while  (t--){
        solve();
    }
//    system("pause");
    return  0;
}
