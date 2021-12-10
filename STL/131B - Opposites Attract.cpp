#include <bits/stdc++.h>
using namespace  std;
typedef long long ll;
ll sumfrom0(ll x){
return x*(x-1)/2;
}
int main() {
 ll n,sum=0;
 cin>>n;
 ll x;
 map<ll,ll> opposites;
 set<int> s;
 for(int i=0;i<n;i++){
    cin>>x;
    opposites[x]++;
    if(x<0) x=-x;
    s.insert(x);
 }
 set<int> ::iterator setItr;
    for(setItr = s.begin();setItr!=s.end();setItr++){
        if(*setItr==0){
            sum+=(sumfrom0(opposites[*setItr]));
        }else{
        sum+=(opposites[-*setItr]*opposites[*setItr]);
        opposites[-*setItr] = opposites[*setItr] = 0;
        }
    }
 cout<<sum;


}


