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
#define eps 1e-8
const ll mod = 1e9+7;
const ll N =100;

int dx[]={1,0,-1,0,1,1,-1,-1}; // down - right - up - left - down_right - down-left - up _right - up_left
int dy[]={0,1,0,-1,1,-1,1,-1};
ll PowMod(ll bs, ll ex, ll M) { if (!ex)re 1; ll p = PowMod((bs*bs) % M, ex >> 1, M); re(ex & 1) ? (p*bs) % M : p; }

string s1 , s2; int n1,n2;
int dp[N][N] ;
int edit_distance(int i ,int j){
    if(i == n1 ) re n2 - j;
    if(j == n2 ) re n1 - i;
    int & ret = dp[i][j] ;
    if(~ ret) re ret;
    if(s1[i] == s2[j]) re ret = edit_distance(i+1 , j+1) ;
    int Insert = 1 + edit_distance(i , j+1) ;
    int Delete = 1 + edit_distance(i+1 , j) ;
    int Replace = 1 + edit_distance(i+1 , j+1) ;
    re ret = min({Insert, Delete, Replace});
}
int idx =  1; int shift = 0 ;
void build_output(int i  , int j) {
    if (i == n1) {
        for (int k = 0; k < n2 - j; ++k) {
            cout << idx++ << " Insert " << i + k + 1 + shift << "," << s2[j + k] << el;
        }
        shift+=(n2-j);
        re;
    }
    if (j == n2) {
        for (int k = 0; k < n1 - i; ++k) {
            cout << idx++ << " Delete " << i + k + 1 + shift << el;
            shift--;
        }
        re;
    }
    if(s1[i] == s2[j]){
        build_output(i+1 , j+1);
        re;
    }
    int Insert = 1 + edit_distance(i , j+1) ;
    int Delete = 1 + edit_distance(i+1 , j) ;
    int Replace = 1 + edit_distance(i+1 , j+1) ;

    int best = edit_distance(i,j);
    if(best == Insert){
        cout << idx++ << " Insert " << i + 1 + shift << "," << s2[j] << el;
        shift++;
        build_output(i , j+1) ;
    }else if(best == Delete){
        cout << idx++ << " Delete " << i + 1 + shift << el;
        shift--;
        build_output(i+1 , j );
    }else{
        cout << idx++ << " Replace " << i +1 + shift << "," << s2[j] << el;
        build_output(i+1 , j+1);
    }

}
bool first = true;
void solve(){
    while(getline(cin,s1)){
        getline(cin,s2);
        n1 = (int)s1.size() , n2 = (int)s2.size();
        clr(dp , -1);
        if(!first)cout<<el;
        cout<<edit_distance(0,0)<<el;
        build_output(0,0);
        shift = 0 , idx = 1;
        first = false;
    }
}
int main(){
    Linguini
    int t = 1;
    while(t--){
        solve();
    }
}
