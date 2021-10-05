
    #include <bits/stdc++.h>

    using namespace std;
    typedef long long ll;
    typedef long double ld;

    int main(){
        
     ll n,f,k,l,ans=0;
     vector<pair<int,int>> d;
     cin>>n>>f;
     for(int i=0;i<n;i++){
         cin>>k>>l;
         if(l<=k){
             ans+=l;
         }else{
             if(2*k>l){
                 d.push_back(make_pair(l,k));
             }else{
                 d.push_back(make_pair(2*k,k));
             }
         }
     }
     for(int i=0;i<f;i++){
              int maxdiff=0,index=0;;
     for(int j=0;j<d.size();j++){
         if(maxdiff<d[j].first-d[j].second){
             maxdiff=d[j].first-d[j].second;
             index=j;
         }
     }
     if(maxdiff==0) break;
     ans+=d[index].first;
     d[index].first=d[index].second=0;
     }
     for(int j=0;j<d.size();j++){
         ans+=d[j].second;
     }
     cout<<ans;

       return 0;
    }
