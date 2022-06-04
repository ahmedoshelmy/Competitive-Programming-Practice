        #include <bits/stdc++.h>
        using namespace std;

        using ll = long long;
        #define pb push_back
        #define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        #define cinarr     for (int i = 0; i < n; ++i) cin>>arr[i]
        #define cin(vec) for(auto& i : vec) cin >> i
        #define cout(vec) for(auto& i : vec) cout << i << " ";
        #define coutarr for (int i = 0;i<n ; i++) cout<<arr[i]<<" ";
        #define coutarrn for (int i = 0;i<n ; i++) cout<<arr[i]<<endl;
        #define cingrid  for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin>>grid[i][j];
        #define coutgrid  for (int i = 0; i < n; ++i){ for (int j = 0; j < m; ++j) cout<<grid[i][j];cout<<endl;}
        #define lp(i, n)    for(int i=0;i<(int)(n);++i)
        #define all(v) v.begin(),v.end()
        #define           NO    cout << "NO\n"
        #define rep for(int i = 0;i<n;i++)
        #define clr(v, d)			memset(v, d, sizeof(v))
        #define re   			return
        #define el endl
    #define INF INT64_MAX
        #define error re void(cout<<-1<<el);
        typedef vector<int> vi;
        typedef vector<ll> vll;
        typedef vector<vi> vvi;
        const int N = 150100;
        vector<vector<pair<ll,ll>>> adj ;
        vll ans;
        ll n ,m;
        void  dijkstra (){
            vi vis(n+1) ;vll dis(n+1);
            vll path (n+1);
            for(auto & u:dis) u =INF;
            priority_queue<pair<ll, int>, vector <pair<ll, int>>, greater<>> q;
            ll x = 1 ; dis[x] = 0 ;
            q.emplace(0,x);
            while (!q.empty()){
                x = q.top().second; q.pop();
                if(vis[x])continue;
                vis[x] = 1;
                for(auto &u:adj[x]){
                    ll y = u.first ; ll w = u.second;
                    if(w + dis[x] < dis[y]){
                        dis[y] = w + dis[x];
                        path[y] = x ;
                        q.emplace(dis[y] , y);
                    }
                }
            }
            if(dis[n]>=INF) re void(cout<<-1<<el);
            x = n ;
            while(x!=1){
                ans.pb(x);
                x = path[x];
            }
            ans.pb(1);
            reverse(all(ans));
            cout(ans) cout<<el;
        }
        void solve () {
            cin>>n>>m ;
            adj = vector<vector<pair<ll,ll>>>(n+1);
            int a,b ,w;
            for (int i = 0; i < m; ++i) {
                cin>>a>>b>>w;
                adj[a].pb({b,w});
                adj[b].pb({a,w});
            }
            dijkstra();
        }

        int main()
        {
        //    freopen("adam.in", "r", stdin);
            Linguini
            int t = 1;
//            cin>>t;
            while  (t--){
                solve();
            }
            return  0;
        }
