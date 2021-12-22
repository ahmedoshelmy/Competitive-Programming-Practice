#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int up(int x){
  if(x>0){
    return x/2+1;
  }else{
    return x/2;
  }
}
int down(int x){
  if(x<0){
    return x/2-1;
  }else{
    return x/2;
  }
}

int main(){
int n,x;
int odds=0;
bool z=0;
cin>>n; 
while(n--){
  cin>>x;
  if(x%2==0)cout<<x/2<<endl;
  else{
    if(odds%2==0)cout<<up(x)<<endl;
    else cout<<down(x)<<endl;
    odds++;
  }
}
    

}
