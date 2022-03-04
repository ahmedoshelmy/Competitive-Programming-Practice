#include <bits/stdc++.h>

using namespace std;
int main()
{
   string x;
   cin>>x;
   bool firstfound = false;
   bool overlapping = false;
   bool secondfound = false;
   int overlappingcnt = 0;
   int cnt = 0;
    for (int i = 0; i < x.size()-1; ++i) {
        if(x[i]=='A'){
            if(x[i+1]=='B') {
                if(i>0 && x[i-1] =='B') overlappingcnt++;
                firstfound=true;
                cnt++;
            }
        }if(x[i]=='B'){
            if(x[i+1]=='A') {
                if(i>0 && x[i-1] =='A') overlappingcnt++;
                secondfound=true;
                cnt++;
            }
        }
    }
    if(firstfound&&secondfound&&cnt>3){
        cout<<"YES";
    }
    else if(overlappingcnt>0 &&cnt<3) cout<<"NO";
    else if(firstfound&&secondfound&&overlappingcnt>=cnt-1) cout<<"NO";
    else if(firstfound&&secondfound&&cnt>=2) cout<<"YES";
    else cout<<"NO";
    //system("pause");
    return 0;
}
