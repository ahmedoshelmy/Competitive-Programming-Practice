#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define re   			return
#define el endl
typedef vector<int> vi;
typedef vector<vi> vvi;
#define pb					push_back
int ans =  0 ;  // 1 for stan 2 for ollie
void dfs(ll x , ll y , bool turn){
    if(ans) re ;
    if (x < y) swap(x, y); //x is the biggest
    if(x%y==0)re void(ans = turn+1);
    if (x >= 2 * y) re void(ans = turn+1);
    dfs(x - (x/y)*y , y, !turn);
}
void solve () {
    ll x , y ; int turn  = 1 ;
    while(cin>>x>>y ) {
        ans = 0 ; if(!x && !y) break;
        dfs(x , y ,  0 );
        if(ans == 1) cout<<"Stan wins"<<el;
        else cout<<"Ollie wins"<<el;
    }
}
int main()
{
    int t = 1;
    for (int i = 1; i <=t; ++i) solve();
    return  0;
}
