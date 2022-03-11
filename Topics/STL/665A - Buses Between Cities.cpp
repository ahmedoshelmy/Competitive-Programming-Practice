        #include <bits/stdc++.h>

        using namespace std;
        typedef long long ll;
#define pb push_back
        int ta,a,tb,b,hstart,mstart,hend,mend;
        map<double,int> xx;
        void increment (int h1, int m1, int ta , int& h2, int &m2){
            m1 += ta;
            if(m1>59){
                h1+=(m1/60);
                m1 = m1%60;
            }
            h2 = h1;
            m2 = m1;
        }
        bool between(int h1 , int m1,int h2, int m2 ){
            int ss = h1*60+m1;
            int ee = h2*60+m2;
            for (double i = ss+.5; i < ee; i+=0.5) {
                if(xx[i]==1)return true;
            }
            return false;
        }
        int main()
        {
            char x;
            cin>>a>>ta>>b>>tb>>hstart>>x>>mstart;
            increment(hstart,mstart,ta,hend,mend);
            int ss = hstart * 60 + mstart;
            int ee = hend * 60 + mend;
//            cout<<hstart<<" "<<mstart<<" "<<hend<<" "<<mend<<endl;
//            if(ta==1&&tb==1){
//                cout<<1;
//                return 0;
//            }
            for (double i = ss+.5; i < ee; i+=0.5) {
                xx[i]=1;
            }
            vector<pair<pair<int,int>,pair<int,int>>> v;
            int hh = 5, mm = 0;
            int hh2,mm2;
            while(hh<24){
                increment(hh,mm,tb,hh2,mm2);
                v.pb({{hh,mm},{hh2,mm2}});
                increment(hh,mm,b,hh,mm);
            }
            int cnt = 0;
            for (int i = 0; i < v.size(); ++i) {
//                cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
                    if(between(v[i].first.first,v[i].first.second,v[i].second.first,v[i].second.second)){
                        cnt++;
//                        cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
                    }
            }
            cout<<cnt<<endl;
//           system("pause");
            return 0;
        }

