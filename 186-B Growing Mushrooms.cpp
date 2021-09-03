    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;

    #define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

    int main() {

        IO;
        int n,t1,t2;
        int a,b;
        double k,h1,h2,h;
        cin>>n>>t1>>t2>>k;
        vector<pair<double,int>> results;
        k/=100.0;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            h1=(a*t1*(1-k))+b*t2;
            h2=(b*t1*(1-k))+a*t2;
            h=max(h1,h2);
            results.push_back(make_pair(-1*h,i+1));
        }
        sort(results.begin(),results.end());
        for(int i=0;i<n;i++){
            cout<<results[i].second<<" "<<fixed<<setprecision(2)<<-1*results[i].first<<endl;
        }
        return 0;
    }
