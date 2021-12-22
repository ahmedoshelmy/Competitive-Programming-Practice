    #include <bits/stdc++.h>

    using namespace std;
    typedef long long ll;
    typedef long double ld;

   int mod(int a, int b, int c)
{
    if(b==0) return 1;

    if(b%2==0)
    {
        int x=mod(a,b/2,c);
        return (x*x)%c;
    }
    else return (a%c * mod(a,b-1,c))%c;
}
    int main(){
        int b,p,m;
	while (cin>>b>>p>>m){
            cout<<mod(b,p,m)<<endl;
        }
        return 0;

    }
