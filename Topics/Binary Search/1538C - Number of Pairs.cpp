#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void setIO()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
}
ll n,l,r;
void solve(){
    cin>>n>>l>>r;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll ans = 0;
    for (ll i = 0; i < n-1; ++i) {
        ll search = r- a[i];
        ll least = n+1, biggest = -1;
        ll start = i+1, end = n-1,mid;
        while(start<=end){
            mid = start + (end- start)/2;
            if(a[mid]>search){
                end = mid - 1;
            }else{
                start = mid+1;
                biggest = mid;
            }
        }
        start = i+1; end = n-1;
         search = l-a[i];
        while(start<=end){
            mid = start + (end- start)/2;
            if(a[mid] <search){
                start = mid + 1;
            }
            else{
                end = mid-1;
                least = mid;
            }
        }
//            cout<<least<<" "<<biggest<<endl;
        if(biggest<0||least>biggest) continue;
            ans += (biggest-least+1);
        // ans+=tans;
    }
    cout<<ans<<endl;
}

int main()
{
//    setIO();
    ll t;
    cin>>t;
    while  (t--){
        solve();
    }
//    system("pause");
    return  0;
}
