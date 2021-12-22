#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int l1(vector<int>arr ,int querie){
for(int i=0;i<arr.size();i++){
 if(arr[i]==querie) return i+1;
}
}

int main(){
int n,num;
cin>>n;
vector<int> arr(100005);
for(int i=1;i<=n;i++){
    scanf("%d",&num);
    arr[num]=i;
}
ll m,q,ans1=0,ans2=0,s1;
cin>>m;
for(int i=0;i<m;i++){
        cin>>q;
        ans1+=arr[q];
        ans2+=(n-arr[q]+1);
}
cout<<ans1<<" "<<ans2;
}

