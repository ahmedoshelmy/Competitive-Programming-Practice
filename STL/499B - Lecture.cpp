#include <bits/stdc++.h>
using namespace  std;
typedef long long ll;
int main() {
 map<string,string> words;
 int n,m;
 string input,first,second;
 cin>>n>>m;
 for(int i=0;i<m;i++){
    cin>>first>>second;
    words[first]=second;
}
for(int j=0;j<n;j++){
    cin>>input;
    if(words[input].size()<input.size()){
        cout<<words[input]<<" ";
    }else{
    cout<<input<<" ";
    }
}
 

    return 0;

}


