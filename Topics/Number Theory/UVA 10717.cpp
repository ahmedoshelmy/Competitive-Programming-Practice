#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
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
#define clr(v, d)			memset(v, d, sizeof(v))
#define re   			return
#define el endl
#define INF INT64_MAX
#define error re void(cout<<-1<<el);
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
#define F first
#define S second
#define eps 1e-8
const int N = 10000001;

ll gcd(ll a, ll b) { re(b == 0 ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { re((a*b) / gcd(a, b)); }

void solve () {
   int n =1, t = 1;
   while(!(n==0 && t==0)){
       cin>>n>>t; vi ns(n) , ts(t);
       vi lcms ;
      cin(ns) cin(ts)
       for (int i = 0; i < n-3; ++i) {
           for (int j = i+1; j < n-2; ++j) {
               int lij = lcm(ns[i],ns[j]);
               for (int k = j+1; k <n-1; ++k) {
                   int lijk = lcm(lij,ns[k]);
                   for (int l = k+1; l < n; ++l) {
                       int lijkl = lcm(lijk,ns[l]);
                            lcms.pb(lijkl);
                   }
               }
           }
       }
       for (int i = 0; i < t; ++i) {
           int ti = ts[i];
           int ans1=  -1, ans2 = INT32_MAX;
           for (int j = 0; j < lcms.size(); ++j) {
               int p =  ti / lcms[j];
               int u =p * lcms[j];
               int z = (p+(ti%lcms[j]!=0))*lcms[j];
               ans1 = max(u,ans1);
               ans2 = min(z,ans2);
           }
           cout<<ans1<<" "<<ans2<<el;
       }

   }
}
int main()
{
    //    freopen("adam.in", "r", stdin);
    Linguini
    int t = 1;
//    cin>>t;
    while  (t--){
        solve();
    }
    return  0;
}
