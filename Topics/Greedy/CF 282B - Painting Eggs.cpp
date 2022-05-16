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
    ll gs = 0 , as = 0 ,ax ,gx, d = 0;
    string ans = "";
    for (int i = 0; i < n; ++i) {
        cin>>ax>>gx;
        if(as <= gs && d+ax <500 || d -gx < -500){
            as += ax;
            cout<<'A';
        }else{
            gs+=gx;
           cout<<'G';
        }
        d = as - gs;
    }
   
}

int main()
{
    Linguini
    int t = 1;
//        cin>>t;
    while  (t--){
        solve();
    }
    return  0;
}
