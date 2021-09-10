#include <bits/stdc++.h>

using namespace std;

int main(){
int n,k;
bool lastnegative = false;
int remainingk;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
if(n==1){
    if(k%2==0){

    }
    else{
        arr[0]*=-1;
    }
}
else{
    for(int i=0;i<k;i++){
if(arr[i]<0){
        arr[i]*=-1;
        if(arr[i+1]>0) {
                lastnegative=true;
                int last=i;
                 remainingk=k-i+1;
                break;
        }
}else{
 if((k-i)%2==0){

    break;
 }else{
    arr[i]*=-1;
 }
}
}
}
if(lastnegative){
sort(arr,arr+n);
for(int i=0;i<remainingk;i++){
     if((remainingk-i)%2==0){

    break;
 }else{
    arr[i]*=-1;
 }
}
}
int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
cout<<sum;
}
