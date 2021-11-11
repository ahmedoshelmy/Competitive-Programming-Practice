#include <bits/stdc++.h>
using namespace  std;

typedef long long ll;
int main() {
ll a,b,c;
cin>>a>>b>>c;
if(c==0){
    if(a==b){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;

}
if(abs(b-a)%abs(c)==0){
    if((c<0&&b<=a)||(c>0&&b>=a))
        cout<<"YES";
    else cout<<"NO";
}else{
cout<<"NO";
}

}
