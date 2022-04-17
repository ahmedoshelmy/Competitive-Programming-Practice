#include <bits/stdc++.h>
#include <algorithm>
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
void solve(){
 int n;
 cin>>n;
 int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int lastpos[100001];
    int lastdist[100001];
    memset(lastpos,-1,sizeof lastpos);
    memset(lastdist,-1,sizeof lastdist);
    lastpos[0]= 0;
    int eliminated = 0;
    int unique[100001];
    memset(unique,-1,sizeof lastpos);
    int uniques = 0 ;
    for (int i = 0; i < n; ++i) {
        if(unique[a[i]]==-1){
            uniques++;
            unique[a[i]]=1;
        }
        if(lastdist[a[i]]==-2){
            continue;
        }
        if(lastpos[a[i]]==-1){
            lastpos[a[i]]  = i;
            continue;
        }
        else{
        if(lastdist[a[i]]!=-1){
            if(i-lastpos[a[i]]!=lastdist[a[i]]){
                eliminated++;
                lastdist[a[i]] = -2;
            }
        }    else{
            lastdist[a[i]] = i-lastpos[a[i]];
        }
        }
        lastpos[a[i]] = i;
    }
    cout<<uniques-eliminated<<endl;
    for (int i = 1; i <=100000 ; ++i) {
        if(lastpos[i]!=-1)
        if(lastdist[i]!=-2){
            if(lastdist[i]==-1)lastdist[i]=0;
            cout<<i<<" "<<lastdist[i]<<endl;
        }
    }

}

int main()
{
//    setIO();
    ll t=9;
//    cin>>t;
    while  (t--){
        solve();
    }
//    system("pause");
    return  0;
}
