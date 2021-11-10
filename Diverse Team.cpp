#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,k,x,distinct=0;
    bool arr[101]={0};
    vector<int> v;
    cin>>n>>k;
    for (int i = 0; i <n ; ++i) {
        cin>>x;
        if(!arr[x]){
            distinct++;
            arr[x]=true;
            v.push_back(i+1);
        }
    }
    if(distinct<k){
        cout<<"NO";
    }else{
        cout<<"YES\n";
        for (int i = 0; i < k; ++i) {
            cout<<v[i]<<" ";
        }
    }

    return 0;
}
