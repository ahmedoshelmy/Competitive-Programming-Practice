#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    int x,y,z,sumx=0,sumy=0,sumz=0;
    int n;
    cin>>n;
    while(n--){
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(!sumx && !sumy && !sumz){
        cout<<"YES";
    } else cout<<"NO";
}
