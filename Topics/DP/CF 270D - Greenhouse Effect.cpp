#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define clr(v, d)            memset(v, d, sizeof(v))
#define re               return
#define el endl
typedef vector<int> vi;

void solve(){
    int n,m  ; cin>>n>>m ; double x;
     vi a(n); int dp[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i]>>x;
    }
    for (int i = 0; i < n; ++i) dp[i] = 1 ;  // The longest non=decreasing subsequence of one element is 1 
    for (int i = n-1; i >=0; --i) {
        for (int j = i+1; j < n ; ++j) {
            if(a[j] >= a[i]) dp[i] = max(dp[i] , dp[j] +1);
        }
    }
    int mx = *max_element(dp , dp+n); // longest non=decreasing subsequence
    cout<<n-mx<<el;
}
int main(){
    Linguini
    int t = 1;
    while(t--){
        solve();
    }
}
