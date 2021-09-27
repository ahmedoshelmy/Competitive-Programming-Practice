#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
int ans=1;
for(int i=0;i<n;i++){
        int s=1;
        int j=i+1;
    if(!i){
        while(arr[j]<=arr[j-1]){
            s++;
            j++;
        }
    }else if(i==n-1){
     j=i-1;
      while(arr[j]<=arr[j+1]){
            s++;
            j--;
        }
    }
    else{
    int j=i+1;
    while(arr[j]<=arr[j-1]){
            s++;
            j++;
        }
         j=i-1;
      while(arr[j]<=arr[j+1]){
            s++;
            j--;
        }

    }
    ans=max(s,ans);
}
cout<<ans;

return 0;
}
