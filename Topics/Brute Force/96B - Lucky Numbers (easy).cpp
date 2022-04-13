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
vector<ll> v;
void func(int n, ll z,int fours, int sevens,int cnt){
    if(cnt==n){
        if(fours == sevens)
        v.push_back(z);
        return;
    }
    func(n,z*10+4,fours+1,sevens,cnt+1);
    func(n,z*10+7,fours,sevens+1,cnt+1);
}
void solve(){
    v.clear();
    ll x ;
    cin>>x;
    string y = to_string(x);
    int n =y.size();
    if(y.size()%2== 1)n++;
    func(n,0,0,0,0);
    int ans = lower_bound(v.begin(),v.end(),x)- v.begin();
    if(ans>=v.size()){
        v.clear();
        func(n+2,0,0,0,0);
    }
    ans = lower_bound(v.begin(),v.end(),x)- v.begin();
    cout<<v[ans];
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
