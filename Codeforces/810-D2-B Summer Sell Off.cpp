
    #include <bits/stdc++.h>

    using namespace std;
    typedef long long ll;
    typedef long double ld;

    int main(){
        
     ll n,f,ans=0;
     vector<pair<int,int>> d;
     cin>>n>>f;
     ll k[n],l[n];
     for(int i=0;i<n;i++){
         cin>>k[i]>>l[i];
         if(l[i]<=k[i]){
             ans+=l[i];
         }else{
             if(2*k[i]>l[i]){
                 d.push_back(make_pair(l[i]-k[i],i));
             }else{
                 d.push_back(make_pair(k[i],i));
             }
         }
     }
    //      for(int i=0;i<d.size();i++){
    //      cout<<d[i].first<<" "<<d[i].second<<endl;
    //  }
     sort(d.rbegin(),d.rend());
    //  for(int i=0;i<d.size();i++){
    //      cout<<d[i].first<<" "<<d[i].second<<endl;
    //  }
     for(int i=0;i<d.size();i++){
             if(i>=f){
                 ans+=k[d[i].second];
             }else{
                 ans+=(d[i].first+k[d[i].second]);
             }
     }  
     cout<<ans;

       return 0;
    }
