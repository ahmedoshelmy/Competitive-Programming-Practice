#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
#define ld long double
#define Tsetso ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

const int N = 1e5+10 ,M = 105 ,mod = 1e9+7;
const ll inf = 1e12;
ll mn[N][20], a[N], lg[N];

void buildSparseTable( int n)
{
    for ( int i = 2 ; i <= n ; i++)
        lg[i] = lg[i/2] + 1;

    for ( int i = 0 ; i < n ; i++)
        mn[i][0] = a[i];

    for ( int j = 1 ; j < 20 ; j++)
        for ( int i = 0 ; i + (1<<j) <= n ; i++)
            mn[i][j] = min(mn[i][j-1] , mn[i + (1<<(j-1))][j-1]);
}

// O(log) for sum, min, max, xor, gcd
ll query( int L , int R )
{
    int dist = R - L + 1 ;
    ll ans = 0;
    for ( int j = 19 ; j >= 0 ; j--)
    {
        if((dist>>j)&1)
        {
//            ans = min(ans,mn[L][j]);
            L += (1<<j);
        }
    }
    return ans;
}

int lg2(ll i){
    return __builtin_clzll(1LL) - __builtin_clzll(i);
}


// O(1) for max, min, gcd
ll query2( int L , int R)
{
    int j = lg[R-L+1];
    return min(mn[L][j],mn[R-(1<<j)+1][j]);
}

void testCase() {
    int n ;
    cin >> n;
    for ( int i = 0 ; i < n;  i++)
        cin >> a[i];
    buildSparseTable(n);
    int q;
    cin >> q;
    while(q--)
    {
        int l , r;
        cin >> l >> r;
        cout << query2(l,r) << '\n';
    }
}

int32_t main() {
    Tsetso
    int tc = 1;
//    cin >> tc;
    while(tc--)
        testCase();
}
