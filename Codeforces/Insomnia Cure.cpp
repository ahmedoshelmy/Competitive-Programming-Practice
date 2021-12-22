#include <bits/stdc++.h>
using namespace  std;
int k,l,m,n,d;
typedef long long ll;
int main() {
cin>>k>>l>>m>>n>>d;
int ans=0;
for(int i=1;i<=d;i++){
    if(!(i%m)||!(i%l)||!(i%k)||!(i%n)){
        ans++;
    }
}
cout<<ans;
}


