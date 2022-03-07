    #include <bits/stdc++.h>

    using namespace std;
    map<int,int> m;
    map<int,int> e;

    #define sq(i) i*i
    int main()
    {
       string x ;
       cin>>x;
       if(x.size()<26){
           cout<<-1;
          //system("pause");
           return 0;
       }
       int chars[27]={0};
       char in;
       int uniques=0;
       int q =0;
       int startindex =0;
       int lengthofsub =0;
        for (int i = 0; i < x.size(); ++i) {
            in=x[i];
            if(lengthofsub>=26) break;
            if(in == '?'){
              q++;
              lengthofsub++;
            }
            else if(chars[in-'A']==0){
                uniques++;
                lengthofsub++;
                chars[in-'A'] =1;
            }else{
                if(lengthofsub<26){
                  // cout<<x[i]<<" "<<lengthofsub<<endl;
                    startindex = startindex+1;
                    i = startindex-1;
                    lengthofsub=0;
                    memset(chars,0,sizeof chars);
                   //chars[in-'A']=1;
                    uniques=0;
                    q=0;
                }
            }
        }
        if((26-uniques!=q&&lengthofsub==26)||26-uniques>q) {
              cout<<-1;
//            cout<<startindex<<" "<<lengthofsub<<" "<<uniques<<" "<<q<<endl;
//            cout<<x.size();
//            system("pause");
            return 0;
        }
        int index = 0;
        for (int i = 0; i < x.size(); ++i) {
            in=x[i];
            if(in == '?') {
                if(i < startindex||i>startindex+26){
                    x[i]='A';
                }else {
                    while (chars[index] == 1 && index < 26) index++;
                    if (index < 26) {
                        chars[index] = 1;
                        x[i] = 'A' + index;
                    } else {
                        x[i] = 'A';
                    }
                }
            }
        }
        cout<<x;
//       system("pause");
        return 0;
    }

