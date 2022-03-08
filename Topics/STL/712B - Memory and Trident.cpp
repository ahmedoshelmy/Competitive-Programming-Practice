    #include <bits/stdc++.h>

    using namespace std;
    int main()
    {
        string x;
        cin>>x;
        int ans = 0;
        map<char,int> p ;
        p['U']=1;
        p['D'] =-1;
        p['R'] =1;
        p['L']=-1;
        stack<int> s1;
        stack<int> s2;
        char l1='X',l2='X';
        for (int i = 0; i < x.size(); ++i) {
            if(x[i]=='U'||x[i]=='D') {
                if ((l1 == 'U' && x[i] == 'D') || (l1 == 'D' && x[i] == 'U')) {
                    s1.pop();
                    if(!s1.empty())
                    l1=s1.top();
                    else l1='X';
                } else {
                    s1.push(x[i]);
                    l1=x[i];
                }
            }else{
                if ((l2 == 'R' && x[i] == 'L') || (l2 == 'L' && x[i] == 'R')) {
                    s2.pop();
                    if(!s2.empty())
                    l2=s2.top();
                    else{
                        l2='X';
                    }
                } else {
                    s2.push(x[i]);
                    l2=x[i];
                }
            }
        }
        ans = (s1.size()+s2.size());
        if(ans%2==1)cout<<-1;
        else cout<<ans/2;
//       system("pause");
        return 0;
    }

