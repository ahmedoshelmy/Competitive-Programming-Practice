#include <bits/stdc++.h>

using namespace std;


int main(){
    double vp,vd,t,f,c,ans=0;
    double dragonback,princessforward;
    cin>>vp>>vd>>t>>f>>c;
    double dragon=0;
    double princess=t*vp;
    bool catched=false;
    if(vp>vd){
        cout<<0;
        return 0;
    }
    while(princess<c){
            princessforward=princess/(vd-vp);
            princess+=(princessforward*vp);
            if(princess>=c) break;
            dragonback=princess/vd+f;
            princess+=dragonback*vp;
            ans++;
    }
    cout<<ans;
}
