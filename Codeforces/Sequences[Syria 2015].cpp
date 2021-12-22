#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int main() {
	/* // freopen("window.in", "r", stdin);
	IO;
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    */
    int t,n,val,res[20001],final_max;
    cin>>t;
    memset(res,0,sizeof res);
    while(t--){
        cin>>n;
    memset(res,0,sizeof res);
        int x;
        final_max=0;
        for(int i=0;i<n;i++){
            cin>>x;
            res[x]=res[x-1]+1;
            final_max=max(res[x],final_max);
        }
        cout<<final_max<<"\n";
    }
    return 0;
}
