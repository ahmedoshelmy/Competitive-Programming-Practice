
    #include <bits/stdc++.h>
    using namespace  std;
    typedef long long ll;
    int main() {
        /*
    freopen("input.txt", "r", stdin);\
    freopen("output.txt", "w", stdout);*/
       string t1name,t2name;
       cin>>t1name>>t2name;
        int n,minute,x;
       char team,card;
       int team1players[100]={0};
       int team2players[100]={0};
       cin>>n;
        for (int i = 0; i < n; ++i) {
                cin>>minute>>team>>x>>card;
                if(team == 'h'){
                    if(card == 'r'&&team1players[x]<2){
                        cout<<t1name<<" "<<x<<" "<<minute<<"\n";
                        team1players[x]=2;
                    }else{
                        if(team1players[x]==1){
                            cout<<t1name<<" "<<x<<" "<<minute<<"\n";
                            team1players[x] =2;
                        }
                         else team1players[x]++;
                    }
                }else{
                    if(card == 'r'&&team2players[x]<2){
                        cout<<t2name<<" "<<x<<" "<<minute<<"\n";
                        team2players[x]=2;
                    }else{
                        if(team2players[x]==1){
                            cout<<t2name<<" "<<x<<" "<<minute<<"\n";
                            team2players[x]=2;
                        }else{
                            team2players[x]++;

                        }
                    }
                }
        }
        //system("pause");
        return 0;
    }


