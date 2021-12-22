#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
int n;
cin>>n;
char word[n];
for(int i=0;i<n;i++){
    cin>>word[i];
}
deque <char> ans;
if(n%2==1){
for(int i=0;i<n-1;i++){
    if(i%2==0){
        ans.push_back(word[i]);
    }else{
        ans.push_front(word[i]);
    }
}
}else{
for(int i=0;i<n-1;i++){
    if(i%2==0){
        ans.push_front(word[i]);
    }else{
        ans.push_back(word[i]);
    }
}
}
ans.push_back(word[n-1]);
for(int i=0;i<n;i++){
    cout<<ans[i];
}
return 0;

}
