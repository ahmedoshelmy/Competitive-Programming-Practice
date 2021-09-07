#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
for(int i=2;i<n;i++){
    if(n%i==0) return false;
}
return true;
}

int main(){

int n,m;
cin>>n;
int x[n];
int maxR1=0;
for(int i=0;i<n;i++){
    cin>>x[i];
    maxR1=max(maxR1,x[i]);
}
cin>>m;
int y[m];
int maxP1=0;
for(int j=0;j<m;j++){
    cin>>y[j];
    maxP1=max(y[j],maxP1);
}
int k;
cin>>k;
int z[k];
int minP2=5002;
for(int l=0;l<k;l++){
    cin>>z[l];
    minP2=min(minP2,z[l]);
}
int a,b;
cin>>a>>b;
double r2;
double factor=1.0*maxP1/minP2;
factor=factor*b/a;
r2=maxR1*maxR1/(1+factor)*factor;
cout<<setprecision(11)<<sqrt(r2);

}

