    #include <bits/stdc++.h>
    using namespace  std;
    typedef long long ll;
    int main() {
        /*
    freopen("input.txt", "r", stdin);\
    freopen("output.txt", "w", stdout);*/

     ll m,l,r;
     int n;
     int Qtype;
     scanf("%d",&n);
     ll v[n+1];
     ll A1[n+1];
     ll A2[n+1];
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
            if(i==0)A1[i]=v[i];
            else A1[i] = A1[i-1]+v[i];
        }
        sort(v,v+n+1);
        for (int i = 0; i <n ; ++i) {
            if(i==0)A2[i]=v[i];
            else A2[i] = A2[i-1]+v[i];
        }
        cin>>m;
        for (int i = 0; i < m; ++i) {
            cin>>Qtype;
            cin>>l>>r;
            if(l==1)  (Qtype ==1)? cout<< A1[r-1]:cout<< A2[r-1];
          else   (Qtype ==1)? cout<< A1[r-1]-A1[l-2]:cout<< A2[r-1]-A2[l-2];
          cout<<endl;
        }

   //system("pause");
        return 0;
    }



