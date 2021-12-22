#include <iostream>
using namespace std;

int main()
{
int k,r,cnt=1,difference=0,small_k;
cin>>k>>r;
while(1){
if((k*cnt)%10==r || (k*cnt)%10==0){
    cout<<cnt;
    return 0;
}
    cnt++;
}
if(!cnt) cnt=1;
cout<<cnt;

}
