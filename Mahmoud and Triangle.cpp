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
      int n,large,small;
    cin>>n ;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-2;i++){
           int j=i+1;
           int k=i+2;
           if(v[k]-v[i]<v[j]&&v[k]+v[i]>v[j]){
            cout<<"YES\n";
            return 0;
           }
       //   large=  max({v[i], v[j], v[k]});
        //  small = min({v[i], v[j], v[k]});
        //  if(v[i]+v[j]+v[k]-large-small>large-small && v[i]+v[j]+v[k]-large-small<large+small ){
         //   cout<<"YES\n";
         //   return 0;
          //}

    }
    cout<<"NO\n";
    return 0;
    }
