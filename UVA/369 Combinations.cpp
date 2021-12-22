
    #include <bits/stdc++.h>

    using namespace std;
    typedef long long ll;
    typedef long double ld;

    int main(){
        ll arr[105][105]={0};
        arr[0][0]=1;
        arr[0][1]=1;
        for(int i=1;i<=100;i++){
            arr[i][0]=1;
            arr[i][1]=i;
            for(int j=2;j<=i;j++){
                    if(i==j){
                        arr[i][j]=1;
                    }
                    else arr[i][j]=arr[i][j-1]*(i-j+1)/j;
            }
        }
       ll n=1,m=1,c,mm=1;
       do{
           cin>>n>>m;
            if(n==0&&m==0){
               return 0;
           }
           mm=m;
           if(mm>n/2){
               mm=n-m;
           }
           if(n==m){
               c=1;
           }
            else c=arr[n][mm];
            cout<<n<<" things taken "<< m<< " at a time is "<<c<<" exactly.\n";
       }while(!(n==0&&m==0));
       return 0;
    }
