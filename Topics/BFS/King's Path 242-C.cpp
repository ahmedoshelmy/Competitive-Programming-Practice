#include <bits/stdc++.h>
using namespace  std;


int dx[] ={0,0,1,-1,1,-1,1,-1};
int dy[] ={1,-1,0,0,1,-1,-1,1};
vector<pair<int,pair<int,int>>> validCells;
map <pair<int,int>,int> step;
map <pair<int,int>,bool> visited;
map<int,vector<pair<int,int>>> validCells2;


bool isValid(int x,int y){
    if(x<1||y<1) return false;
    if(x>1e9||y>1e9) return false;
    if(visited[{x,y}]!=0) return false;
//    for (int i = 0; i <validCells.size() ; ++i) {
//        if(x==validCells[i].first&&y>=validCells[i].second.first&&y<=validCells[i].second.second) return true;
//    }
    for (int i = 0; i < validCells2[x].size(); ++i) {
        if(y>=validCells2[x][i].first&&y<=validCells2[x][i].second) return true;
    }    
return false;
}
void bfs(int x0,int y0,int x1,int y1){
    queue<pair<int,int>> q;
    int newx=x0,newy=y0;
    q.push({x0,y0});
    int steps = 0;
    while (q.size()>0){
        newx = q.front().first;
        newy = q.front().second;
        q.pop();
        x0=newx;y0=newy;
        if(x0 == x1&&y0 == y1){
            break;
        }
        for (int i = 0; i < 8; ++i) {
            newx = x0+dx[i];
            newy = y0+dy[i];
            if(isValid(newx,newy)){
                q.push({newx,newy});
//                cout<<newx<<" "<<newy<<endl;
                step[{newx,newy}]= step[{x0,y0}]+1;
                visited[{newx,newy}]= true;
            }
        }

    }
    steps = step[{x0,y0}];
    if(x0==x1&&y0==y1){
        cout<<steps<<endl;
    }
    else cout<<-1;
}
int main() {
    int n,x0,y0,x1,y1,r,a,b;
    cin>>x0>>y0>>x1>>y1;
    cin>>n;
    step[{x0,y0}] = 0;
    visited[{x0,y0}] = 1;
    for (int i = 0; i < n; ++i) {
        cin>>r>>a>>b;
        validCells.push_back({r,{a,b}});
        validCells2[r].push_back({a,b});
    }
    bfs(x0,y0,x1,y1);
    map <pair<int,int>,int> ::iterator  it;
//    for(it = step.begin();it!=step.end();it++){
//        cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
//    }


    //system("pause");
    return 0;
}
