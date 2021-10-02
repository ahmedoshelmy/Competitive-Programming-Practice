#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,m;
char color;
cin>>n>>m>>color;
int colrs[200]={0};
char c[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>c[i][j];
    }
}
int ans=0,result=0;
colrs[color]=1;
colrs['.']=1;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
            if(c[i][j]==color){
        if(j-1>=0&&colrs[c[i][j-1]]==0){
            colrs[c[i][j-1]]=1;
            ans++;
           // cout<<i<<j<<0;
        }
        if(i-1>=0&&colrs[c[i-1][j]]==0){
            ans++;
            colrs[c[i-1][j]]=1;
            //cout<<i<<j<<1;
        }
        if(i+1<n&&colrs[c[i+1][j]]==0){
            ans++;
            colrs[c[i+1][j]]=1;
            //cout<<i<<j<<2;
        }
          if(j+1<m&&colrs[c[i][j+1]]==0){
            ans++;
            colrs[c[i][j+1]]=1;
            //cout<<i<<j<<3;
        }
    }
    }
}
cout<<ans;


}
