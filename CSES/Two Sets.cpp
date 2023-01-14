#include <bits/stdc++.h>
using namespace std;

using ll = long long;
//#define pb push_back
#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define cinarr     for (int i = 0; i < n; ++i) cin>>arr[i]
#define cin(vec) for(auto& i : vec) cin >> i;
#define cout(vec) for(auto& i : vec) cout << i << " ";
#define coutarr for (int i = 0;i<n ; i++) cout<<arr[i]<<" ";
//#define coutarrn for (int i = 0;i<n ; i++) cout<<arr[i]<<endl;
//#define cingrid  for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin>>grid[i][j];
//#define coutgrid  for (int i = 0; i < n; ++i){ for (int j = 0; j < m; ++j) cout<<grid[i][j];cout<<endl;}
//#define lp(i, n)    for(int i=0;i<(int)(n);++i)
//#define all(v) v.begin(),v.end()
//#define           NO    cout << "NO\n"
#define rep for(int i = 0;i<n;i++)
#define clr(v, d)			memset(v, d, sizeof(v))
#define all(v)				((v).begin()), ((v).end())

#define re   			return
#define el endl
const int  INF = 1e8 ;
const ll mod = 2000000011;
#define error re void(cout<<-1<<el);
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
#define X 				first
#define Y 				second
#define pb					push_back
#define MP					make_pair
const int N = 5e4+5;

void solve () {
    ll n ; cin>>n ;int y =-1;
    ll sum = n * (n+1)/2;
    if(sum&1) re void(cout<<"NO\n");
    ll s1 = 0 ;  int x = n ;  vi v1  , v2;
    while(s1+x <= sum/2) s1 +=x , v1.pb(x),x-- ;
    if(s1 != sum/2) v1.pb(sum/2 -s1) , y=sum/2-s1;
    for (int i = 1; i <=x; ++i) if(i!=y)v2.push_back(i);
    cout<<"YES\n";
    cout<<v1.size()<<el;    
    cout(v1) cout<<el;
    cout<<v2.size()<<el;
    cout(v2) cout<<el;
}
int main()
{
    Linguini
    int t = 1;
    for (int i = 1; i <=t; ++i) {
        solve();
    }
    return  0;
}
