#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;


int main(){
string s;
ll num=0;
bool four=false;
cin>>s;
if(s=="0"){
   cout<<0;
 return 0;
}
int n=s.size();
if(n%2==1&&s[0]=='1'){
    four=true;
}
for(int i=1;i<n;i++){
   if(s[i]=='1'){
    four=false;
    break;
   }
}
int ans=n*.5;
if(n%2==0)cout<<ans;
else{
   if(four)cout<<ans;
else cout<<ans+1;
}
//cout<<four<<ans;


return 0;
}
