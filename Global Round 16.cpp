#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

int t; ll n,s,ans=0;
cin>>t;
ll sum=0;
while(t--){
    cin>>n>>s;
    ans=0;
    sum=0;
    if(n==1){
            cout<<s<<endl;
            continue;
    }
    if(s==1&&n>1){
        cout<<0<<endl;
        continue;
    }
    ll median;
    if(n%2==0)  median = n/2-1;
    else  median=n/2;

    ans=s/(n-median);
    cout<<ans<<endl;


}
return 0;
}
