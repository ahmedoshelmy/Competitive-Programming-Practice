    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define rep(n) for(int i=0;i<n;i++)
    #define rep1(n) for(int j=0;j<n;j++)
   
   
    
    int main(){
     int n,x;
     cin>>n;
     set<int> s;
     while(n--){
         cin>>x;
         s.insert(x);
     }
     vector<int> v;
     if(s.size()>3) {cout<<"NO\n"; return 0;}
     set<int> ::iterator it;
     for(it=s.begin();it!=s.end();it++){
         v.push_back(*it);
     }
     sort(v.begin(),v.end());
     if(v.size()==1){
         cout<<"YES\n";
         return 0;
     }else if(v.size()==2) cout<<"YES\n";
     
     else{
         int diff=abs(v[1]-v[0]);
         if(abs(v[2]-v[1])!=diff){
             cout<<"NO\n";
         }else  cout<<"YES\n";
     }


    }   
