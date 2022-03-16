#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
int main()
{
    fast;
    int l,n,m,x;
    cin>>n>>m;
    int ans[n];
    int arr[n];
    int a[100002]={0};
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    for (int i = n-1; i >=0 ; --i) {
        x = arr[i];
        if(i==n-1){
            ans[i] = 1;
            a[x] =1;
            continue;
        }
        if(a[x]==0){
            ans[i]=ans[i+1]+1;
            a[x]=1;
        }else{
            ans[i] = ans[i+1];
        }
    }
    for (int i = 0; i < m; ++i) {
        cin>>l;
        cout<<ans[l-1]<<endl;
    }
//            system("pause");
    return 0;
}

