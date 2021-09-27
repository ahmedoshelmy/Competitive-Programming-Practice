#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    char a,b,c;
    char ans1[2],ans2[2],ans3[2],chars[3]={'A','B','C'};
    int index,index2;
    bool correct=false;
    cin>>a>>b>>c;
    if(b=='<'){
        ans1[0]=a;
        ans1[1]=c;
    }else{
        ans1[0]=c;
        ans1[1]=a;
    }
    cin>>a>>b>>c;
if(b=='<'){
        ans2[0]=a;
        ans2[1]=c;
    }else{
        ans2[0]=c;
        ans2[1]=a;
    }
    cin>>a>>b>>c;
if(b=='<'){
        ans3[0]=a;
        ans3[1]=c;
    }else{
        ans3[0]=c;
        ans3[1]=a;
    }
    int cnt=0;
//cout<<ans1[0]<<ans1[1]<<ans2[0]<<ans2[1]<<ans3[0]<<ans3[1];
for(int i=0;i<3;i++){
        cnt=0;
    if(ans1[0]==chars[i]){
        cnt++;
    }
    if(ans2[0]==chars[i]){
        cnt++;
    }
    if(ans3[0]==chars[i]){
        cnt++;
    }
    if(cnt==2){
        cout<<chars[i];
        index=i;
        correct=true;
        break;
    }
}
if(!correct){
        cout<<"Impossible";
        return 0;
}
cnt=0;
correct=false;
for(int i=0;i<3;i++){
    cnt=0;
    if(ans1[1]==chars[i]){
        cnt++;
    }
    if(ans2[1]==chars[i]){
        cnt++;
    }
    if(ans3[1]==chars[i]){
        cnt++;
    }
    if(cnt==2){
        index2=i;
        correct=true;
        break;
    }
}
if(!correct){
        cout<<"Impossible";
        return 0;
}
for(int i=0;i<3;i++){
    if(i==index2||i==index){
        continue;
    }else {
    cout<<chars[i];
    }
}
cout<<chars[index2];


return 0;
}
