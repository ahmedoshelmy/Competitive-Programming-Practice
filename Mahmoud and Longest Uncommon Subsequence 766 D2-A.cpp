    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;

    #define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
    int main() {
         // freopen("window.in", "r", stdin);
        IO;
        /*#ifndef ONLINE_JUDGE
        freopen("output.txt", "w", stdout);
        #endif*/
        string s1, s2;
        cin>>s1>>s2;
        if(s1==s2){
            cout<<-1<<"\n";
        }else {
            if(s1.size()>s2.size()) cout<<s1.size();
            else cout<<s2.size();

        }
    }
