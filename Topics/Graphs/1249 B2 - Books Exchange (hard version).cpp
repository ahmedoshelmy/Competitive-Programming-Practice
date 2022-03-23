
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll p[200005];
ll ans[200005];
vector<bool> vis;
ll current ;
ll rounds = 0;

void setIO()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
}
void dfs(ll n){
    rounds++;
    if(current == p[n]){
        ans[n] =rounds;
        return;
    }
    dfs(p[n]);
    ans[n] = rounds;
}
int main()
{
//    setIO();
    int q;
    cin>>q;
    int n;
    while(q--){
        cin>>n;
        for (int i = 1; i <= n; ++i) {
            cin>>p[i];
            ans[i]=0;
        }
        for (int i = 1; i <= n; ++i) {
            if(ans[i]==0) {
                rounds = 0;
                current = i;
                dfs(i);
            }
        }
        for (int i = 1; i <=n ; ++i) {
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
//    system("pause");
    return  0;
}
