/// Dijksrtra 

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
////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////    Union Find  ///////////////////////////////// 



int n , m ;
void init(){
    parent = union_rank = vi(n);
    for (int i = 0; i < n; ++i) make_set(i);
}
   vi parent , union_rank ;
    int find_set(int v) {
        int root = v;
        while(root!=parent[root]) root = parent[root];
        if (v != root){
            int next = parent[v];
            parent[v] = root;
            v = next;
        }
        return root;
    }

    void make_set(int v) {
        parent[v] = v;
        union_rank[v] = 0;
    }

    void union_sets(int a, int b) {
        a = find_set(a);
        b = find_set(b);
        if (a != b) {
            if (union_rank[a] < union_rank[b])
                swap(a, b);
            parent[b] = a;
            if (union_rank[a] == union_rank[b])
                union_rank[a]++;
        }
    }
// Kruskal 

  union_rank = vis = parent = vi(n); adj = vvi(n);
init() ;
vector<pair<ll,pair<int,int>>> q ;
     for (int i = 0; i < m; ++i) {
        cin>>x>>y>>c;x--,y--;
        q.push_back({c,{x,y}});
    }
     sort(all(q));
     ll cost = 0 ;int police_stations = 0 ;
    for (auto & u:q){
        ll edge = u.first ;
        int from =u.second.first;
        int to =u.second.second;
        from = find_set(from) , to = find_set(to) ;
        if( from != to){
            if(edge < a) {
                cost += edge;
                union_sets(from, to);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if(parent[i] == i) police_stations++,cost+=a;
    }





