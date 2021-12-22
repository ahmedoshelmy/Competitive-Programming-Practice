#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
const int MAX = 1e18 + 9;
void fast() {
	std::ios_base::sync_with_stdio(0);
}

int main()
{
    int n,a,b;
    cin>>n;
    vector<pair<int,int>> laptops;
    while(n--){
            cin>>a>>b;
	laptops.push_back(make_pair(a,b));
    }
    sort(laptops.begin(),laptops.end());
    for(int i=1;i<laptops.size();i++){
        if(laptops[i].second<laptops[i-1].second){
            cout<<"Happy Alex\n";
            return 0;
        }
    }
    cout<<"Poor Alex\n";
	return 0;
}
