#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n; 
    cin>>t;
    while(t--){
        cin>>n;
        int height=1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                height*=2;
                continue;
            }
            height++;
        }
        cout<<height<<endl;
    }
}
