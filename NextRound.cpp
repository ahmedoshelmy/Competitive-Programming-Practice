//Output the number of participants who advance to the next round.

#include <iostream>

using namespace std;

int main()
{
    int n,k,cnt=0,x,val,t=1;
    cin>>n>>k;


for(int i=1;i<=n;i++){
    cin>>x;
    if(x>0 && i<=k){
      cnt++;
    }
    if(i==k)val=x;
    if(i>k && val==x&&val>0) cnt++;

}

cout<<cnt;

}
