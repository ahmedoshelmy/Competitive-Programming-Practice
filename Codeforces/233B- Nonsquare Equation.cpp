#include <bits/stdc++.h>
using namespace  std;
long long sumofdigits(long long x){
    int sum=0;
    do{
        sum+=x%10;
        x/=10;
    }while(x>0);
    return  sum;
}
int main() {
    long long x=-1,n;
    cin>>n;
    long long start=1,end= sqrt(n),mid,s;
    bool gotsmaller=false,gotbigger=false;
    while(start<=end){
        mid=start+(end-start)/2;
        s=mid*mid+ sumofdigits(mid)*mid;
        if(s==n){
            x=mid;
            end=mid-1;
        }else if(s<n){
            start=mid+1;
        }else{
            end=mid-1;
        }

    }
    if(x==-1){
        for(long long i=mid-100;i<mid+100;i++){
            s=i*i+ sumofdigits(i)*i;
            if(s==n){
                x=i;
                break;
            }
        }
    }
//1    for(int i=1;i<=(n);i++){
//        if(i*i+ sumofdigits(i)*i==n){
//            x=i;
//            break;
//        }
//    }
//    cout<<end;
    cout<<x;
    return 0;
}
