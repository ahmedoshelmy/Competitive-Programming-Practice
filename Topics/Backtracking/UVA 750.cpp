#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using ll = long long;
#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v, d)			memset(v, d, sizeof(v))
#define cout(vec) for(auto& i : vec) cout << i << " ";
#define all(v) v.begin(),v.end()
#define  NO re void(cout<<"NO\n");
#define YES re void(cout<<"YES\n");
#define rep for(int i = 0;i<n;i++)
#define popcnt(a) __builtin_popcount(a)
#define clr(v, d)            memset(v, d, sizeof(v))
#define re return
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
const int N = 2e2+5;
typedef tree<
        int,
        null_type,
        less<int>,
        rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_set;
int grid[8][8];
vi which_row ;
bool valid(int x , int y){
    for (int col = 0; col < 8; ++col) {
        if(col == y) continue;
        if(which_row[col] == x+1) re false;
        if(which_row[col] &&  abs(x - (which_row[col]-1)) == abs(y - col)) re false;
    }
    re true;
} int t_case;
void brute(int col){
    if(col == 8){
        printf("%2d      ", ++t_case);
        printf("%d", which_row[0] );
        for (int i = 1; i < 8; i++)
            printf(" %d", which_row[i] );
        puts("");
        re;
    }
    if(which_row[col]) { brute(col + 1); re;}
    for (int i = 0; i < 8; ++i) {
        if(valid(i , col)){
           which_row[col] = i+1 ;
            brute(col+1) ;
            which_row[col] = 0 ;
        }
    }
}

void solve() {
    int x , y ;
    cin>>x>>y; x--,y--;
    grid[x][y]=1; which_row.assign(8,0);
    which_row[y] = x+1;
    brute(0);
}
int main()
{
    Linguini
    int t = 1;
    cin>>t;
    for (int i = 1; i <=t; ++i) {
        t_case = 0 ;
        if (i>1) puts("");
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        solve();
    }
    return  0;
}
