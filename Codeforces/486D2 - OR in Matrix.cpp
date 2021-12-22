#include <bits/stdc++.h>

using namespace std;

int main(){

int n,m;
bool valid =true;
cin>>m>>n;
int b[m][n];
int a[m][n];
int exp[m][n];
for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        cin>>b[i][j];
        a[i][j]=1;
        exp[i][j]=0 ;
    }

for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        if(b[i][j]==0){
            for(int k=0;k<n;k++)
                a[i][k]=0;
            for(int k=0;k<m;k++)
                a[k][j]=0;
        }
    }


for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        if(a[i][j]==1){
            for(int k=0;k<n;k++)
                exp[i][k]=1;
            for(int k=0;k<m;k++)
                exp[k][j]=1;
        }
    }

for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        if(b[i][j]!=exp[i][j]){
            valid = false;
            break;
            }
    }

    if(valid){
        cout<<"YES"<<endl;
        for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }
    }else {
    cout<<"NO";
    }



}
