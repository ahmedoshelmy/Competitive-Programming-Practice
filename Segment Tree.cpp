// Segment Tree
ll tree[4*N], a[N];
void build(int node, int l, int r){
if(l == r){ tree[node] = a[l]; return;}
int mid = (l+r) >> 1;
build(2*node+1, mid+1, r), build(2*node, l, mid);
tree[node] = tree[node*2] + tree[node*2 + 1];
}
void update(int node, int l, int r,int& idx, int& nval){
if(l == r){ tree[node] = nval; return; }
int mid = (l+r) >> 1;
if(mid >= idx) update(node*2, l, mid, idx, nval);
else update(node*2+1, mid+1, r, idx, nval);
tree[node] = tree[node*2] + tree[node*2+1];
}
ll query(int node, int l, int r, int st, int en){
if(st > r or l > en) return 0;
if(st <= l and en >= r) return tree[node];
int mid = (l+r) >> 1;
return query(2*node, l, mid, st, en) +
query(2*node+1, mid+1, r, st, en);
}
int find_kth(int v, int tl, int tr, int k) {
if (k > t[v])
return -1;
if (tl == tr)
return tl;
int tm = (tl + tr) / 2;
if (t[v*2] >= k)
return find_kth(v*2, tl, tm, k);
else
return find_kth(v*2+1, tm+1, tr, k - t[v*2]);
}
