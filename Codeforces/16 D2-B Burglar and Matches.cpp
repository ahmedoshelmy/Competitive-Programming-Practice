    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;

    #define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
    int main() {

        IO;
        int n,m;
        int ans=0;
        cin>>n>>m;
       int a[m],b[m];
           vector< pair <int,int> > ab;
       for(int i=0;i<m;i++){
            cin>>a[i]>>b[i];
        ab.push_back( make_pair(b[i],a[i]) );
       }
        sort(ab.begin(), ab.end());
        while(n>0&&ab[0].second>0){
            for(int i=m-1;i>=0;i--){
                while(ab[i].second>0&&n>0){
                ans+=ab[i].first;
                ab[i].second--;
                n--;
                }
            }
        }
        cout<<ans;

        return 0;
    }
