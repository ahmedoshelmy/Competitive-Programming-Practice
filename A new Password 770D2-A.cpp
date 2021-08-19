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
    int n,k,r1,r2;
    char ch1,ch2;
    int arr[26]={0};
    cin>>n>>k;
    for(int i=0;i<n;i++){
    if(!i){
        r1=rand()&26;
        ch1=r1+'a';
        cout<<ch1;
        arr[r1]++;
        k--;
    }else{
        if(!k){

            for(int i=0;i<26;i++){
                if(arr[i]&&i!=r2){
                    ch2=i+'a';
                    cout<<ch2;
                    r2=i;
                    break;
                }
            }
        }else{
            r2=rand()%26;
            while(r2==r1||arr[r2]){
                    r2=rand()%26;
            }
            arr[r2]++;
            k--;
            ch2=r2+'a';
            cout<<ch2;

        }
    }


    }
    }
