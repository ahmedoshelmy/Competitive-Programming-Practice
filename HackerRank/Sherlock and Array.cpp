#include <bits/stdc++.h>
using namespace  std;



typedef long long ll;
int main() {
    int t,n,x;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        ll summ=0;
        cin>>n;
        ll arr[n];
        ll sum[n];
        sum[0]=0;
        for (int j = 0; j < n; ++j) {
            cin>>arr[j];
            if(j) sum[j] = arr[j-1]+sum[j-1];
            summ+=arr[j];
            //cout<<sum[j]<<" ";
        }
        int index = -1;
        string ans = "NO";
        do{
            index++;
        }while(summ - 2*sum[index]-arr[index]!=0&&index<n);
        if(index<n) ans = "YES";
        cout<<ans<<endl;

    }



    return 0;
}
