#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int main() {
	// freopen("window.in", "r", stdin);
	IO;
    #ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    #endif
    int t,x,y,z,result,n,area;
    int grid[100][100]={0};
    cin>>t;
    while(t--){
            area=0;
    memset(grid, 0, sizeof grid);
            cin>>n;
    while(n--){
        cin>>x>>y>>z;
        for(int i=x;i<y;i++){
            for(int j=0;j<z;j++){
                grid[i][j]=1;
            }
        }
     }
     for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
        if(grid[i][j]){
            area++;
        }
     }
     }
     cout<<area<<"\n";
    }
    return 0;
}
