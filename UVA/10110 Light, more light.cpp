#include <bits/stdc++.h>
using namespace std;

int main() {
 unsigned int n,x; 
 while(cin>>n&&n!=0){
     x=(int) (sqrt(n)+1e-9);
     cout<<(x*x==n?"yes\n":"no\n");
 }
}

