#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize ("O3")
#pragma GCC optimize "trapv"
#define ll long long
int tt, tc;

const int N = 709;
multiset<int> g[N];
vector<int> tour;
int vis[N], indeg[N], outdeg[N];
vector<int> nodes;
void euler(int v) {
    while (!g[v].empty()) {
        int u = *g[v].begin();
        g[v].erase(g[v].begin());
        euler(u);
    }
    tour.push_back(v);
}

void solve() {
    int n; cin >> n;
    vector<string> v(n - 2);
    for (auto& u : v) cin >> u;
    auto eval = [&](int i, int j) { return (v[i][j] - 'a') * 26 + (v[i][j + 1] - 'a'); };
    auto rev_eval = [&](int node) {
        string ret;
        ret.push_back(char('a' + (node % 26)));
        node /= 26;
        ret.push_back(char('a' + (node % 26)));
        swap(ret[0], ret[1]);
        return ret;
    };
    for (int i = 0; i < n - 2; i++) {
        int u = eval(i, 0), v = eval(i, 1);
        //cout << rev_eval(u) << " " << rev_eval(v) << "\n";
        nodes.emplace_back(u);
        nodes.emplace_back(v);
        g[u].insert(v);
        outdeg[u]++, indeg[v]++;
    }
    sort(nodes.begin(), nodes.end());
    nodes.erase(unique(nodes.begin(), nodes.end()), nodes.end());
    for (auto& u : nodes) if (abs(outdeg[u] - indeg[u]) >= 2) return void(cout << "NO\n");
    int cnt_pos = 0, cnt_neg = 0;
    for (auto& u : nodes) {
        cnt_pos += (outdeg[u] > indeg[u]);
        cnt_neg += (indeg[u] > outdeg[u]);
    }
    if (!((cnt_pos == 0 && cnt_neg == 0) || (cnt_pos == 1 && cnt_neg == 1)))
        return void(cout << "NO\n");
	bool exists = false;
    for (auto& u : nodes) if (outdeg[u] > indeg[u]) {
        //cout << rev_eval(u) << "\n";
		exists = true;
        euler(u);
        break;
    }
	if (!exists) euler(*nodes.begin());
    reverse(tour.begin(), tour.end());
    string ans;
    ans += rev_eval(*tour.begin());
    for (int i = 1; i < (int)tour.size(); i++) ans.push_back(rev_eval(tour[i])[1]);
    if ((int)ans.length() != n) cout << "NO\n";
    else cout << "YES\n" << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    tt = 1, tc = 1; //cin >> tt;
    while (tt--) solve(), tc++;
} 
