    #include <bits/stdc++.h>
    #include <algorithm>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
    using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
    using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
    using namespace std;
    using ll = long long;
    #define pb push_back
    #define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define cinarr     for (int i = 0; i < n; ++i) cin>>a[i]
    #define coutarr for (int i = 0;i<n ; i++) cout<<a[i]<<" ";
    #define coutarrn for (int i = 0;i<n ; i++) cout<<a[i]<<endl;
    #define cingrid  for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin>>grid[i][j];
    #define coutgrid  for (int i = 0; i < n; ++i){ for (int j = 0; j < m; ++j) cout<<grid[i][j];cout<<endl;}
    #define lp(i, n)    for(int i=0;i<(int)(n);++i)
    #define rep for(int i = 0;i<n;i++)
    #define el endl
    typedef vector<int> vi;
    typedef vector<vi> vvi;
    const long long MOD = 1e9+7;
    const int N = 32768;



long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
