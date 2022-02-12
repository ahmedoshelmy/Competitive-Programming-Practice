    #include <bits/stdc++.h>
    using namespace  std;
    typedef long long ll;
    int main() {
        /*
    freopen("input.txt", "r", stdin);\
    freopen("output.txt", "w", stdout);*/

     int n,k,x;
     scanf("%d%d",&n,&k);
     int sum[n+1];
        for (int i = 0; i < n; ++i) {
            cin>>x;
            if(i==0)sum[i]=x;
            else sum[i]=sum[i-1]+x;
        }
        int minSum = sum[k-1];
        int minJ = 1;
        for (int i = 0; i < n-k; ++i) {
            if(minSum>(sum[i+k]-sum[i])){
                minJ = i+2;
                minSum = sum[i+k]-sum[i];
            }
        }
        cout<<minJ;

   //system("pause");
        return 0;
    }



