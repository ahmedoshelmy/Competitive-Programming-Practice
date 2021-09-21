#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
int m;
cin>>m;
string s;
map<string,int> team;
int ans=-1;
string sans;
while(m--){
cin>>s;
team[s]++;
if(ans<team[s]){
ans=team[s];
sans=s;
}
}
cout<<sans;
return 0;
}
