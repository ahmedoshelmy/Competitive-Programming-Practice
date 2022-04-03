
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
int solve (ll k, ll n, ll a , ll b){
    if( k  -n*b <=  0) return -1;
    ll r = n;
    ll l = 0;
    ll mid;
    ll ans =  -1;
    while(l<=r){
        mid = l + (r-l)/2;
        ll newk = k - mid*a;
//        cout<<l<<" "<<mid<<" "<<r<<"      "<<newk<<endl;
        if(newk<=b*(n-mid)){
            r = mid-1;
        }else{
            ans = mid;
            l = mid+1;
        }
    }
    return ans;
}
int main()
{
//    setIO();
ll t,k,n,a,b;
cin>>t;
while(t--){
    cin>>k>>n>>a>>b;
    cout<<solve(k,n,a,b)<<endl;
}
//    system("pause");
    return  0;
}
