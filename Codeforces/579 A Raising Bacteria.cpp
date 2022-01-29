#include <bits/stdc++.h>
using namespace  std;
typedef long long ll;

int main() {
    /*
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);*/
  ll x;
  ll ans;
  cin>>x;
  ll y=x;
  ll f = log2(x);
  ll r = x - pow(2,f);
  ans = min(1+r,f+1);
  ans=0;
  for(int i = 32;i>=0;i--){
    if(y-pow(2,i)>=0){
        ans++;
        y-=pow(2,i);
        //cout<<i;
    }
  }
  cout<<ans;
    return 0;
}



