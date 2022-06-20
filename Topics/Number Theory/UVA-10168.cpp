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
bitset<N> isprime;
vector<ll> primes;
void solve () {
    ll x ;
    while(cin >> x) {
           if(x<8) cout<<"Impossible.\n";
           else{
               // Goldbach's conjecture, every even number >= 4 can be represented as two prime
               if(x&1){
                   cout<<"2 3 ";x-=5;
                   for(int y : primes) {
                       if(isprime[x-y]) {
                           cout << y << " " << x-y << "\n";
                           break;
                       }
                   }
               }else{
                   cout<<"2 2 ";x-=4;
                   for(int y : primes) {
                       if(isprime[x-y]) {
                           cout << y << " " << x-y << "\n";
                           break;
                       }
                   }
               }
           }
    }
}
void Seive(){
    isprime.set();isprime[0] = isprime[1] = false;
    for(ll i=2;i<N;i++) {
        if(!isprime[i]) continue;
        primes.push_back(i);
        for(ll j=i*i;j<N;j+=i) isprime[j] = false;
    }
}

int main()
{
    //    freopen("adam.in", "r", stdin);
//    Linguini
    int t = 1;
//    cin>>t;
    Seive();
    while  (t--){
        solve();
    }
    return  0;
}
