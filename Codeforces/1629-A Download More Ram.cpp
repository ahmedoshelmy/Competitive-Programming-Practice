#include <bits/stdc++.h>
using namespace  std;
typedef long long ll;
/*

int leastindex(int *arr,int n,int k){
    int minIndex = 0;
    bool swapp = false;
    for (int i = 0; i < n; ++i) {
        if(!swapp) {
            if (k >= arr[i]) {
                minIndex = i;
                swapp = true;
            }
        }
        else{
            if(k>=arr[i]&&arr[minIndex]>arr[i]){
                minIndex = i;
            }
        }

    }
    if(!swapp) minIndex = -1;
    return minIndex;
}*/
int main() {
    /*
freopen("input.txt", "r", stdin);\
freopen("output.txt", "w", stdout);*/
int t,n,k;
int ans;
cin>>t;
    for (int i = 0; i < t; ++i) {
        cin>>n>>k;
        ans = k;
        int a[n],b[n];
        for (int j = 0; j < n; ++j) {
            cin>>a[j];
        }
        for (int j = 0; j < n; ++j) {
            cin>>b[j];
        }
        for (int j = 0; j < n; ++j) {
            for (int l = 0; l < n; ++l) {
                if(a[l]<=ans){
                    ans+=b[l];
                    a[l]=999999;
                }
            }
        }
        cout<<ans<<endl;
    }
 //system("pause");
    return 0;
}



