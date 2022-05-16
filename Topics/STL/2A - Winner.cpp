#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cinarr     for (int i = 0; i < n; ++i) cin>>a[i]
#define coutarr for (int i = 0;i<n ; i++) cout<<a[i]<<" ";
#define coutarrn for (int i = 0;i<n ; i++) cout<<a[i]<<endl;
#define cingrid  for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin>>grid[i][j];
#define coutgrid  for (int i = 0; i < n; ++i){ for (int j = 0; j < m; ++j) cout<<grid[i][j];cout<<endl;}
#define lp(i, n)    for(int i=0;i<(int)(n);++i)
#define all(v) v.begin(),v.end()
#define rep for(int i = 0;i<n;i++)
#define re   			return
#define el endl
typedef vector<int> vi;
typedef vector<vi> vvi;
const int N = 1001;
void solve () {
    int n ;
    cin>>n;
    string x ;
    int s;
    map<string,int> scores;
    map<string,vector<pair<int,int>>> all;
    vector<string> winners;
    for (int i = 0; i < n; ++i) {
        cin>>x>>s;
        scores[x] +=s;
        all[x].push_back({i,scores[x]});
    }
    string winner ;
    int mx = INT32_MIN;
    for (auto & u:scores) {
        if(u.second > mx){
            mx = u.second;
            winner = u.first;
            winners.clear();
            winners.pb(u.first);
        }
        else if(u.second == mx){
            winners.pb(u.first);
        }
    }
    int index= all[winner].back().first;
    for (int i = 0; i < winners.size(); ++i) {
        string x = winners[i];
        for (int j = 0; j < all[x].size(); ++j) {
            if(all[x][j].first<index && all[x][j].second>=mx){
                winner = x ;
                index = all[x][j].first;
            }
        }
    }
    cout<<winner;
}

int main()
{
//    Linguini
    int t = 1;
        cin>>t;
    while  (t--){
        solve();
    }
    return  0;
}
