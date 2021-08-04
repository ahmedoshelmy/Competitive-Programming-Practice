#include <iostream>
#include<queue>

using namespace std;

int main()
{
int n,d=0,a=0;
char whowon;
cin>>n;
for(int i=0;i<n;i++){
    cin>>whowon;
    if(whowon == 'A')a++;
    if(whowon == 'D')d++;
}
if(a==d)cout<<"Friendship";
else if(a>d)cout<<"Anton";
else cout<<"Danik";
}
