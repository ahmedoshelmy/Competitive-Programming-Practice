#include <bits/stdc++.h>
using namespace  std;

typedef long long ll;
int main() {
int x,twos=0,threes=0;
cin>>x;
if(x%2==0){
    twos=x/2;
}else{
twos=x/2-1;
threes=1;
}
cout<<twos+threes<<endl;
for(int i=0;i<twos;i++){
    cout<<2<<" ";
}
for(int i=0;i<threes;i++){
    cout<<3;
}
}


