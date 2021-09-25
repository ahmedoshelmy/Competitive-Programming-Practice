#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;


ll remove_0(ll x){
    ll result=0;
while(x>0){
    if(x%10!=0){
        result*=10;
        result+=(x%10);
    }
    x/=10;
}
return result;
}
ll revers(ll x){
ll result=0;
while(x>0){
        result*=10;
        result+=(x%10);
    x/=10;
}
return result;

}

int main(){
ll a,b,sum;
cin>>a>>b;
sum=a+b;
a=remove_0(a);
a=revers(a);
b=remove_0(b);
b=revers(b);
sum=remove_0(sum);
sum=revers(sum);
if(a+b==sum){
    cout<<"YES";
}
else{
cout<<"NO";

}

return 0;
}
