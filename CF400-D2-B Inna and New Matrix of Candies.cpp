#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
int n,m;
bool gtrue=false,strue=false,possible=false;
int jg,js,ans=99999;
char x;
cin>>n>>m;
set<int> result;
for(int i=0;i<n;i++){
        gtrue=strue=false;
    for(int j=0;j<m;j++){
        cin>>x;
        if(x=='S'&&!gtrue){
           cout<<-1;
           return 0;
        }
        if(x=='G') {
                gtrue= true;
                jg=j;
        }
        if(gtrue && x=='S'){
            result.insert(j-jg);
            possible=true;
        }
    }
}
    if(possible)
    cout<<result.size()<<endl;
    else{
        cout<<-1;
    }



return 0;
}
