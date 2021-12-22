    #include <bits/stdc++.h>

    using namespace std;
    int n,ans=0;
    int len=0;
    bool visited[200][200]={0};
    char grid[200][200];
    bool valid(int x,int y){
        if(x<n&&x>=0&&y>=0&&y<n) return true;
        return false;
    }
    void dfs(int x,int y){
        if(!valid(x,y)) return;
        if(grid[x][y]=='.'||visited[x][y]) return;
        visited[x][y]=true;
        dfs(x,y+1);
        dfs(x+1,y);
        dfs(x-1,y);
        dfs(x,y-1);
    }
    int main(){
        int t; 
        cin>>t;
        for(int i=1;i<=t;i++){
            ans=0;
            cin>>n;
            memset(visited,0,sizeof visited);
            for(int x=0;x<n;x++){
                for(int y=0;y<n;y++){
                    cin>>grid[x][y];
                }
            }
            for(int x=0;x<n;x++){
                for(int y=0;y<n;y++){
                if(!visited[x][y]){
                    if(grid[x][y]=='x'){
                        dfs(x,y);
                    ans++;
                    }
                }
                }
            }
            cout<<"Case "<<i<<": "<<ans<<endl;
        }   
    
    }
