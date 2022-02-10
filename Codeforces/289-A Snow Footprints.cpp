#include <bits/stdc++.h>
using namespace  std;
typedef long long ll;

int main() {
    /*
freopen("input.txt", "r", stdin);\
freopen("output.txt", "w", stdout);*/

   int n;
   char x;
   int first,last;
   int firstr=-2 ,lastr=-2,firstl=-2,lastl=-2;
   cin>>n;
   char route [n+1];
   bool rfound=false,lfound=false;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        route[i]=x;
    }
    for (int i = 0; i < n; ++i) {
        if(route[i]=='R'&&!rfound){
            firstr = i;
            rfound = true;
        }
        else if(route[i]=='R'){
            lastr=i;
        }else if(route[i]=='L'&&!lfound){
            lfound=true;
            firstl = i;
        }
        else if(route[i]=='L'){
            lastl=i;
        }
    }
    firstr++;
    lastr++;
    firstl++;
    lastl++;
    if(!lfound){
        if(lastr<0){
            cout<<firstr<<" "<<firstr+1;
        } else
        cout<<firstr<<" "<<lastr+1;
    }
    else if(!rfound){
        if(lastl<0){
            cout<<firstl<<" "<<firstl-1;
        } else
            cout<<lastl<<" "<<firstl-1;
    }
    else{
        cout<<firstr<<" "<<firstl-1;
    }
   system("pause");
    return 0;
}



