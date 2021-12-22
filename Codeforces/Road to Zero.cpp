#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    ll t,x,y,a,b,val1=0,val2=0;
    cin>>t;
    while(t--){
        val1=0;
        val2=0;
        cin>>x>>y>>a>>b;
    val1+=(abs(x-y)*a);
    if(x<y) val1+=(x*b);
    else val1+=(y*b);

    val2 =((x+y)*a);
    if(val1<val2) cout<<val1;
    else cout<<val2;
    cout<<"\n";
    }
}
