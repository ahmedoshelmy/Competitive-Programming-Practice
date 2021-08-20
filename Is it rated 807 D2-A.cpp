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
        int n;
          cin>>n;
        int before[n],after[n];
        bool rated=false,unrated=false;
        for(int i=0;i<n;i++){
            cin>>before[i]>>after[i];
            if(after[i] != before[i]){
                rated =true;
            }else {
            if(i&&before[i]>before[i-1])
                unrated=true;
            }
        }
        if(rated) cout<<"rated";
        else if(unrated) cout<<"unrated";
        else cout<<"maybe";
    }
