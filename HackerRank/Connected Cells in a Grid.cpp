#include <bits/stdc++.h>

using namespace std;
   
int n,m;
int grid[10][10];
int dx[8]={1,1,-1,-1,0,0,1,-1};
int dy[8]={1,-1,-1,1,1,-1,0,0};
    bool visited[10][10]={0};
bool valid(int i,int j){
    if(i>=0&&i<n&&j<m&&j>=0){
        return true;
    }
    return false;
}
bool isone(int x){
    if(x==1) return true;
    return false;
}
int dfs(int i,int j){
    visited[i][j]=true;
    int cnt=1;
    int testi,testj;
    for(int k=0;k<8;k++){
        testi=dx[k]+i;
        testj=j+dy[k];
        if(valid(testi,testj))
        if(!visited[testi][testj])
        if(isone(grid[testi][testj])){
            cnt+=dfs(testi,testj);
        }
    }
    return cnt;
}

int main(){
    int ans=0;
    cin>>n>>m;
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }}
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                int size=dfs(i,j);
                ans=max(size,ans);
                memset(visited,0,sizeof visited);
            }
        }
    }
    cout<<ans;
}
