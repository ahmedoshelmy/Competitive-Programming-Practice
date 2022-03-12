        #include <bits/stdc++.h>

        using namespace std;
        typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
        int vis[100001]={0};
        int t;
        map<int, vector<int>> v;
        map<int,int> cats;

        int dfs(int n,int length){
            if(vis[n]) return 0;
            vis[n]=1;
            if(length>t) return 0;
            if(v[n].size()==1&&n!=1) {
                    return 1;
            }
                int x=0;
                for (int i = 0; i < v[n].size(); ++i) {
                    int k = v[n][i];
                    if(cats[n]==0) length = 0;
                    x+=dfs(k,length+cats[k]);
                }
                return x;
        }
        int main()
        {
            fast;
            int x,y,n;
            cin>>n>>t;
            int e;
            for (int i = 1; i <= n; ++i) {
                cin>>e;
                cats[i] = e;
            }
            while(--n){
                cin>>x>>y;
                v[x].pb(y);
                v[y].pb(x);
            }
            memset(vis,0,sizeof vis);
            int ans = dfs(1, cats[1]);
            cout<<ans<<endl;
//            system("pause");
            return 0;
        }

