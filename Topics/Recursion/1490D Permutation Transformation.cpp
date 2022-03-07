    #include <bits/stdc++.h>

    using namespace std;

    #define sq(i) i*i
    void graph(int * arr , int l, int r, int n, int lvl ){
        if(r<l) return;
      int maxx = arr[l];
      int maxindex = l;
        for (int i = l; i <=r ; ++i) {
            if(maxx<arr[i]){
                maxindex = i;
                maxx = arr[i];
            }
        }
        arr[maxindex]  = lvl;
        graph(arr,l,maxindex-1,n,lvl+1);
        graph(arr,maxindex+1,r,n,lvl+1);
    }
    int main()
    {
       int t,n;
       cin>>t;
       while(t--){
           cin>>n;
           int a[n];
           for (int i = 0; i < n; ++i) {
               cin>>a[i];
           }
           graph(a,0,n-1,n,0);
           for (int i = 0; i < n; ++i) {
               cout<<a[i]<<" ";
           }
           cout<<endl;
       }
     //  system("pause");
        return 0;
    }

