#include <bits/stdc++.h>
using namespace std;

#define rep(n) for(int i=0;i<n;i++)
#define rep1(n) for(int j=0;j<n;j++)
int n;
char grid[30][30];
bool visited[30][30];
int dx[8]={1,-1,1,-1,0,0,1,-1};
int dy[8]={1,-1,-1,1,1,-1,0,0};
bool valid(int i,int j){
    return i>=0 && j>=0 &&i<n&&j<n;
}
bool isone(char c){
    if (c=='1') return true;
    return false;
}
void dfs(int i,int j){
    if(visited[i][j])return;
            visited[i][j]=true;
                for(int k=0;k<8;k++){
                        int ci=i+dx[k];
                        int cj=j+dy[k];
                        if(valid(ci,cj)&&isone(grid[i][j])) dfs(ci,cj);
                }

}


int main(){
    int k=0;
    memset(visited,0,sizeof visited);
    while(scanf("%d",&n)!=EOF){
        k++;
            memset(visited,0,sizeof visited);
int z=0;
rep(n){
    rep1(n){
    cin>>grid[i][j];
    }
}
rep(n){
    rep1(n)
    if(!visited[i][j]&&isone(grid[i][j])){
        z++;
        dfs(i,j);
    }}
cout<<"Image number "<<k<<" contains "<<z<<" war eagles.\n";
    }}   
