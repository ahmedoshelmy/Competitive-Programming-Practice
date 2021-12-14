#include <bits/stdc++.h>
using namespace  std;
typedef long long ll;

bool isSuffix(string s1,string s2){
    if(s1.size()>s2.size()){
        return false;
    }
    //if(s1==s2) return true;
    for(int i=0;i<s1.size();i++){
         int j=s2.size()-s1.size()+i;
            if(s1[i]!=s2[j]){
                return false;
            }
    }
    return true;
}
int main() {
    /*
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);*/

map <string,vector<string>> phonebook;
int n,x;
bool suffix = false;
bool suffix2 = false;
string name,phone;
int num;
map <string,vector<string>> ::iterator mapIt;
cin>>n;
for(int i=0;i<n;i++){
        cin>>name;
        cin>>x;
    for(int j=0;j<x;j++){
        suffix = suffix2 =false;
        cin>>phone;
        if(phonebook[name].size()==0){
           phonebook[name].push_back(phone);
        }
        else {
            for (int k = 0; k < phonebook[name].size() && !suffix &&!suffix2; k++) {
                if (isSuffix(phone, phonebook[name][k])) {
                    suffix = true;
                }
                else if (isSuffix(phonebook[name][k], phone)) {
                    suffix2 = true;
                    suffix = true;
                    phonebook[name].erase(phonebook[name].begin()+k);
                    phonebook[name].push_back(phone);
                }
            }
            if (!suffix) phonebook[name].push_back(phone);
        }

    }
}
cout<<phonebook.size()<<endl;
for(mapIt = phonebook.begin();mapIt!=phonebook.end();mapIt++){
     name =mapIt->first;
     cout<<name<<" "<<phonebook[name].size()<<" ";
     for(int i=0;i<phonebook[name].size();i++){
      cout<<phonebook[name][i]<<" ";
     }
     cout<<endl;
}
    //system("pause");
return 0;

}


