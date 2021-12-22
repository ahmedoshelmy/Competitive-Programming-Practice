    #include <bits/stdc++.h>

    typedef long long ll;
    using namespace std;
    const int MAX = 1e18 + 9;
    void fast() {
        std::ios_base::sync_with_stdio(0);
    }
    int segments(int x){
    if(x==2||x==3||x==5) return 5;
    if(x==0||x==9||x==6) return 6;
    if(x==1) return 2;
    if(x==8) return 7;
    if(x==4) return 4;
    if(x==7) return 3;
    }
    int main()
    {
        int n,a,b,cnt=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            int num=i;
            while(num>0){
                cnt+=segments(num%10);
                num/=10;
            }
        }
        cout<<cnt;
        return 0;
    }


