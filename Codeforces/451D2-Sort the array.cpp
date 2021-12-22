    #include <bits/stdc++.h>

    using namespace std;
    typedef long long ll;
    typedef long double ld;


    int main(){
       int n; 
       cin>>n; 
       vector <int> a(n);
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
        vector <int> v=a;
        sort(v.begin(),v.end());
        if(v==a) cout<<"yes\n"<<1<<" "<<1;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                int j=i;
                while(j<n-1&&a[j]>a[j+1]){
                    j++;
                }
                sort(a.begin()+i,a.begin()+j+1);
                // for(int x:a)cout<<x;
                if(a==v){
                    cout<<"yes\n"<<i+1<<" "<<j+1;
                    return 0;
                }else{
                    cout<<"no";
                    return 0;
                }
            }
        }
    }
