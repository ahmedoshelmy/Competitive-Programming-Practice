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
#define P pair<int ,int>
typedef vector<vll> vvll;
#define F first
#define S second
#define eps 1e-8
const int N = 1e9+7;

void solve () {
    ll n, x = 0;
    string str;
    while (getline(cin, str)) {
        stringstream is(str);
        vll c;
        while (is >> x) {
            c.pb(x);
        }
        getline(cin, str);
        stringstream iss(str);
        vll xs;
        while (iss >> x) {
            xs.pb(x);
        }
        for(int i = 0 ; i<xs.size();i++){
            ll a = 1;
            ll ans = 0;
            for (int j = c.size() - 1; j >= 0; --j) {
                ans += c[j] * a;
                a *= xs[i];
            }
            if(i!=xs.size()-1)cout << ans << " ";
            else cout<<ans;
    }
        cout<<el;
}
}

int main()
{
//    Linguini
    int t = 1;
//    cin>>t;
    while  (t--){
        solve();
    }
    return  0;
}
