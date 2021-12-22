#include <bits/stdc++.h>
using namespace  std;
typedef long long ll;
int main() {
    /*
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);*/
int n,x,ans=999999;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 sort(arr,arr+n);
for(int i = 0;i<n;i++){
    x=upper_bound(arr,arr+n,arr[i]*2)-arr;
    ans = min(ans,i+n-x);
}
cout<<ans;
    return 0;
}


