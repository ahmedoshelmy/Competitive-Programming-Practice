#include <bits/stdc++.h>
using namespace  std;
typedef long long ll;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int steps[20001]={-1};
queue<int> q;

void bfs(int n,int m){
    int red = 2*n;
    int blue = n-1;
while(q.size()>0){
    n = q.front();
    if(n==m){
        cout<<steps[n];
        return;
    }
    red = 2*n;
    blue = n-1;
    q.pop();
    if(red < 20000 && steps[red]==-1){
        q.push(red);
        steps[red] = steps[n]+1;
    }
    if(blue >0 && steps[blue]==-1){
        q.push(blue);
        steps[blue] = steps[n]+1;
    }

}
}

int main() {
    /*
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);*/
    int n,m;
    cin>>n>>m;
    memset(steps,-1,sizeof steps);
    steps[n]=0;
    q.push(n);
    bfs(n,m);
    //system("pause");
    return 0;
}


