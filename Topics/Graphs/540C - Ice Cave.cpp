#include<bits/stdc++.h>

using namespace std;

typedef pair<int,char> pi;

bool vis[501][501];
char graph[501][501];
int dx[] = {1, -1, 0, 0}; // only left, right , up ,down are allowed here
int dy[] = {0, 0, 1, -1};
int m,n;
bool ok=false;
int endx,endy,startx,starty;
bool arrived  = false;
bool arrived2 = false;
void dfs(int i,int j)
{
    if(vis[i][j]) {
//        cout<<i<<" "<<j<<"Visited\n";
        return ;
    }
    if(i<1||j<1||i>m||j>n) return;
    if(i==endx&&j==endy&&graph[endx][endy]=='X'){
//        cout<<"Destination reached 2\n";
        arrived2 = true;
        return;
    }
    if(graph[i][j]=='X') return;
    if(i==endx&&j==endy&&graph[endx][endy]=='.'){
       // cout<<"Destination reached 1\n";
        graph[i][j]='X';
        arrived = true;
        return;
    }
    vis[i][j]=true;
//    cout<<i<<" "<<j<<endl;
    graph[i][j]='X';
    for (int k = 0; k < 4; ++k) {
        int nxti = i + dx[k];
        int nxtj = j + dy[k];
        dfs(nxti,nxtj);
    }

}


int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    memset(vis,false,sizeof(vis));
    int x,y,u,v;
    char c;
    cin>>m>>n;
    for(int i=1;i<=m;i++)

    {
        for(int j=1;j<=n;j++)

        {
            cin>>graph[i][j];
        }
    }
    cin>>startx>>starty>>endx>>endy;
    graph[startx][starty]='.';
    dfs(startx,starty);
    if(arrived2){
        cout<<"YES";
        return 0;
    }
    if(arrived){
        vis[endx][endy]=false;
        int nxtx,nxty;
        for (int i = 0; i < 4; ++i) {
            nxtx = endx +dx[i];
            nxty = endy +dy[i];
            dfs(nxtx,nxty);
            if(arrived2) break;
        }
        if(arrived2)cout<<"YES";
        else cout<<"NO";
    }else{
        cout<<"NO";
    }

//    system("pause");
    return 0 ;
}
