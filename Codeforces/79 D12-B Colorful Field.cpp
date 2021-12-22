#include <bits/stdc++.h>
using namespace std;


int main() {
int n,m,k,t,a,b,d=0; 
cin>>n>>m>>k>>t;
vector<int> wastes;
while(k--){
    cin>>a>>b;
    wastes.push_back(b+(a-1)*m);
}
sort(wastes.begin(),wastes.end());
int f=0;
while(t--){
    cin>>a>>b;
    if(count(wastes.begin(),wastes.end(),b+(a-1)*m)){
        cout<<"Waste\n";
    }else{
        d=0;
        f=b+(a-1)*m;
        for(int i=0;i<wastes.size();i++){
            if(wastes[i]<f){
                d--;
            }else{
                break;
            }
        }
        f=(f+d-1)%3+1;
        switch(f){
        case 1:
        cout<<"Carrots\n";
        break;
        case 2:
        cout<<"Kiwis\n";
        break;
        case 3:
        cout<<"Grapes\n";
        break;
        default:
        cout<<"Waste\n";
    }
    }

}
    return 0;
}
