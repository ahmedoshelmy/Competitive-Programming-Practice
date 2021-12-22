#include <bits/stdc++.h>
using namespace std;


int main() {
 int n,m,x,q;
 double d=0;
 set <char> all;
  cin>>n>>m>>x;
 char k;
 int cnt=0;
 bool capital=false,thiscap=false;
//  vector<pair<int,int>> shifts;
 map <char,vector<pair<int,int>>> chars;
 for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
         cin>>k;
            chars[k].push_back({i,j});
            all.insert(k);
     }
 }
 map<char,bool> h;
set<char>::iterator itr;
 char z;
 for(itr=all.begin();itr!=all.end();itr++){
     bool l=true;
     z=*itr;
  for(int j=0;j<chars[z].size()&&l;j++){
        for(int i=0;i<chars['S'].size();i++){
            d=pow((chars[z][j].first-chars['S'][i].first),2);
            d+=pow((chars[z][j].second-chars['S'][i].second),2);
            d=sqrt(d);
            if(x>=d){
                l=false;
                break;
            }
        }
        }
        h[z]=l;
 }
 if(chars['S'].size()>0) capital=true;
cin>>q;
char t;
while(q--){
    thiscap=false;
    cin>>t;
    if(isupper(t)&&!capital){
        cout<<-1;
        return 0;
    }
    else{
            if(isupper(t)){
                thiscap=true;
                 t=tolower(t);
            }
             if(all.find(t)==all.end()){
            cout<<-1;
            return 0;
            }

    }
        if(thiscap){
        t=tolower(t);
        if(h[t]){
            cnt++;
             //cout<<t;
        }
        }


     }
cout<<cnt;
}

