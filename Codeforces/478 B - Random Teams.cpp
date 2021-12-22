#include <iostream>

using namespace std;

long long sumof(long long n){
return n*(n+1)/2;
}

int main(){
long long n,m,x,b;
cin>>n>>m;
long long maxfriends=0,minfriends=0;
maxfriends = sumof(n-m);
/*if(n%2==0) minfriends = n/m-1;
else minfriends=n/m;
minfriends= minfriends * (minfriends+1)/2;*/

    if(m<n/2){
     x=n/m;
     b=n%m;
    minfriends=(m-b)*sumof(x-1)+b*sumof(x);
}else{
minfriends=n-m;
}

if(m==1){
    minfriends=maxfriends;
}

cout<<minfriends<<" "<<maxfriends<<endl;

}
