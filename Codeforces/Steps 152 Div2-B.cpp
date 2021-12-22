    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define rep(n) for(int i=0;i<n;i++)
    #define rep1(n) for(int j=0;j<n;j++)
   
    ll k,dx,dy,steps=0,x,y,n,m;
    bool valid(ll x,ll y){
        if(x<=n&&x>=1&&y>=1&&y<=m){
            return true;
        }
        return false;
    }
    ll binary(){
            ll l=0,r=1e9+9,mid,z;
            while(l<=r){
                mid=l+(r-l)/2;
                if(valid(mid*dx+x,mid*dy+y)){
                    z=mid;
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            return z;
            }


    int main(){
        ll currentsteps;
    cin>>n>>m>>x>>y>>k;
    while(k--){
            cin>>dx>>dy;
            if(valid(x+dx,y+dy))
            currentsteps=binary();
            else continue;
            x+=dx*currentsteps;
            y+=dy*currentsteps;
            steps+=currentsteps;
        
    }
    cout<<steps;

    }   
