#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[6][6];

 for(int i=0;i<6;i++){
     for(int j=0;j<6;j++){
         cin>>arr[i][j];
     }
 }
 int sum=0;
 int maxSum=-999999999;
 for(int i=1;i<=4;i++){
     for(int j=1;j<=4;j++){
sum=arr[i][j]+arr[i+1][j]+arr[i-1][j]+arr[i+1][j+1]+arr[i+1][j-1]+arr[i-1][j-1]+arr[i-1][j+1];
maxSum=max(maxSum,sum);
              }
 }
 cout<<maxSum;
 return 0;
 
}
