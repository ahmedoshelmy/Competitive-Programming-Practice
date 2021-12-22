#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    // if(b>a) swap(a,b);
    if(b==0) return a;
    return gcd(b,a%b);
}

int main() {
    int n,x;
    while(cin>>n&&n!=0)
    {
            vector<pair<int,int>> s;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
                int cnt=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                s.push_back(make_pair(v[i],v[j]));
                if(gcd(v[i],v[j])==1){
                    cnt++;
                }
            }
        }
        if(cnt>0){
        double ans=(double)cnt/s.size();
        // cout<<cnt<<endl<<ans<<endl;
        // ans=sqrt(6/ans);
        cout<<fixed<<setprecision(6)<<sqrt(6/ans)<<endl;
        }else{
            cout<<"No estimate for this data set.\n";
        }
    }
    return 0;
}
