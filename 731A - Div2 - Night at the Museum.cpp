#include <iostream>
#include <math.h>
using namespace std;


int main()
{
char c ='a';
int m=0;
int diff,diff2;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
diff=abs(s[i]-c);
diff2=abs(26-diff);
if(diff2<diff){
    m+=diff2;
    c=s[i];
}else{
   m+=diff;
    c=s[i];
}
}
cout<<m;
}


