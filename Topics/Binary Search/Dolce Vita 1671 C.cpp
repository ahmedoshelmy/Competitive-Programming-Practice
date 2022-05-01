#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cinarr     for (int i = 0; i < n; ++i) cin>>a[i]
#define coutarr for (int i = 0;i<n ; i++) cout<<a[i]<<" ";
#define coutarrn for (int i = 0;i<n ; i++) cout<<a[i]<<endl;
#define rep for(int i = 0;i<n;i++)
const long long MOD = 1000000007;
const ll N = 2e9;

void solve () {
ll n,x;
cin>>n>>x;
vector<ll> a(n);
cinarr;
 ll  ans  = 0 ;
sort(a.begin(),a.end());
    vector<ll>s(n);
    s[0] =a[0];
    for (int i = 1; i < n; ++i) {
        s[i] = s[i-1] +a[i];
    }
for(int i = 0; i < n ; i++) {
    ll mid, l = 0, r = N;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (s[i]  +  mid*(i+1) > x) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
//    cout<<l<<" "<<r<<endl;
    ans+= l;
}
cout<<ans<<endl;
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
