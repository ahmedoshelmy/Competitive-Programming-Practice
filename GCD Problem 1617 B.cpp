#include <bits/stdc++.h>
using namespace  std;
typedef long long ll;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}


int main() {
    /*
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);*/
    int t,n,a,b,c;
    cin>>t;
    while(t--) {
        cin >> n;
        c = 1;
        for (int i = n-3; i >3 ; --i) {
          a = i;
          b = n-c-a;
          if(gcd(a,b)==c) {
              break;
          }
        }
        cout << a << " " << b << " " << c << endl;
    }
    //system("pause");
    return 0;
}


