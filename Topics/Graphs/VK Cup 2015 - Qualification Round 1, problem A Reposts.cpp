 #include <bits/stdc++.h>
        using namespace std;
        typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
        map<string,vector<string>> graph;
        int ans = 0;
        int vis[201];
        int dfs(string node){
            if(graph[node].size()==0) return 1;
            int longest = 0;
            for (int i = 0; i < graph[node].size(); ++i) {
                longest = max(dfs(graph[node][i]) +1,longest);
            }
            return longest ;
        }
        void cap(string & x){
            for (int i = 0; i < x.size(); ++i) {
                x[i]= tolower(x[i]);
            }
        }
        int main()
        {
            //fast;
            int n;
            cin>>n;
            string n1,n2,x;
            vector<string> v;
            for (int i = 0; i < n; ++i) {
                cin>>n1>>x>>n2;
                cap(n1);
                cap(n2);
                n2[0] = tolower(n2[0]);
                graph[n2].pb(n1);
                v.pb(n2);
            }
            int output = 0 ;
            for (int i = 0; i < v.size(); ++i) {
                 ans = dfs(v[i]);
                output = max(ans,output);
            }
            cout<<output;
//            system("pause");
            return 0;
        }
