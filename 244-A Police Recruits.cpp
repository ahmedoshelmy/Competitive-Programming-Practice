#include <iostream>
using namespace std;
int main()
{
int n,x,police=0,crimes=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x;
    if(x>0){
        police+=x;
    }else if(police==0 && x<0){
    crimes++;
    }else if(police >0 && x<0){
    police--;
    }
}
cout<<crimes;

}

