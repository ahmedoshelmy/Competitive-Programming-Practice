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

int n = 2e5 + 5;
vector<string>passwords(n);
 vector<bool> vischars(n) ;
vector<bool> vis(n) ;
 vector<set<int>>chars(28);
int totNumUpwards;
int cnt = 0;
void dfs(int index){
    if(vischars[index]) return;
    vischars[index]=1;
        set<int>::iterator it = chars[index].begin();
        while(it!=chars[index].end()){
            int r = *it;
            it++;
            if(vis[r]) continue;
            vis[r] =1;
            cnt++;
            string x  = passwords[r];
            for (int i = 0; i < x.size(); ++i) {
                int z = x[i]-'a';
                dfs(z);
            }
        }

}


int main()
{
//    setIO();
    cin>>n;
    string x;
    for (int i = 1; i <= n; ++i) {
        cin>>passwords[i];
        x = passwords[i];
        for (int j = 0; j < x.size(); ++j) {
            chars[x[j]-'a'].insert(i);
        }
    }
    int ans = 0;
    for (int i = 0; i <27 ; ++i){
        cnt = 0;
        dfs(i);
        if(cnt!=0) ans++;
    }
    cout<<ans;
//    system("pause");
    return  0;
}
