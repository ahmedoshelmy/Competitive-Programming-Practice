#include <bits/stdc++.h>

using namespace std;

int main(){
 string bear = "bear";
 int ans=0;
 bool found = false;
 int start=1,endd;
 vector<int> v;
  string s;
  cin>>s;
  int n=s.size();
  for(int i=0;i<n-3;i++){
    if(s.substr(i,4)==bear){
       v.push_back(i+1);
    }
  }
  for(int i=0;i<v.size();i++){
        endd=n-v[i]-2;
    if(i>0){
        start=v[i-1]+1;
    }
  start=v[i]-start+1;
  ans+=(start*endd);
  }
  cout<<ans;





}
