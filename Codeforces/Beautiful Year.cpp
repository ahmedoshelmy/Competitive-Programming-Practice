#include <bits/stdc++.h>
using namespace  std;

bool isdistinct(int x){
bool n[10]={false};
int digit;
do{
    digit=x%10;
    if(n[digit]){
        return false;
    }else{
        n[digit]=true;
    }
    x/=10;
}while(x>0);
return true;
}
int main() {
int year,distinctyear;
cin>>year;
int i=year+1;
while(!isdistinct(i)){
        i++;
}
cout<<i;
}
