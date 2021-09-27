#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
int n,k;
cin>>n>>k;
int arr[n+1];
for(int i=1;i<=n;i++)
    cin>>arr[i];
int ans=0;
if(arr[k])ans++;
for(int d=1;d<n;d++){
    if(arr[k+d]&&arr[k-d]&&k+d<=n&&k-d>=1){
        ans+=2;
    }else if(arr[k+d]&&k+d<=n&&k-d<1){
    ans++;
    }
    else if(arr[k-d]&&k+d>n&&k-d>=1){
    ans++;
    }
}

cout<<ans;

return 0;
}
