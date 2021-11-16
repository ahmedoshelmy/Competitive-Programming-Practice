#include <bits/stdc++.h>
using namespace std;


int main() {
    int health,n;
    cin>>health>>n;
    int x,y;
    vector<pair<int,int>> dragons;
    for (int i = 0; i < n; ++i) {
        cin>>x>>y;
        dragons.push_back({x,y});
    }
    sort(dragons.begin(),dragons.end());
    for (int i = 0; i < n; ++i) {
        if(dragons[i].first<health){
            health+=dragons[i].second;
        }else{
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;
}
