#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int c(char x){

if(x=='#'){
    return 1;
}else{
return -1;
}
}

int main(){
    int squares=0;
char grid[4][4];
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cin>>grid[i][j];
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       squares= c(grid[i][j])+c(grid[i+1][j+1])+c(grid[i+1][j])+c(grid[i][j+1]);
       if (squares==2 || squares==-2|| squares==4 || squares==-4){
        cout<<"YES";
        return 0;
       }
    }
}
cout<<"NO";
return 0;
}
