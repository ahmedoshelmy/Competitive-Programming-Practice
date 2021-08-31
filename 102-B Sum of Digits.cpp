    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;

    #define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
    int main() {

        int n=11,cnt=0,sum=0;
        string s;
        cin>>s;
        if(s.size()<2){
            cout<<0;
            return 0;
        }
        while(s.size()>1){
                sum=0;
        for(int i=0;i<s.size();i++){
            sum+=(s[i]-'0');
        }
        s=to_string(sum);
        cnt++;
        }
        cout<<cnt;
        return 0;

    }
