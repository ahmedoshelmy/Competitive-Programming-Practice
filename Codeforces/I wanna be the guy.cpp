#include <bits/stdc++.h>
using namespace  std;
typedef long long ll;
int main() {
 int n,p,q,x;
 int levelspassed = 0;
 cin>>n;
 int arr[n+1]={0};
cin>>p;
for(int i=0;i<p;i++){
    cin>>x;
    if(arr[x]==0) levelspassed ++;
    arr[x]=1;
}
cin>>q;
for(int i=0;i<q;i++){
    cin>>x;
    if(arr[x]==0) levelspassed ++;
    arr[x]=1;
}
if(levelspassed == n){
    cout<<"I become the guy.";
}else{
cout<<"Oh, my keyboard!";
}


    return 0;

}


