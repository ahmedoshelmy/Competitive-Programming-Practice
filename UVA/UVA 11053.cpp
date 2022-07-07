#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cin(vec) for(auto& i : vec) cin >> i;
#define cout(vec) for(auto& i : vec) cout << i << " ";
#define re   			return
#define el endl
#define INF INT64_MAX
#define error re void(cout<<-1<<el);
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
const int N = 50003;
const int Mod = 1e9+7;
void solve () {
ll n , a , b ; cin>>n;
while(n!=0) {
    cin>>a>>b;
    ll x = 0;
    ll cnt = 1e6;
    map<ll, ll> vis;
    ll ans = 0;
    while (cnt--) {
        if (vis[x] == 2) break;
        if (vis[x]) ans++, vis[x] = 2;
        else vis[x] = 1;
        x = (a * x) % n * x + b;
        x %= n;
    }
    cout << n - ans << el;
    cin>>n;
}
}
int main()
{
    Linguini
    int t = 1;
//    cin>>t;
 while  (t--){
        solve();
    }
    return  0;
}
