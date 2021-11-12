#include <bits/stdc++.h>
using namespace  std;
int k,l,m,n,d;
typedef long long ll;
int main() {
    int n,ca=1234567,co=123456,ho=1234;
    cin>>n;
    for(int j=0;j<=n/co;j++){
    for(int k=0;k<=n/ho;k++){
    for(int i=0;i<=n/ca;i++){


               if(i*ca+j*co+k*ho==n){
                    //cout<<i<<" "<<j<<" "<<k;
                cout<<"YES";
                return 0;
               }
               if(i*ca+j*co+k*ho>n){
                break;
               }
            }
        }
    }
    cout<<"NO";
    return 0;

}


