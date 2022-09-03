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
const ll mod = 1e9+7;
const int N = 5e4+9;

int dx[]={1,0,-1,0,1,1,-1,-1}; // down - right - up - left - down_right - down-left - up _right - up_left
int dy[]={0,1,0,-1,1,-1,1,-1};
ll PowMod(ll bs, ll ex, ll M) { if (!ex)re 1; ll p = PowMod((bs*bs) % M, ex >> 1, M); re(ex & 1) ? (p*bs) % M : p; }

string s1 , s2 ;  vvi memo; int test_case;
int  dp (int i, int j){
    if(i == (int)s1.size() || j == (int)s2.size()) {
        re 0;
    }
    int &ret = memo[i][j];
    if(ret==-1) {
        if (s1[i] == s2[j]) {
            ret = 1 + dp(i + 1, j + 1);
            re ret;
        }
        int choice1 = dp(i + 1, j);
        int choice2 = dp(i, j + 1);
        ret = max(choice1, choice2);
    }
    re ret;
}
void solve () {
    while (getline(cin, s1), s1[0] != '#')
    {
        getline(cin, s2);
        memo = vvi(110, vi(110,-1));
        cout << "Case #" << test_case++ << ": you can visit at most " << dp(0, 0) << " cities.\n";
    }
}
int main(){
    Linguini
    int t = 1;
    test_case = 1;
    while  (t--){
        solve();
        test_case++;
    }
    return  0;
}
