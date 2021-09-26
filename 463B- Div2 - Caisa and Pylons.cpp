#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
int n;
cin>>n;
vector<int> x(n);

for(int i=0;i<n;i++){
    cin>>x[i];
}
ll dollars=x[0],energy=0;
for(int i=0;i<n-1;i++){
        if(x[i]>=x[i+1]){
            energy+=(x[i]-x[i+1]);
        }else{

        if(energy>=(x[i+1]-x[i])){
            energy-=(x[i+1]-x[i]);
        }else{
        dollars+=((x[i+1]-x[i])-energy);
        energy=0;
        }

        }
}
cout<<dollars;
return 0;
}
