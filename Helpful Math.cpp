#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
string s;
cin>>s;
int n=s.size();
vector<int> v;
for(int i=0;i<n;i=i+2){
        int x=(s[i]-'0');
    v.push_back(x);
}
sort(v.begin(),v.end());
for(int i=0;i<n;i++){
        if(!i)cout<<v[0];
    else if(i%2==0){
        cout<<v[i/2];
    }else{
    cout<<'+';
    }
}
return 0;
}
