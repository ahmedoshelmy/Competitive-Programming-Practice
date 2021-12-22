
#include <bits/stdc++.h>
using namespace std;

int main(){
    map <string,int> phonename; 
    int n;
    cin>>n;
    string name;
    int phone; 
    while(n--){
        cin>>name>>phone;
        phonename.insert(make_pair(name,phone));
    }
    while(cin>>name){
        if(phonename[name]>0){
            cout<<name<<"="<<phonename[name]<<endl;
        }else cout<<"Not found\n";
    }
}
