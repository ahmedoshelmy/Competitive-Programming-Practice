#include <bits/stdc++.h>
using namespace  std;

typedef long long ll;
int main() {

int x,n,cnt=0;
cin>>n>>x;

for(int i=1;i<=sqrt(x);i++){
    if(x%i==0&&x/i<=n){
        cnt++;
    }
}
cnt*=2;
int z=sqrt(x);
if(z*z==x&&cnt)cnt--;
cout<<cnt;
}


