        #include <bits/stdc++.h>

        using namespace std;
        typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back

        vector<int> langs [109];
        vector<int> people[109];
        int vis[109] = {0};
        int ans = 0;
        void dfs(int node){
            if(vis[node]) return;
            vis[node]=1;
            for (int i = 0; i < people[node].size(); ++i) {
                int lang = people[node][i];
                for (int j = 0; j < langs[lang].size(); ++j) {
                    if(!vis[langs[lang][j]]) {
                        dfs(langs[lang][j]);
                        ans++;
                    }
                }
            }
        }
        int main()
        {
            //fast;

           int n,x;
           cin>>n>>x;
           int l,c;
            for (int i = 0; i < n; ++i) {
                cin>>c;
                while(c--) {
                    cin >> l;
                    langs[l].pb(i);
                    people[i].pb(l);
                }
            }
            int i = 0;
            while(people[i].size()==0&&i<n) i++;
            if(i!=n) {
                ans++;
                if (people[i].size() > 0)
                    dfs(i);
            }
            for (int j = i+1; j < n; ++j) {
                dfs(j);
            }
            cout<<n-ans;

//            system("pause");
            return 0;
        }

