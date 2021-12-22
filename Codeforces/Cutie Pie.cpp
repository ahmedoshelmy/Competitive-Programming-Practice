#include <bits/stdc++.h>
using namespace std;

int main(){

int t,n,m;
bool found= false;
cin>>t;
while(t--){
        found = false;
    cin>>n>>m;
    char grid[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>grid[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if (grid[i][j] == 'p' && ((i < n - 2 && grid[i + 1][j] == 'i' && grid[i + 2][j] == 'e') ||
                                          (j < m - 2 && grid[i][j + 1] == 'i' && grid[i][j + 2] == 'e') ||
                                          (i > 1 && grid[i - 1][j] == 'i' && grid[i - 2][j] == 'e') ||
                                          (j > 1 && grid[i][j - 1] == 'i' && grid[i][j - 2] == 'e') ||
                                          (i > 1 && j < m - 2 && grid[i - 1][j + 1] == 'i' && grid[i - 2][j + 2] == 'e') ||
                                          (j > 1 && i < n - 2 && grid[i + 1][j - 1] == 'i' && grid[i + 2][j - 2] == 'e') ||
                                          (i > 1 && j > 1 && grid[i - 1][j - 1] == 'i' && grid[i - 2][j - 2] == 'e') ||
                                          (i < n - 2 && j < m - 2 && grid[i + 1][j + 1] == 'i' && grid[i + 2][j + 2] == 'e')))
                    found = 1;
            }
        }


if(found)cout<<"Cutie Pie!"<<endl;
else  cout<<"Sorry Man"<<endl;


}




}


