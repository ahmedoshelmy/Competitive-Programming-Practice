#include <bits/stdc++.h>
using namespace  std;
typedef long long ll;

int main() {
    /*
freopen("input.txt", "r", stdin);\
freopen("output.txt", "w", stdout);*/

    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <=9; ++j) {
            for (int k = 1; k <=9 ; ++k) {
                for (int l = 1; l <=9 ; ++l) {
                    if(i+j==r1&&i+l==d1&&i+k==c1&&k+l==r2&&l+j==c2&&j+k==d2&&k!=j&&j!=i&&l!=k&&i!=k&&j!=l&&i!=l){
                        cout<<i<<" "<<j<<endl;
                        cout<<k<<" "<<l<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<-1;
   // system("pause");
    return 0;
}



