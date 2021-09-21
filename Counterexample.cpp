#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
ll l,r,a,b,c;
cin>>l>>r;

if(l%2==1)l++;
if(r-l<2){
    cout<<-1;
    return 0;
}
cout<<l<<" "<<l+1<<" "<<l+2;
return 0;
}
