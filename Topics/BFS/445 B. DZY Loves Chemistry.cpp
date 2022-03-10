        #include <bits/stdc++.h>

        using namespace std;
        typedef long long ll;
#define pb                  push_back

        vector<ll> v[100];
        int vis[52] = {0};
        int danger[52] = {1};
        void dfs(int x){
           if(vis[x]) return;
           vis[x] =1;
            for (int i = 0; i <v[x].size() ; ++i) {
                if(!vis[v[x][i]]) dfs(v[x][i]);
            }
        }
        int main()
        {
            int n,m,x2,x1;
            cin>>n>>m;
            unsigned int ans = 0;
            for (int i = 0; i < m; ++i) {
                cin>>x1>>x2;
                v[x1].pb(x2);
                v[x2].pb(x1);
//                ans=max(dfs(x1,x2),ans);
            }
            int cnt = 0;
            for (int i = 1; i <= n; ++i) {
                if(vis[i]==0){
                    cnt++;
                    dfs(i);
                }
            }
            cout<<(ll)pow(2,n-cnt);
//           system("pause");
            return 0;
        }

