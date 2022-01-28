#include <bits/stdc++.h>
using namespace  std;
typedef long long ll;

int main() {
    /*
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);*/
   int n;
   int sitCount = 0;
   int standCount = 0;
   char c;
   cin>>n;
   char arr[n];
   for(int i =0;i<n;i++){
    cin>>c;
    arr[i]=c;
    if(c=='x'){
        sitCount++;
    }else{
        standCount++;
    }
   }
   bool stand=true;
   int ans;
   int tostand,tosit;
   tostand=n/2-sitCount;
   tosit=standCount-n/2;
   if(tostand<0){
    ans=abs(tostand);
    stand=true;
   }else{
       if(tosit>=0&&tosit<stand){
        ans = tosit;
       }
        ans = tostand;
        stand=false;
   }


if(stand){
int cnt = 0;
for(int i=0;i<n&&cnt<ans;i++){
    if(arr[i]=='x'){
        arr[i]='X';
        cnt++;
    }
}}
else{
    int cnt = 0;
for(int i=0;i<n&&cnt<ans;i++){
    if(arr[i]=='X'){
        arr[i]='x';
        cnt++;
    }
}
}
cout<<ans<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i];
}
    return 0;
}



