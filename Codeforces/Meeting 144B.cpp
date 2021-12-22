#include <bits/stdc++.h>
using namespace std;

typedef double d;

double diss(d x1,d y1,d x2,d y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
int main() {
d x1,x2,y1,y2;
int rcnt;
vector<pair<int,int>> table;
double dis=0;
cin>>x1>>y1>>x2>>y2>>rcnt;
bool heater =true;
if(x1<x2){
    for(int i=x1;i<=x2;i++){
        table.push_back(make_pair(i,y1));
        table.push_back(make_pair(i,y2));
    }
}else{
   for(int i=x2;i<=x1;i++){
        table.push_back(make_pair(i,y1));
        table.push_back(make_pair(i,y2));
    }

}
if(y1<y2){
    for(int i=y1+1;i<y2;i++){
        table.push_back(make_pair(x1,i));
        table.push_back(make_pair(x2,i));
    }
}else{
   for(int i=y2+1;i<y1;i++){
        table.push_back(make_pair(x1,i));
        table.push_back(make_pair(x2,i));
    }

}
int ans=0;
d x[rcnt],y[rcnt],r[rcnt];
for(int l=0;l<rcnt;l++){
    cin>>x[l]>>y[l]>>r[l];
}
    heater=true;
        for(int i=0;i<table.size();i++){
                heater=true;
                int xx=table[i].first;
                int yy=table[i].second;
           for(int z=0;z<rcnt;z++){
            if(diss(x[z],y[z],xx,yy)<=r[z]){
                heater=false;
                break;
            }
           }
            if(heater) ans++;
        }

cout<<ans;

}
