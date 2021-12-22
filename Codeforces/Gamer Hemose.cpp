    #include <bits/stdc++.h>

    using namespace std;
    typedef long long ll;
    typedef long double ld;


    int main(){
        ll n,t,h;
        cin>>t;
        while(t--){
            cin>>n>>h;
            int a[n];
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            sort(a,a+n);
            int cnt=0;
            cnt=h/(a[n-1]+a[n-2]);
            h-=(cnt*(a[n-1]+a[n-2]));
            if(cnt<1){
              while(h>0){
                h-=a[n-1];
                cnt++;
                if(h<=0){
                    cout<<cnt<<endl;
                    break;
                }
                h-=a[n-2];
                cnt++;
                if(h<=0){
                    cout<<cnt<<endl;
                    break;
                }
            }
            continue;
            }
            cnt*=2;
            if(h<=0){
                cout<<cnt<<endl;
                continue;
            }
            while(h>0){
                h-=a[n-1];
                cnt++;
                if(h<=0){
                    cout<<cnt<<endl;
                    break;
                }
                h-=a[n-2];
                cnt++;
                if(h<=0){
                    cout<<cnt<<endl;
                    break;
                }
            }
        }
        return 0;

    }
