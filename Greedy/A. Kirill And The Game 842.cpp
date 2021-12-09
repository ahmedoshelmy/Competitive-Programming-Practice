#include <bits/stdc++.h>
using namespace  std;
typedef long long ll;
int main() {
 int l,r,x,y;
 double k;
 cin>>l>>r>>x>>y>>k;
 bool found = false;

    for(int b=x;b<=y&&!found;b++){
        if(b*k >=l&&b*k<=r){
            found = true;
        }
    }

 if(found){
    cout<<"YES";
 } else{
 cout<<"NO";
 }

    return 0;

}


