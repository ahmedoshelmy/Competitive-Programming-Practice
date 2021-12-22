#include <bits/stdc++.h>
using namespace std;
int n,m;
char grid[8][8];
bool vis[8][8]={0};
char lastmove[8][8];
bool valid(int i, int j){
    if(i<0||j<0||j>=m||i>=n||vis[i][j]) return  false;
    char c=grid[i][j];
    if(c=='I'||c=='E'||c=='H'||c=='O'||c=='V'||c=='A'||c=='#'||c=='@'){
        return  true;
    }
    return  false;
}
void dfs(int i,int j){
    if(!valid(i,j)) return;
    vis[i][j]=1;
    if(valid(i-1,j)){
        dfs(i-1,j); // front
        lastmove[i-1][j]='f';
    }else if(valid(i,j+1)){ // right
        lastmove[i][j+1]='r';
        dfs(i,j+1);
    } else if(valid(i,j-1)){ // left
        lastmove[i][j-1]='l';
        dfs(i,j-1);
    }
}
int main() {
    int t;
    cin>>t;
    int starti,startj,endi,endj;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
                if (grid[i][j] == '@') {
                    starti = i;
                    startj = j;
                }
                if (grid[i][j] == '#') {
                    endi = i;
                    endj = j;
                }
            }
        }
        dfs(starti, startj);
        //         for(int i=0;i<8;i++){
        //     for(int j=0;j<8;j++){
        //         cout<<lastmove[i][j];
        //     }
        //     cout<<endl;
        // }
        deque<string> ans;
        int curi=endi,curj=endj;
        memset(vis,0,sizeof vis);
        while (curi != starti || curj != startj) {
            char z=lastmove[curi][curj];
            if (valid(curi,curj)&&z == 'f') {
                curi++;
                ans.push_front("forth");
            } else if (valid(curi,curj)&&z == 'r') {
                curj--;
                ans.push_front("right");
            } else if (valid(curi,curj)&&z == 'l') {
                curj++;
                ans.push_front("left");
            }
        }
        for (int i=0;i<ans.size()-1;i++) {
            cout << ans[i] << " ";
        }
        cout<<ans[ans.size()-1]<<endl;
    }
    return 0;
}
