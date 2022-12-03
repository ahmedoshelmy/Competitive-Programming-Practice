#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define eb emplace_back

#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cinarr     for (int i = 0; i < n; ++i) cin>>arr[i]
#define cin(vec) for(auto& i : vec) cin >> i;
#define cout(vec) for(auto& i : vec) cout << i << " ";
#define coutarr for (int i = 0;i<n ; i++) cout<<arr[i]<<" ";
#define coutarrn for (int i = 0;i<n ; i++) cout<<arr[i]<<endl;
#define cingrid  for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin>>grid[i][j];
#define coutgrid  for (int i = 0; i < n; ++i){ for (int j = 0; j < m; ++j) cout<<grid[i][j];cout<<endl;}
#define lp(i, n)    for(int i=0;i<(int)(n);++i)
#define all(v) v.begin(),v.end()
#define  NO re void(cout<<"NO\n");
#define YES re void(cout<<"YES\n");
#define rep for(int i = 0;i<n;i++)
#define popcnt(a) __builtin_popcount(a)
#define clr(v, d)            memset(v, d, sizeof(v))
#define re               return
#define el endl
const ll  INF = 1e17;
#define error re void(cout<<-1<<el);
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
#define P pair<int ,int>
typedef vector<vll> vvll;
#define F first
#define S second
#define ar array
const ll  eps  = 1e-17;
const ll mod = 1e9+7;
const ll N =2e5+2;

int dx[]={1,-1 , 0,0,1,1,-1,-1}; // down - up - right - left - down_right - down-left - up _right - up_left
int dy[]={0,0, 1,-1,1,-1,1,-1};


int n ;
ar<int , 3> a [N] ;
void solve(){
cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i][1]>>a[i][0]>>a[i][2]; // making the end of each project the first to sort the array easily
    }
sort(a , a+n);
ll ans  = 0 ;
set<pair<ll,ll>> dp;
dp.insert({0,0});
    for (int i = 0; i < n; ++i) {
        int st = a[i][1] , en = a[i][0] , price = a[i][2] ;
        auto it = dp.lower_bound({st,0});
        it--;
        ans = max(ans , (*it).S  + price);
        dp.insert({en , ans});
    }
    cout<<ans<<el;
}

int main(){

    Linguini
    int t = 1;
    while(t--){
        solve();
    }
}
