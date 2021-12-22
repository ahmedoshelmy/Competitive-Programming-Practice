#include <iostream>

using namespace std;

int main()
{
int n,h,width=0,ah;
cin>>n>>h;
for(int i=0;i<n;i++){
    cin>>ah;
    if(ah>h)width+=2;
    else width+=1;
}
cout<<width;
}
