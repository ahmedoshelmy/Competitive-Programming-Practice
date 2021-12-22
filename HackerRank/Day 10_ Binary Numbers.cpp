#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ones=0; 
    int maxOnes = 0;
    
    bool one=false;
    int n; 
    cin>>n;
    while(n>0){
        if(n%2==0){ one = false;
        maxOnes=max(ones,maxOnes);
        ones=0;
        }
        else{
            if(one == true) ones++;
            else {
            one= true;
            ones++;
            }
        }
        n/=2;
    }
    maxOnes=max(ones,maxOnes);

    cout<<maxOnes;
        return 0;
}
