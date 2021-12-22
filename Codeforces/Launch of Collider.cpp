    #include <bits/stdc++.h>

    typedef long long ll;
    using namespace std;
    const int MAX = 1e18 + 9;
    void fast() {
        std::ios_base::sync_with_stdio(0);
    }
    int main()
    {
        int n;
        cin>>n;
        ll secs=1e11;;
        string directions;
        cin>>directions;
        bool collide =false;
        ll pos[200001];
        for(int i=0;i<n;i++){
            cin>>pos[i];
        }
        for(int i=1;i<n;i++){
            if(directions[i]=='L'&&directions[i-1]=='R'){
                secs=min(secs,(pos[i]-pos[i-1])/2);
                collide=true;
            }
        }
        if(collide)cout<<secs;
        else cout<<-1;
        return 0;
    }


