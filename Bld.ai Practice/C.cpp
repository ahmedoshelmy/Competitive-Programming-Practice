#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize ("O3")
#pragma GCC optimize "trapv"
#define ll long long
int tt, tc;

const int N = 1e5 + 9;
// dp[mask][node] is the minimum subgraph to reach "node" from mask
ll dp[N][1 << 3];
vector<pair<int, ll>> g[N];

void solve() {
    int n, m; cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v; ll w; cin >> u >> v >> w;
        g[u].emplace_back(v, w);
    }
    int x, y, z; cin >> x >> y >> z;
    priority_queue<pair<ll, pair<int, int>>> q;
    q.emplace(0, make_pair(x, 1));
    q.emplace(0, make_pair(y, 2));
    q.emplace(0, make_pair(z, 4));
    for (int i = 1; i <= n; i++) for (int mask = 0; mask < (1 << 3); mask++) dp[i][mask] = 1e14;
    for (int i = 1; i <= n; i++) dp[i][0] = 0;
    dp[x][1] = 0, dp[y][2] = 0, dp[z][4] = 0;
    while (!q.empty()) {
        ll d; int v, mask;
        d = q.top().first; d *= -1;
        tie(v, mask) = q.top().second;
        q.pop();
        if (dp[v][mask] != d) continue;
        for (auto& u : g[v]) {
            for (int loop_mask = 0; loop_mask < (1 << 3); loop_mask++) {
                if (dp[u.first][loop_mask | mask] > dp[v][mask] + u.second + dp[u.first][loop_mask]) {
                    dp[u.first][loop_mask | mask] = dp[v][mask] + u.second + dp[u.first][loop_mask];
                    q.emplace(-dp[u.first][loop_mask | mask], make_pair(u.first, loop_mask | mask));
                }
            }
        }
    }
    ll ans = LLONG_MAX;
    int v = -1;
    vector<int> all = {x, y, z};
    sort(all.begin(), all.end());
    for (int i : all) 
        if (dp[i][7] < ans) {
            ans = dp[i][7];
            v = i;
        }
    if (ans < 1e13) cout << v << " " << ans << "\n";
    else cout << -1 << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    tt = 1, tc = 1; //cin >> tt;
    while (tt--) solve(), tc++;
}
