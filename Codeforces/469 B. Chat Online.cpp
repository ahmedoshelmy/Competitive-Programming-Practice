#include <bits/stdc++.h>
using namespace std;

#define rep(n) for(int i=0;i<n;i++)
#define rep1(n) for(int j=0;j<n;j++)
int p,q,l,r;
int a[50],b[50],c[50],d[50];
bool valid(int x){
   rep1(p){    
            if(x>=a[j]&&x<=b[j]){
                return true;
            }
   }
   return false;
}
int main(){
cin>>p>>q>>l>>r;
rep(p){
    cin>>a[i]>>b[i];
}
rep(q){
    cin>>c[i]>>d[i];
}
int cnt=0;
bool found =false;

for(int k=l;k<=r;k++){
    found=false;
    rep(q){   
        for(int z=c[i];z<=d[i];z++){
            if(valid(z+k)){
                cnt++;
                found=true;
                break;
            }
        }   
        if(found) break;
    }
}
cout<<cnt;

}   
