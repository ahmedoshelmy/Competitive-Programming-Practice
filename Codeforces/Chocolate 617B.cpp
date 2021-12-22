#include <bits/stdc++.h>
using namespace std;

#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))
#define clr(v, d)		memset(v, d, sizeof(v))
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	for(int i=(j);i>=(int)(n);--i)
typedef long long ll;


int main() {
/*#ifndef ONLINE_JUDGE
	freopen("test.txt", "rt", stdin);
#endif*/
	int n,x;
	cin>>n;
	int zeros=0;
	int ones=0;
	ll ans=1;
	while(n--){
		cin>>x;
		if(x==1){
			if(ones && zeros) ans*=(zeros+1);
			zeros=0;
			ones++;
		}else{
		zeros++;
		}
	}
	if(!ones)ans=0;
	cout<<ans;



	return 0;

}

