#include <iostream>
using namespace std;

bool isPrime(int n){
for(int i=2;i<n;i++){
    if(n%i==0) return false;
}
return true;
}

int main(){

int n,m;
cin>>n>>m;
int test=n+1;
while(!isPrime(test)){
test++;
}
if(test==m){
    cout<<"YES";
}else {
cout<<"NO";
}
}
