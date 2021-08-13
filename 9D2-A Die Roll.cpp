#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    int y,w,great,cnt=0;
    cin>>y>>w;
    if(y>w) great = y;
    else great = w;
    while(great!=7) {
        great++;
        cnt++;
    }
    switch(cnt){
    case 1: cout<<"1/6\n";
            break;
    case 2: cout<<"1/3\n";
            break;
     case 3: cout<<"1/2\n";
            break;
    case 4: cout<<"2/3\n";
            break;
    case 6: cout<<"1/1\n";
            break;
    case 5: cout<<"5/6\n";
            break;

    }
}
