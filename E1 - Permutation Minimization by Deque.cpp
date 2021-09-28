#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    deque<int> arr(n);
    deque<int> ans;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ans.push_back(arr[0]);
    for(int i=1;i<n;i++){
        int x=arr[i];
        if(x<ans[0]){
            ans.push_front(x);
        }else {
            ans.push_back(x);
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
return 0;
}
