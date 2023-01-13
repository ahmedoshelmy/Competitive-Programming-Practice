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
    vector<vector<char>> grid(3 , vector<char>(3));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) cin>>grid[i][j] ;
    }
    vector<pair<int,int>> x  , o;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if(grid[i][j] == 'X') x.pb({i, j});
                else if(grid[i][j] == 'O')o.pb({i,j});
            }
        } int x_wins = 0 , o_wins = 0 ;
        for (int i = 0; i < o.size(); ++i) {
            for (int j = i+1; j < o.size(); ++j) {
                for (int k = j+1; k < o.size(); ++k) {
                    if(o[j].first - o[i].first == o[k].first - o[j].first && o[j].second - o[i].second == o[k].second - o[j].second )o_wins++;
                }
            }
        }
        for (int i = 0; i < x.size(); ++i) {
            for (int j = i+1; j < x.size(); ++j) {
                for (int k = j+1; k < x.size(); ++k) {
                    if(x[j].first - x[i].first == x[k].first - x[j].first && x[j].second - x[i].second == x[k].second - x[j].second )x_wins++;
                }
            }
        }
        int o_cnt = o.size() , x_cnt = x.size();
        if(o_wins && x_wins) re void(cout<<"no\n");
        if(o_wins && o_cnt != x_cnt) re void(cout<<"no\n");
        if(x_wins && o_cnt+1 != x_cnt) re void(cout<<"no\n");
        if(o_cnt > x_cnt) re void (cout<<"no\n");
        cout<<"yes\n";
}
int main()
{
    Linguini
    int t = 1; cin>>t;
    for (int i = 1; i <=t; ++i) {
        solve();
    }
    return  0;
}
