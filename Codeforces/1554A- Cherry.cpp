    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;

    #define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
    int main() {
         // freopen("window.in", "r", stdin);
        IO;
        /*#ifndef ONLINE_JUDGE
        freopen("output.txt", "w", stdout);
        #endif*/
        ll n,t,result;
         cin>>n;
        while(n--){
            cin>>t;
            ll arr[t];
            for(int i=0;i<t;i++){
                cin>>arr[i];
            }
            result =arr[0]*arr[1];
            ll large =arr[0];
            ll small = arr[0];
            for(int i=0;i<t-1;i++){
                 large=arr[i];
                  small=arr[i+1];
                result=max(result,large*small);
            }
            cout<<result<<"\n";
        }
    }
