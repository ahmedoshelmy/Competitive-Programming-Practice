#include <bits/stdc++.h>

using namespace std;
vector<bool> visited; 



int main(){
    int n,m,a,b;
    cin>>n>>m;
            vector<vector<int>> laces(n+1);
            set <int> nums;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        nums.insert(a);
        nums.insert(b);
        laces[a].push_back(b);
        laces[b].push_back(a);
    }
    int cnt=0;
    while(1){
        vector<int> v;
    for(int i=1;i<=n;i++){
        if(laces[i].size()==1){
            v.push_back(i);
            // v.push_back(laces[i][0]);
            laces[i].clear();
        }
        // cout<<laces.size()<<endl;
        }
        // cout<<nn<<endl;
        // cout<<nums.size()<<endl;
    if(v.size())cnt++;
    else break;
    for(int i=1;i<laces.size();i++){
        for(int z=0;z<v.size();z++){
        for(int k=0;k<laces[i].size();k++){
                if(v[z]==laces[i][k]){
                    laces[i].erase(laces[i].begin()+k,laces[i].begin()+k+1);
                }
            }
        }

    }
    }
    cout<<cnt;
}
