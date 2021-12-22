#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
ll n,a,b,x,r;
ld d;
cin>>n>>a>>b;
while(n--){
    cin>>x;
    d=x*a/b;
  //  cout<<d;
    r=x-d*b/a;
    cout<<r<<" ";;
}

return 0;
}
