        #include <bits/stdc++.h>

        using namespace std;
        typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
        vector<pair<int,int>> graph[109];
        int ans = 0;
        int vis[109]={0};
        int colorvis[101]={0};
        void dfs(int cur, int end, int color){
            if(vis[cur]) return;
            vis[cur]  =1;
            if(end == cur) {
                ans++;
                return;
            }
            for (int i = 0; i < graph[cur].size(); ++i) {
                int z = graph[cur][i].first;
                if(graph[cur][i].second==color&&!vis[z]){
                    dfs(z,end,color);
                }
            }
        }
        int main()
        {
            fast;
            int n, m,c,x,y;
            cin>>n>>m;
            for (int i = 0; i < m; ++i) {
                cin>>x>>y>>c;
                graph[x].pb({y,c});
                graph[y].pb({x,c});
            }
            int q;
            cin>>q;
            while(q--){
                ans = 0;
              cin>>x>>y;
                for (int i = 0; i < graph[x].size(); ++i) {
                    int cc =graph[x][i].second ;
                    if(!colorvis[cc]) {
                        colorvis[cc]=1;
                        dfs(x, y, cc);
                        memset(vis, 0, sizeof vis);
                    }
                }
                memset(vis,0,sizeof vis);
                memset(colorvis,0,sizeof colorvis);
                cout<<ans<<endl;
            }
//            system("pause");
            return 0;
        }

