#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,ans=0;
    int a,b,c;
    cin>>n>>m;
    int forme[n+1]={0},fromme[n+1][n+1]={0};
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        forme[b]+=c;
        fromme[a][b]+=c;
        ans+=c;
    }
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(fromme[i][j]){
                    if(forme[i]&&forme[i]>=fromme[i][j]){
                        forme[i]-=fromme[i][j];
                        ans-=fromme[i][j];
                        fromme[i][j]=0;
                    } else if(forme[i]&&forme[i]<fromme[i][j]){
                        fromme[i][j]-=forme[i];
                        ans-=forme[i];
                        forme[i]=0;
                    }
                }
            }
    }
cout<<ans;

}
