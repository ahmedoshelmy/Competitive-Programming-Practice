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
ll n,m,k;

map<ll,vector<ll>> adj;
vector<ll> ans;
map<ll,bool> vis;
void dfs(ll city){
    if(vis[city]) return;
    vis[city] = true;
    ans.push_back(city);
    for (int i = 0; i < adj[city].size(); ++i) {
        dfs(adj[city][i]);
    }
}
void solve(){
   cin>>n;
   ll x,y;
    for (int i = 0; i < n; ++i) {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    map<ll,vector<ll>>::iterator it = adj.begin();
    for (; it!=adj.end(); it++) {
        for (int i = 0; i < it->second.size(); ++i) {
            ll ci = it->second[i];
            if(adj[ci].size()==1){
                dfs(ci);
            }
        }
    }
    for (auto c:ans){
        cout<<c<<" ";
    }
}

int main()
{
//    setIO();
    ll t=1;
//    cin>>t;
    while  (t--){
        solve();
    }
//    system("pause");
    return  0;
}
