    #include <bits/stdc++.h>
    using namespace  std;
    typedef long long ll;
    int main() {
        /*
    freopen("input.txt", "r", stdin);\
    freopen("output.txt", "w", stdout);*/

    string input;
    char x ;
    string wub = "WUB";
    string output;
    bool wubcame = false;
    cin>>input;
    //cout<<input.size();
    int lastindex;
    if(input.size()<3){
        cout<<input;
        return 0;
    }
        for (int i = 0; i < input.size()-2; ++i) {
            x = input[i];
            if(x=='W'){
                if(input[i+1]=='U'&&input.at(i+2)=='B'){
                    i+=2;
                    lastindex = i;
                    wubcame =true;
                }else {
                    if (wubcame){
                        if(output.length()!=0)
                        output = output + " ";
                        wubcame  =false;
                    }
                    output = output + x;
                }
            }else {
                if (wubcame){
                    if(output.length()!=0)
                        output = output + " ";
                    wubcame  =false;
                }
                output = output + x;

            }
        }
        char last = input[input.size()-1];
        char beforelast =  input.at(input.size()-2);
        char before =  input.at(input.size()-3);
        if(!wubcame){
            output = output + beforelast + last;
        }else{
            if(lastindex==input.size()-2){
                if(output.size()!=0)output = output + " ";
                output = output  + last;
            }else if(lastindex==input.size()-3){
                if(output.size()!=0)output = output + " ";
                output = output +  beforelast + last;
            }
        }
        cout<<output;
       // system("pause");
        return 0;
    }



