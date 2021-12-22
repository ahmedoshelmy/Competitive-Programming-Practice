#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     
    int ** a;
    int n,q,i,j;
    cin>>n>>q;
    a= new int* [n];
    int k; 
    for(int i=0;i<n;i++){
        cin>>k;
        a[i] = new int [k];
        for(int j=0;j<k;j++){
            cin>>a[i][j];
        }
    }
    for(int d=0;d<q;d++){
        cin>>i>>j;
        int num = a[i][j];
        cout<<num<<endl;
    }
    for(int i=0;i<n;i++){
        delete[]a[i];
    }
    delete []a;
    return 0;
}
